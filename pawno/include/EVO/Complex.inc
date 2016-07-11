#define COMPLEX_DEFAULT_OWNER "Complex Administration"
#define MAX_COMPLEX_BANK 1000000

new enteredcomplex[MAX_PLAYERS];
new complexinfostr[256];

enum COMPLEX_INFO
{
	cID,
	cOn,
	Float:cEnterX,
	Float:cEnterY,
	Float:cEnterZ,
	Float:cExitX,
	Float:cExitY,
	Float:cExitZ,
	cOwner[64],
	cOwned,
	cLocked,
	cInt,
	cVW,
	cPrice,
	cLevel,
	cPickup,
	Text3D:cLabel,
	cBank
};

new ComplexInfo[MAX_COMPLEX][COMPLEX_INFO];

//MYSQL STUFF
stock ComplexLoadMySQL()
{
	format(query, sizeof(query), "SELECT * FROM `complex`");
	mysql_function_query(dbHandle, query, true, "LoadDynamicComplex", "");
	return 1;
}

forward LoadDynamicComplex();
public LoadDynamicComplex()
{
    new rows, fields;
	new total = 0, actual = 1;
    cache_get_data(rows, fields);
    if(rows)
    {
		while(total < rows)
		{
			ComplexInfo[actual][cID] = cache_get_row_int(total, 0);
			ComplexInfo[actual][cOn] = cache_get_row_int(total, 1);
			ComplexInfo[actual][cEnterX] = cache_get_row_int(total, 2);
			ComplexInfo[actual][cEnterY] = cache_get_row_int(total, 3);
			ComplexInfo[actual][cEnterZ] = cache_get_row_int(total, 4);
			ComplexInfo[actual][cExitX] = cache_get_row_int(total, 5);
			ComplexInfo[actual][cExitY] = cache_get_row_int(total, 6);
			ComplexInfo[actual][cExitZ] = cache_get_row_int(total, 7);
			cache_get_row(total, 8, ComplexInfo[actual][cOwner], dbHandle, 64); 
			ComplexInfo[actual][cOwned] = cache_get_row_int(total, 9);
			ComplexInfo[actual][cLocked] = cache_get_row_int(total, 10);
			ComplexInfo[actual][cInt] = cache_get_row_int(total, 11);
			ComplexInfo[actual][cVW] = cache_get_row_int(total, 12);
			ComplexInfo[actual][cPrice] = cache_get_row_int(total, 13);
			ComplexInfo[actual][cLevel] = cache_get_row_int(total, 14);
			ComplexInfo[actual][cBank] = cache_get_row_int(total, 15);
			AddComplexPickup(actual);
			AddComplexText(actual);
			total++;
			actual++;
		}
    }
	format(msg,sizeof(msg), "Au fost incarcate %d complexe din MySQL.", total);
	printf(msg);
    return 1; 
}

stock SaveComplexes()
{
	new msg = 1;
	for(new i=1;i<=MAX_COMPLEX;i++)
	{
		if(ComplexInfo[i][cOn] == 1) SaveComplex(i, msg);
	}
	if(msg == 0) return printf("Datele complexelor au fost salvate in MySQL.");
	return 1;
}

stock SaveComplex(complex, withmsg)
{
	//PRIMA PARTE
	format(query, sizeof(query), "UPDATE `complex` SET `on` = %d, `x` = %f, `y` = %f, `z` = %f, `cx` = %f, `cy` = %f, `cz` = %f WHERE `id` = %d",
	ComplexInfo[complex][cOn],
	ComplexInfo[complex][cEnterX],
	ComplexInfo[complex][cEnterY],
	ComplexInfo[complex][cEnterZ],
	ComplexInfo[complex][cExitX],
	ComplexInfo[complex][cExitY],
	ComplexInfo[complex][cExitZ],
	ComplexInfo[complex][cID]);
	mysql_function_query(dbHandle, query, false, "", "");
	printf("COMPLEX: %s", query);
	//PARTEA A 2-A
	format(query, sizeof(query), "UPDATE `complex` SET `owner` = '%s', `owned` = %d, `int` = %d, `vw` = %d, `price` = %d, `level` = %d, `bank` = %d WHERE `id` = %d",
	ComplexInfo[complex][cOwner],
	ComplexInfo[complex][cOwned],
	ComplexInfo[complex][cInt],
	ComplexInfo[complex][cVW],
	ComplexInfo[complex][cPrice],
	ComplexInfo[complex][cLevel],
	ComplexInfo[complex][cBank],
	ComplexInfo[complex][cLocked],
	ComplexInfo[complex][cID]);
	mysql_function_query(dbHandle, query, false, "", "");
	printf("COMPLEX: %s", query);
	if(withmsg == 1)
	{
		format(msg, sizeof(msg), "Datele complexului %d au fost salvate in MySQL", complex);
		print(msg);
	}
}

stock AddComplexToMySQL(complex)
{
	format(query, sizeof(query), "INSERT INTO `complex` (`on`, `x`, `y`, `z`, `cx`, `cy`, `cz`, `owner`, `owned`, `int`, `vw`, `price`, `level`, `bank`) VALUES (%d, %f, %f, %f, %f, %f, %f, '%s', %d, %d, %d, %d, %d, %d)",
	ComplexInfo[complex][cOn],
	ComplexInfo[complex][cEnterX],
	ComplexInfo[complex][cEnterY],
	ComplexInfo[complex][cEnterZ],
	ComplexInfo[complex][cExitX],
	ComplexInfo[complex][cExitY],
	ComplexInfo[complex][cExitZ],
	ComplexInfo[complex][cOwner],
	ComplexInfo[complex][cOwned],
	ComplexInfo[complex][cInt],
	ComplexInfo[complex][cVW],
	ComplexInfo[complex][cPrice],
	ComplexInfo[complex][cLevel],
	ComplexInfo[complex][cBank]);
	mysql_function_query(dbHandle, query, true, "OnComplexInsert", "d", complex);
	printf("COMPLEX: %s", query);
	return 1;
}

forward OnComplexInsert(complex);
public OnComplexInsert(complex)
{
	ComplexInfo[complex][cID] = cache_insert_id(dbHandle);
	return 1;
}

stock RemoveComplexMySQL(complex)
{
	format(query, sizeof(query), "DELETE FROM `complex` WHERE `id` = %d", ComplexInfo[complex][cID]);
	printf("COMPLEX: %s", query);
	mysql_function_query(dbHandle, query, false, "", "");
}
//STOCKS
stock GetNextComplexID()
{
	new i=1;
	while (i!=MAX_COMPLEX)
	{
		if(ComplexInfo[i][cOn] == 0) return i;
		i++;
	}
	return -1;
}

stock GetNearbyComplex(playerid)
{
	for(new i=1;i<=sizeof(ComplexInfo);i++)
	{
		if(PlayerToPoint(3.0, playerid, ComplexInfo[i][cEnterX], ComplexInfo[i][cEnterY], ComplexInfo[i][cEnterZ])) { return i; }
	}
	return -1;
}

stock GetComplexLocation(complex)
{
	new string[64];
	GetCoords2DZone(ComplexInfo[complex][cEnterX], ComplexInfo[complex][cEnterY], string, MAX_ZONE_NAME);
	return string;
}

stock AddComplexText(complex)
{
	if(ComplexInfo[complex][cOwned] == 0) format(complexinfostr, 256, "Complex %s (%d)\nNivel %d\nPret %d\nFoloseste /buycomplex pentru a cumpara!", GetComplexLocation(complex), complex, ComplexInfo[complex][cLevel], ComplexInfo[complex][cPrice]);
	else if(ComplexInfo[complex][cOwned] == 1) format(complexinfostr, 256, "Complex %s (%d)\nPropietar %s\nFoloseste /enter pentru a intra!", GetComplexLocation(complex), complex, ComplexInfo[complex][cOwner]);
	ComplexInfo[complex][cLabel] = CreateDynamic3DTextLabel(complexinfostr, COLOR_HOUSE, ComplexInfo[complex][cEnterX], ComplexInfo[complex][cEnterY], ComplexInfo[complex][cEnterZ], 3.0, INVALID_PLAYER_ID, INVALID_VEHICLE_ID, 0, -1, -1, -1, 100.0);
	return 1;
}

stock UpdateComplexText(complex)
{
	if(ComplexInfo[complex][cOwned] == 0) format(complexinfostr, 256, "Complex %s (%d)\nNivel %d\nPret %d\nFoloseste /buycomplex pentru a cumpara!", GetComplexLocation(complex), complex, ComplexInfo[complex][cLevel], ComplexInfo[complex][cPrice]);
	else if(ComplexInfo[complex][cOwned] == 1) format(complexinfostr, 256, "Complex %s (%d)\nPropietar %s\nFoloseste /enter pentru a intra!", GetComplexLocation(complex), complex, ComplexInfo[complex][cOwner]);	UpdateDynamic3DTextLabelText(Text3D:ComplexInfo[complex][cLabel], -1, complexinfostr);
	return 1;
}

stock UpdateComplexPickup(complex)
{
	DestroyDynamicPickup(ComplexInfo[complex][cPickup]);
	return AddComplexPickup(complex);
}

stock AddComplexPickup(complex)
{
	if(ComplexInfo[complex][cOwned] == 1)
	{
		ComplexInfo[complex][cPickup] = CreateDynamicPickup(1239, 1, ComplexInfo[complex][cEnterX], ComplexInfo[complex][cEnterY], ComplexInfo[complex][cEnterZ], -1);
	}
	else
	{
		ComplexInfo[complex][cPickup] = CreateDynamicPickup(1272, 1, ComplexInfo[complex][cEnterX], ComplexInfo[complex][cEnterY], ComplexInfo[complex][cEnterZ], -1);
	}
	return 1;
}

stock AddComplexInterior(complex, int)
{
	switch(int)
	{
		case 1:
		{
			ComplexInfo[complex][cExitX] = 1758.51;
			ComplexInfo[complex][cExitY] = -2037.42;
			ComplexInfo[complex][cExitZ] = 1996.68;
		}
		case 2:
		{
			ComplexInfo[complex][cExitX] = 2187.84;
			ComplexInfo[complex][cExitY] = -1244.81;
			ComplexInfo[complex][cExitZ] = 1529.11;
		}
	}
	printf("COMPLEX: A fost setat interiorul %d pentru complexul %d.", int, complex);
	return 1;
}
//COMMANDS
//ADMINS
CMD:makecomplex(playerid, params[])
{
	if(!CheckAdmin(playerid, ADMIN_LEVEL_4)) return NotAuthMSG(playerid);
	new level, price, int;
	if(sscanf(params, "iii", level, price, int)) return SyntaxMSG(playerid, "/makecomplex [level] [price] [interior(1-2)]");
	if(level <= 1) return SCM(playerid, COLOR_GREY, "Nivelul trebuie sa fie mai mare ca 1!");
	if(price <= 1) return SCM(playerid, COLOR_GREY, "Pretul trebuie sa fie mai mare ca 1!");
	if(int < 1 && int > 2) return SCM(playerid, COLOR_GREY, "Interior invalid!");
	new complex = GetNextComplexID();
	new Float:X, Float:Y, Float:Z;
	GetPlayerPos(playerid, X, Y, Z);
	ComplexInfo[complex][cID] = complex;
	ComplexInfo[complex][cOn] = 1;
	ComplexInfo[complex][cEnterX] = X;
	ComplexInfo[complex][cEnterY] = Y;
	ComplexInfo[complex][cEnterZ] = Z;
	format(ComplexInfo[complex][cOwner], 32, COMPLEX_DEFAULT_OWNER);
	ComplexInfo[complex][cOwned] = 0;
	ComplexInfo[complex][cLocked] = 0;
	ComplexInfo[complex][cInt] = 0;
	ComplexInfo[complex][cVW] = complex;
	ComplexInfo[complex][cPrice] = price;
	ComplexInfo[complex][cLevel] = level;
	AddComplexPickup(complex);
	AddComplexText(complex);
	AddComplexInterior(complex, int);
	AddComplexToMySQL(complex);	
	return 1;
}

CMD:removecomplex(playerid, params[])
{
	if(!CheckAdmin(playerid, ADMIN_LEVEL_4)) return NotAuthMSG(playerid);
	new complex = GetNearbyComplex(playerid);
	if(complex == -1) return SCM(playerid, COLOR_GREY, "Nu esti langa un complex!");
	if(ComplexInfo[complex][cOwned] == 1)
	{
		new ok;
		new money = Procent(ComplexInfo[complex][cPrice], 60);
		foreach(Player, i)
		{
			if(CompareStrings(GetName(i), ComplexInfo[complex][cOwner]))
			{
				SCMEx(i, COLOR_LIGHTRED, "%s ti-a vandut complexul si ai primit %d$ inapoi", GetName(playerid), money);
				format(msg, sizeof(msg), "AdmCmd: %s i-a vandut complexul lui %s (ID: %d) si acesta a primit %s inapoi!", GetName(playerid), GetName(i), i, money);
				PlayerInfo[playerid][pComplex] = 0;
				GiveCash(playerid, money);
				ok = 1;
			}
		}
		if(ok != 1)
		{
			SCMEx(playerid, COLOR_GREY, "Complexul lui %s a fost vandut, iar acesta nu este online! Banii ce trebuiesc returnati: %d", ComplexInfo[complex][cOwner], money);
		}
	}
	ComplexInfo[complex][cID] = 0;
	ComplexInfo[complex][cOn] = 0;
	ComplexInfo[complex][cExitX] = 0;
	ComplexInfo[complex][cExitY] = 0;
	ComplexInfo[complex][cExitZ] = 0;
	ComplexInfo[complex][cEnterX] = 0;
	ComplexInfo[complex][cEnterY] = 0;
	ComplexInfo[complex][cEnterZ] = 0;
	format(ComplexInfo[complex][cOwner], 32, " ");
	ComplexInfo[complex][cOwned] = 0;
	ComplexInfo[complex][cLocked] = 0;
	ComplexInfo[complex][cInt] = 0;
	ComplexInfo[complex][cVW] = 0;
	ComplexInfo[complex][cPrice] = 0;
	ComplexInfo[complex][cLevel] = 0;
	DestroyDynamicPickup(ComplexInfo[complex][cPickup]);
	ComplexInfo[complex][cPickup] = 0;
	DestroyDynamicPickup(ComplexInfo[complex][cPickup]);
	DestroyDynamic3DTextLabel(Text3D:ComplexInfo[complex][cLabel]);
	RemoveComplexMySQL(complex);
	return 1;
}

CMD:editcomplex(playerid, params[])
{
	if(!CheckAdmin(playerid, ADMIN_LEVEL_4)) return NotAuthMSG(playerid);
	new type, input[32];
	if(sscanf(params, "is[32]", type, input)) return SyntaxMSG(playerid, "/editcomplex [1 - level  | 2 - price | 3 - enter | 4 - exit | 5 - bank] [input]");
	new complex = GetNearbyComplex(playerid);
	if(complex == -1) return SCM(playerid, COLOR_GREY, "Nu esti langa un complex!");
	switch(type)
	{
		case 1:
		{
			ComplexInfo[complex][cLevel] = strval(input);
			format(query, sizeof(query), "UPDATE `complex` SET `level` = %d WHERE `id` = %d", input, complex);
		}
		case 2:
		{
			ComplexInfo[complex][cPrice] = strval(input);
			format(query, sizeof(query), "UPDATE `complex` SET `price` = %d WHERE `id` = %d", input, complex);
		}
		case 3:
		{
			new Float:X, Float:Y, Float:Z;
			GetPlayerPos(playerid, X, Y, Z);
			ComplexInfo[complex][cEnterX] = X;
			ComplexInfo[complex][cEnterY] = Y;
			ComplexInfo[complex][cEnterZ] = Z;
			format(query, sizeof(query), "UPDATE `complex` SET `x` = %f, `y` = %f, `z` = %f WHERE `id` = %d", X, Y, Z, complex);
			UpdateComplexPickup(complex);
			UpdateComplexText(complex);
		}
		case 4:
		{
			new Float:X, Float:Y, Float:Z;
			GetPlayerPos(playerid, X, Y, Z);
			ComplexInfo[complex][cExitX] = X;
			ComplexInfo[complex][cExitY] = Y;
			ComplexInfo[complex][cExitZ] = Z;
			format(query, sizeof(query), "UPDATE `complex` SET `exitx` = %f, `exity` = %f, `exitz` = %f WHERE `id` = %d", X, Y, Z, complex);
		}
		case 5:
		{
			ComplexInfo[complex][cBank] = strval(input);
			format(query, sizeof(query), "UPDATE `complex` SET `bank` = %d WHERE `id` = %d", input, complex);
		}
	}
	mysql_function_query(dbHandle, query, false, "", "");
	SaveComplex(complex, 1);
	SCMEx(playerid, COLOR_WHITE, "Valoarea '%d' a fost setata la '%s'.", type, input);
	UpdateComplexText(complex);
	UpdateComplexPickup(complex);
	return 1;
}

//OWNER
CMD:sellcomplex(playerid, params[])
{
	if(PlayerInfo[playerid][pComplex] == 0) return SCM(playerid, COLOR_GREY, "Nu ai un complex.");
	new complex = GetNearbyComplex(playerid);
	if(PlayerInfo[playerid][pComplex] != complex) return SCM(playerid, COLOR_GREY, "Nu esti langa complexul tau!");
	new money = Procent(ComplexInfo[complex][cPrice], 60);
	SCMEx(playerid, COLOR_GREEN, "Ai vandut complexul pentru %d,", money);
	GiveCash(playerid, money);
	format(ComplexInfo[complex][cOwner], 32, "%s", COMPLEX_DEFAULT_OWNER);
	if(ComplexInfo[complex][cBank] > 0)
	{
		GiveCash(playerid, ComplexInfo[complex][cBank]);
		SCM(playerid, COLOR_GREEN, "Ai avut %d$ in seiful complexului asa ca i-ai primit inapoi.");
		ComplexInfo[complex][cBank] = 0;
	}
	ComplexInfo[complex][cOwned] = 0;
	PlayerInfo[playerid][pComplex] = -1;
	UpdateComplexText(complex);
	UpdateComplexPickup(complex);
	SaveComplex(complex, 1);
	return 1;
}

CMD:complex(playerid, params[])
{
	if(PlayerInfo[playerid][pComplex] == 0) return SCM(playerid, COLOR_GREY, "Nu ai un complex.");
	new complex = GetNearbyComplex(playerid);
	if(PlayerInfo[playerid][pComplex] != complex) return SCM(playerid, COLOR_GREY, "Nu esti langa complexul tau.");
	new type[16], value;
	if(sscanf(params, "s[16]i", type, value)) return SyntaxMSG(playerid, "/complex [withdraw/deposit/balance] [suma(doar la withdraw/deposit]");
	if(value <= 0) return SCM(playerid, COLOR_GREY, "Suma trebuie sa fie pozitiva.");
	if(CompareStrings(type, "withdraw"))
	{
		if(ComplexInfo[complex][cBank] > value) return SCM(playerid, COLOR_GREY, "Nu ai suficienti bani in complex.");
		ComplexInfo[complex][cBank] -= value;
		GiveCash(playerid, value);
		SCMEx(playerid, COLOR_GREY, "Ai extras din complex suma de %d$.", value);
		format(msg, sizeof(msg), "AdmWarn: %s a extras din complexul %d suma de %d$.", GetName(playerid), complex, value);
		AMSG(COLOR_LIGHTRED, msg);
	}
	if(CompareStrings(type, "deposit"))
	{
		if(ComplexInfo[complex][cBank] + value >= MAX_COMPLEX_BANK) return SCMEx(playerid, COLOR_GREY, "Suma maxima ce poate fi depozitata in complex este de $d!", MAX_COMPLEX_BANK);
		if(GetCash(playerid) < value) return SCM(playerid, COLOR_GREY, "Nu ai suficienti bani.");
		ComplexInfo[complex][cBank] += value;
		GiveCash(playerid, -value);
		SCMEx(playerid, COLOR_GREY, "Ai depozitat in complex suma de %d$.", value);
		format(msg, sizeof(msg), "AdmWarn: %s a depozitat in complexul %d suma de %d$.", GetName(playerid), complex, value);
		AMSG(COLOR_LIGHTRED, msg);
	}
	if(CompareStrings(type, "balance"))
	{
		SCMEx(playerid, COLOR_GREEN, "Banii din seiful complexului: %d$.", ComplexInfo[complex][cBank]);
		SCM(playerid, COLOR_OOC, "HINT: Poti folosi comenzile /complex withdraw sau /complex deposit pentru a extrage/depozita bani.");
	}
	SaveComplex(complex, 1);
	return 1;
}

//PLAYER
CMD:buycomplex(playerid, params[])
{
	if(PlayerInfo[playerid][pComplex] != 0) return SCM(playerid, COLOR_GREY, "Ai deja un complex.");
	new complex = GetNearbyComplex(playerid);
	if(complex == -1) return SCM(playerid, COLOR_GREY, "Nu esti langa un complex!");
	if(PlayerInfo[playerid][pLevel] < ComplexInfo[complex][cLevel]) return SCM(playerid, COLOR_GREY, "Nu ai nivelul necesar.");
	if(GetCash(playerid) < ComplexInfo[complex][cPrice]) return SCM(playerid, COLOR_GREY, "Nu ai suficienti bani.");
	SCMEx(playerid, COLOR_GREEN, "Felicitari! Ai cumparat un complex pentru %d,", ComplexInfo[complex][cPrice]);
	GiveCash(playerid, -ComplexInfo[complex][cPrice]);
	format(ComplexInfo[complex][cOwner], 64, "%s", GetName(playerid));
	ComplexInfo[complex][cOwned] = 1;
	PlayerInfo[playerid][pComplex] = complex;
	UpdateComplexText(complex);
	UpdateComplexPickup(complex);
	SaveComplex(complex, 1);
	SavePlayerStats(playerid);
	return 1;
}

//DEBUG
CMD:updatecomplextext(playerid, params[])
{
	if(debugmode[playerid] == 0) return NotAuthMSG(playerid);
	new complex = GetNearbyComplex(playerid);
	if(complex == -1) return SCM(playerid, COLOR_GREY, "Nu esti langa un complex!");
	UpdateComplexText(complex);
	SCMEx(playerid, COLOR_WHITE, "3DText: Updated CID: %d", complex);
	return 1;
}	

CMD:updatecomplexpickup(playerid, params[])
{
	if(debugmode[playerid] == 0) return NotAuthMSG(playerid);
	new complex = GetNearbyComplex(playerid);
	if(complex == -1) return SCM(playerid, COLOR_GREY, "Nu esti langa un complex!");
	UpdateComplexPickup(complex);
	SCMEx(playerid, COLOR_WHITE, "Pickup: Updated CID: %d", complex);
	return 1;
}