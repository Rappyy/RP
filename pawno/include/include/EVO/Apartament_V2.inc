#define APARTAMENT_DEFAULT_OWNER "Complex Administration"
#define MAX_APARTAMENT_BANK 1000000
#define MAX_APARTAMENT_RENT_PRICE 150

new apinfostr[256];
new enteredapartament[MAX_PLAYERS];

enum AP_INFO{
	aID,
	aOn,
	Float:aEnterX,
	Float:aEnterY,
	Float:aEnterZ,
	Float:aExitX,
	Float:aExitY,
	Float:aExitZ,
	aOwner[64],
	aOwned,
	aPrice,
	aLevel,
	aLocked,
	aRentable,
	aRentPrice,
	aBank,
	aPickup,
	aInt,
	Text3D:aLabel
}

new ApartamentInfo[MAX_COMPLEX][MAX_APARTAMENT][AP_INFO];
//MYSQL STUFF
stock ApartamentLoadMySQL()
{
	format(query, sizeof(query), "SELECT * FROM `apartament`");
	mysql_function_query(dbHandle, query, true, "LoadDynamicApartament", "");
	return 1;
}

forward LoadDynamicApartament();
public LoadDynamicApartament()
{
    new rows, fields, truea;
	new total = 0;
	new done = 0;
    cache_get_data(rows, fields);
    if(rows)
    {
		while(total < MAX_APARTAMENT*MAX_COMPLEX)
		{
			truea = cache_get_row_int(total, 1);
			if(truea == 1)
			{
				new complex = cache_get_row_int(total, 2);
				ApartamentInfo[total][total][aID] = cache_get_row_int(total, 0);
				ApartamentInfo[complex][total][aOn] = 1;
				ApartamentInfo[complex][total][aEnterX] = cache_get_row_int(total, 3);
				ApartamentInfo[complex][total][aEnterY] = cache_get_row_int(total, 4);
				ApartamentInfo[complex][total][aEnterZ] = cache_get_row_int(total, 5);
				ApartamentInfo[complex][total][aExitX] = cache_get_row_int(total, 6);
				ApartamentInfo[complex][total][aExitY] = cache_get_row_int(total, 7);
				ApartamentInfo[complex][total][aExitZ] = cache_get_row_int(total, 8);
				cache_get_row(total, 9, ApartamentInfo[complex][total][aOwner], dbHandle, 64);
				ApartamentInfo[complex][total][aOwned] = cache_get_row_int(total, 10);
				ApartamentInfo[complex][total][aPrice] = cache_get_row_int(total, 11);
				ApartamentInfo[complex][total][aLevel] = cache_get_row_int(total, 12);
				ApartamentInfo[complex][total][aLocked] = cache_get_row_int(total, 13);
				ApartamentInfo[complex][total][aRentable] = cache_get_row_int(total, 14);
				ApartamentInfo[complex][total][aRentPrice] = cache_get_row_int(total, 15);
				ApartamentInfo[complex][total][aBank] = cache_get_row_int(total, 16);
				ApartamentInfo[complex][total][aInt] = cache_get_row_int(total, 17);
				AddApartamentPickup(complex, total);
				AddApartamentText(complex, total);
				done++;
			}
			total++;
		}
    }
	format(msg,sizeof(msg), "Au fost incarcate %d apartamente din MySQL.", done);
	printf(msg);
    return 1;
}

stock SaveApartaments()
{
	new msg = 1;
	for(new i=1;i<=MAX_COMPLEX;i++)
	{
		if(ComplexInfo[i][cOn] == 1)
		{
			for(new id=1;id<=MAX_APARTAMENT;id++)
			{
				if(ApartamentInfo[i][id][aOn] == 1) SaveApartament(i, id, msg);
			}
		}
	}
	if(msg == 0) return printf("Datele apartamentelor au fost salvate in MySQL.");
	return 1;
}

stock SaveApartament(complex, id, withmsg)
{
	//PRIMA PARTE
	format(query, sizeof(query), "UPDATE `apartament` SET `on` = %d, `complex` = %d, `x` = %f, `y` = %f, `z` = %f, `cx` = %f, `cy` = %f, `cz` = %f WHERE `id` = %d",
	ApartamentInfo[complex][id][aOn],
	complex,
	ApartamentInfo[complex][id][aEnterX],
	ApartamentInfo[complex][id][aEnterY],
	ApartamentInfo[complex][id][aEnterZ],
	ApartamentInfo[complex][id][aExitX],
	ApartamentInfo[complex][id][aExitY],
	ApartamentInfo[complex][id][aExitZ],
	ApartamentInfo[complex][id][aID]);
	mysql_function_query(dbHandle, query, false, "", "");
	printf("APARTAMENT: %s", query);
	//PARTEA A 2-A
	format(query, sizeof(query), "UPDATE `apartament` SET `owner` = '%s', `owned` = %d, `lock` = %d, `int` = %d, `price` = %d, `level` = %d, `bank` = %d, `rentprice` = %d, `rentable` = %d WHERE `id` = %d",
	ApartamentInfo[complex][id][aOwner],
	ApartamentInfo[complex][id][aOwned],
	ApartamentInfo[complex][id][aLocked],
	ApartamentInfo[complex][id][aInt],
	ApartamentInfo[complex][id][aPrice],
	ApartamentInfo[complex][id][aLevel],
	ApartamentInfo[complex][id][aBank],
	ApartamentInfo[complex][id][aRentPrice],
	ApartamentInfo[complex][id][aRentable],
	ApartamentInfo[complex][id][aID]);
	mysql_function_query(dbHandle, query, false, "", "");
	printf("APARTAMENT: %s", query);
	if(withmsg == 1)
	{
		format(msg, sizeof(msg), "Datele apartamentului %d (CID: %d) au fost salvate in MySQL", id, complex);
		print(msg);
	}
}

stock AddApartamentToMySQL(complex, id)
{
	format(query, sizeof(query), "INSERT INTO `apartament` (`on`, `complex`, `x`, `y`, `z`, `cx`, `cy`, `cz`, `owner`, `owned`, `int`, `price`, `level`, `bank`, `rentprice`, `rentable`) VALUES (%d, %f, %f, %f, %f, %f, %f, '%s', %d, %d, %d, %d, %d, %d, %d, %d)",
	ApartamentInfo[complex][id][aOn],
	complex,
	ApartamentInfo[complex][id][aEnterX],
	ApartamentInfo[complex][id][aEnterY],
	ApartamentInfo[complex][id][aEnterZ],
	ApartamentInfo[complex][id][aExitX],
	ApartamentInfo[complex][id][aExitY],
	ApartamentInfo[complex][id][aExitZ],
	ApartamentInfo[complex][id][aOwner],
	ApartamentInfo[complex][id][aOwned],
	ApartamentInfo[complex][id][aInt],
	ApartamentInfo[complex][id][aPrice],
	ApartamentInfo[complex][id][aLevel],
	ApartamentInfo[complex][id][aBank],
	ApartamentInfo[complex][id][aRentPrice],
	ApartamentInfo[complex][id][aRentable]);
	mysql_function_query(dbHandle, query, true, "OnApartamentInsert", "ii", complex, id);
	printf("APARTAMENT: %s", query);
	return 1;
}

forward OnApartamentInsert(complex, id);
public OnApartamentInsert(complex, id)
{
	ApartamentInfo[complex][id][aID] = cache_insert_id(dbHandle);
	return 1;
}

stock RemoveApartamentMySQL(complex, id)
{
	format(query, sizeof(query), "DELETE FROM `apartament` WHERE `id` = %d", ApartamentInfo[complex][id][aID]);
	mysql_function_query(dbHandle, query, false, "", "");
	
	printf("APARTAMENT: %s", query);
}

//STOCKS
stock GetNextApartamentID(complex)
{
	new i=1;
	while (i!=MAX_APARTAMENT)
	{
		if(ApartamentInfo[complex][i][aOn] == 0) return i;
		i++;
	}
	return -1;
}

stock GetNearbyApartament(playerid)
{
	for(new i=1;i<=MAX_APARTAMENT;i++)
	{
		if(ApartamentInfo[enteredcomplex[playerid]][i][aOn] == 1)
		{
			if(PlayerToPoint(3.0, playerid, ApartamentInfo[enteredcomplex[playerid]][i][aEnterX], ApartamentInfo[enteredcomplex[playerid]][i][aEnterY], ApartamentInfo[enteredcomplex[playerid]][i][aEnterZ])) return i;
		}
	}
	return -1;
}

stock SetApartamentInterior(complex, id, int)
{
	switch(int)
	{
		case 1:
		{
			ApartamentInfo[complex][id][aExitX] = 444.646911;
			ApartamentInfo[complex][id][aExitX] = 508.239044;
			ApartamentInfo[complex][id][aExitX] = 1001.419494;
			ApartamentInfo[complex][id][aInt] = 12;
		}
		case 2:
		{
			ApartamentInfo[complex][id][aExitX] = 244.411987;
			ApartamentInfo[complex][id][aExitX] = 305.032989;
			ApartamentInfo[complex][id][aExitX] = 999.148437;
			ApartamentInfo[complex][id][aInt] = 1;
		}
		case 3:
		{
			ApartamentInfo[complex][id][aExitX] = 271.884979;
			ApartamentInfo[complex][id][aExitX] = 306.631988;
			ApartamentInfo[complex][id][aExitX] = 999.148437;
			ApartamentInfo[complex][id][aInt] = 2;
		}
		case 4:
		{
			ApartamentInfo[complex][id][aExitX] = 2350.339843;
			ApartamentInfo[complex][id][aExitX] = -1181.649902;
			ApartamentInfo[complex][id][aExitX] = 1027.976562;
			ApartamentInfo[complex][id][aInt] = 5;
		}
		case 5:
		{
			ApartamentInfo[complex][id][aExitX] = 318.564971;
			ApartamentInfo[complex][id][aExitX] = 1118.209960;
			ApartamentInfo[complex][id][aExitX] = 1083.882812;
			ApartamentInfo[complex][id][aInt] = 5;
		}
	}
	SaveApartament(complex, id, 1);
	return 1;
}

stock AddApartamentPickup(complex, id)
{
	if(ApartamentInfo[complex][id][aOwned] == 1)
	{
		ApartamentInfo[complex][id][aPickup] = CreateDynamicPickup(1272, 1, ApartamentInfo[complex][id][aEnterX], ApartamentInfo[complex][id][aEnterY], ApartamentInfo[complex][id][aEnterZ], ComplexInfo[complex][cVW]);
	}
	else
	{
		ApartamentInfo[complex][id][aPickup] = CreateDynamicPickup(1273, 1, ApartamentInfo[complex][id][aEnterX], ApartamentInfo[complex][id][aEnterY], ApartamentInfo[complex][id][aEnterZ], ComplexInfo[complex][cVW]);
	}
	return 1;
}

stock UpdateApartamentPickup(complex, id)
{
	DestroyDynamicPickup(ApartamentInfo[complex][id][aPickup]);
	return AddApartamentPickup(complex, id);
}

stock AddApartamentText(complex, id)
{
	if(ApartamentInfo[complex][id][aOwned] == 0) format(apinfostr, 256, "Apartament %d\nNivel: %d\nPret: %d\nFoloseste /buyapartament pentru a cumpara", id, ApartamentInfo[complex][id][aLevel], ApartamentInfo[complex][id][aPrice]);
	else if(ApartamentInfo[complex][id][aOwned] == 1)
	{
		if(ApartamentInfo[complex][id][aRentable] == 0)	format(apinfostr, 256, "Apartament %d\nPropietar: %d\nFoloseste /enter pentru a intra", id, ApartamentInfo[complex][id][aOwner]);
		else if(ApartamentInfo[complex][id][aRentable] == 1) format(apinfostr, 256, "Apartament %d\nPropietar: %s\nChirie: %d\nFoloseste /rentapartament pentru a intra", id, ApartamentInfo[complex][id][aOwner], ApartamentInfo[complex][id][aRentPrice]);
	}
	ApartamentInfo[complex][id][aLabel] = CreateDynamic3DTextLabel(complexinfostr, COLOR_HOUSE, ApartamentInfo[complex][id][aEnterX], ApartamentInfo[complex][id][aEnterY], ApartamentInfo[complex][id][aEnterZ], 3.0, INVALID_PLAYER_ID, INVALID_VEHICLE_ID, 0, -1, -1, -1, 100.0);
	return 1;
}

stock UpdateApartamentText(complex, id)
{
	if(ApartamentInfo[complex][id][aOwned] == 0) format(apinfostr, 256, "Apartament %d\nNivel: %d\nPret: %d\nFoloseste /buyapartament pentru a cumpara", id, ApartamentInfo[complex][id][aLevel], ApartamentInfo[complex][id][aPrice]);
	else if(ApartamentInfo[complex][id][aOwned] == 1)
	{
		if(ApartamentInfo[complex][id][aRentable] == 0)	format(apinfostr, 256, "Apartament %d\nPropietar: %d\nFoloseste /enter pentru a intra", id, ApartamentInfo[complex][id][aOwner]);
		else if(ApartamentInfo[complex][id][aRentable] == 1) format(apinfostr, 256, "Apartament %d\nPropietar: %s\nChirie: %d\nFoloseste /rentapartament pentru a intra", id, ApartamentInfo[complex][id][aOwner], ApartamentInfo[complex][id][aRentPrice]);
	}
	UpdateDynamic3DTextLabelText(Text3D:ApartamentInfo[complex][id][aLabel], -1, apinfostr);
	return 1;
}
//COMMANDS
//ADMINS
CMD:makeapartament(playerid, params[])
{
	if(!CheckAdmin(playerid, ADMIN_LEVEL_4)) return NotAuthMSG(playerid);
	if(enteredcomplex[playerid] == 0) return SCM(playerid, COLOR_GREY, "Nu esti intr-un complex!");
	new level, price, int;
	if(sscanf(params, "iii", level, price, int)) return SyntaxMSG(playerid, "/makeapartament [level] [price] [interior(1-5)]");
	if(int < 1 || int > 5) return SCM(playerid, COLOR_GREY, "Interior invalid (1-5)!");
	new Float:X, Float:Y, Float:Z;
	GetPlayerPos(playerid, X, Y, Z);
	new complex = enteredcomplex[playerid];
	new id = GetNextApartamentID(complex);
	ApartamentInfo[complex][id][aOn] = 1;
	ApartamentInfo[complex][id][aEnterX] = X;
	ApartamentInfo[complex][id][aEnterY] = Y;
	ApartamentInfo[complex][id][aEnterZ] = Z;
	SetApartamentInterior(complex, id, int);
	format(ApartamentInfo[complex][id][aOwner], 64, "%s", ComplexInfo[complex][cOwner]);
	ApartamentInfo[complex][id][aOwned] = 1;
	ApartamentInfo[complex][id][aLevel] = level;
	ApartamentInfo[complex][id][aPrice] = price;
	ApartamentInfo[complex][id][aLocked] = 0;
	ApartamentInfo[complex][id][aRentPrice] = 0;
	ApartamentInfo[complex][id][aRentable] = 0;
	AddApartamentPickup(complex, id);
	AddApartamentText(complex, id);
	AddApartamentToMySQL(complex, id);
	return 1;
}

CMD:removeapartament(playerid, params[])
{
	if(!CheckAdmin(playerid, ADMIN_LEVEL_4)) return NotAuthMSG(playerid);
	if(enteredcomplex[playerid] == 0) return SCM(playerid, COLOR_GREY, "Nu esti intr-un complex!");
	new complex = enteredcomplex[playerid];
	new id = GetNearbyApartament(playerid);
	if(id == -1) return SCM(playerid, COLOR_GREY, "Nu esti langa un apartament!");
	if(ComplexInfo[complex][cOwned] == 1)
	{
		new ok;
		new money = Procent(ComplexInfo[complex][cPrice], 80);
		foreach(Player, i)
		{
			if(CompareStrings(GetName(i), ComplexInfo[complex][cOwner]))
			{
				SCMEx(i, COLOR_LIGHTRED, "%s ti-a vandut apartametnul si ai primit %d$ inapoi", GetName(playerid), money);
				format(msg, sizeof(msg), "AdmCmd: %s i-a vandut apartamentul lui %s(ID:%d) si acesta a primit %d inapoi!", GetName(i), i, money);
				AMSG(COLOR_LIGHTRED, msg);
				PlayerInfo[i][pComplex] = 0;
				GiveCash(i, money);
				ok = 1;
			}
		}
		if(ok != 1)
		{
			format(msg, sizeof(msg), "AdmCmd: %s i-a vandut apartamentul lui %s iar acesta nu este online! Bani ce trebuie returnati: %d", ComplexInfo[complex][cOwner], money);
			AMSG(COLOR_LIGHTRED, msg);
		}
	}
	format(ApartamentInfo[complex][id][aOwner], 64, " ");
	ApartamentInfo[complex][id][aOn] = 0;
	ApartamentInfo[complex][id][aEnterX] = 0.0;
	ApartamentInfo[complex][id][aEnterY] = 0.0;
	ApartamentInfo[complex][id][aEnterZ] = 0.0;
	ApartamentInfo[complex][id][aExitX] = 0.0;
	ApartamentInfo[complex][id][aExitY] = 0.0;
	ApartamentInfo[complex][id][aExitZ] = 0.0;
	ApartamentInfo[complex][id][aOwned] = 0;
	ApartamentInfo[complex][id][aLevel] = 0;
	ApartamentInfo[complex][id][aPrice] = 0;
	ApartamentInfo[complex][id][aLocked] = 0;
	ApartamentInfo[complex][id][aRentPrice] = 0;
	ApartamentInfo[complex][id][aRentable] = 0;
	DestroyDynamicPickup(ApartamentInfo[complex][id][aPickup]);
	DestroyDynamic3DTextLabel(Text3D:ApartamentInfo[complex][id][aLabel]);
	RemoveApartamentMySQL(complex, id);
	return 1;
}

CMD:editapartament(playerid, params[])
{
	if(!CheckAdmin(playerid, ADMIN_LEVEL_4)) return NotAuthMSG(playerid);
	if(enteredcomplex[playerid] == 0) return SCM(playerid, COLOR_GREY, "Nu esti intr-un complex!");
	new type, input[32];
	if(sscanf(params, "is[32]", type, input)) return SyntaxMSG(playerid, "/editapartament [1 - level | 2 - price | 3 - interior(1-5) | 4 - entrance | 5 - locked");
	new complex = enteredcomplex[playerid];
	new id = GetNearbyApartament(playerid);
	if(id == -1) return SCM(playerid, COLOR_GREY, "Nu esti langa un apartament.");
	switch(type)
	{
		case 1:
		{
			ApartamentInfo[complex][id][aLevel] = strval(input);
			format(query, sizeof(query), "UPDATE `apartaments` SET `level` = '%d' WHERE `cid` = '%d' AND `complex` = '%d'", strval(input), id, complex);
		}
		case 2:
		{
			ApartamentInfo[complex][id][aPrice] = strval(input);
			format(query, sizeof(query), "UPDATE `apartaments` SET `price` = '%d' WHERE `cid` = '%d' AND `complex` = '%d'", strval(input), id, complex);
		}
		case 3:
		{
			if(strval(input) < 1 || strval(input) > 5) return SCM(playerid, COLOR_GREY, "Interiorul este invalid!");
			SetApartamentInterior(complex, id, strval(input));
			format(query, sizeof(query), "UPDATE `apartaments` SET `int` = '%d' WHERE `cid` = '%d' AND `complex` = '%d'", strval(input), id, complex);
		}
		case 4:
		{
			new Float:X, Float:Y, Float:Z;
			GetPlayerPos(playerid, X, Y, Z);
			ApartamentInfo[complex][id][aEnterX] = X;
			ApartamentInfo[complex][id][aEnterY] = Y;
			ApartamentInfo[complex][id][aEnterZ] = Z;
			format(query, sizeof(query), "UPDATE `apartaments` SET `x` = '%f', `y` = '%f', `z` = '%f' WHERE `cid` = '%d' AND `complex` = '%d'", X, Y, Z, id, complex);
		}
		case 5:
		{
			ApartamentInfo[complex][id][aLocked] = strval(input);
			format(query, sizeof(query), "UPDATE `apartaments` SET `locked` = '%d' WHERE `cid` = '%d' AND `complex` = '%d'", strval(input), id, complex);
		}
	}
	mysql_function_query(dbHandle, query, false, "", "");
	SCMEx(playerid, COLOR_WHITE, "Valoarea '%d' a fost modificata in '%s'!", strval(input));
	UpdateApartamentPickup(complex, id);
	UpdateApartamentText(complex, id);
	SaveApartament(complex, id, 1);
	return 1;
}


//OWNER
CMD:sellapartament(playerid, params[])
{
	if(PlayerInfo[playerid][pApartament] <= 0) return SCM(playerid, COLOR_GREY, "Nu ai un apartament!");
	if(enteredcomplex[playerid] == 0) return SCM(playerid, COLOR_GREY, "Nu esti intr-un complex!");
	new complex = enteredcomplex[playerid];
	new id = GetNearbyApartament(playerid);
	if(id == -1) return SCM(playerid, COLOR_GREY, "Nu esti langa un apartament!");
	if(ApartamentInfo[complex][id][aID] != PlayerInfo[playerid][pApartament]) return SCM(playerid, COLOR_GREY, "Nu esit langa apartamentul tau!");
	format(ApartamentInfo[complex][id][aOwner], 64, "%s", APARTAMENT_DEFAULT_OWNER);
	ApartamentInfo[complex][id][aOwned] = 0;
	ApartamentInfo[complex][id][aLocked] = 0;
	ApartamentInfo[complex][id][aRentPrice] = 0;
	ApartamentInfo[complex][id][aRentable] = 0;
	PlayerInfo[playerid][pApartament] = 0;
	PlayerInfo[playerid][pApComplex] = 0;
	new money = Procent(ApartamentInfo[complex][id][aPrice], 80);
	SCMEx(playerid, COLOR_GREEN, "Ai vandut apartamentul pentru %d,", money);
	ComplexInfo[complex][cBank] += money;
	if(ApartamentInfo[complex][id][aBank] > 0)
	{
		GiveCash(playerid, ApartamentInfo[complex][id][aBank]);
		SCM(playerid, COLOR_GREEN, "Ai avut %d$ in seiful apartamentului asa ca i-ai primit inapoi.");
		ApartamentInfo[complex][id][aBank] = 0;
	}
	ComplexInfo[complex][cOn] = 0;
	GiveCash(playerid, money);
	UpdateApartamentPickup(complex, id);
	UpdateApartamentText(complex, id);
	SaveApartament(complex, id, 1);
	SavePlayerStats(playerid);
	return 1;
}

CMD:apartament(playerid, params[])
{
	if(PlayerInfo[playerid][pApartament] <= 0) return SCM(playerid, COLOR_GREY, "Nu ai un apartament.");
	new complex = enteredcomplex[playerid];
	if(complex == -1) return SCM(playerid, COLOR_GREY, "Nu esti intr-un complex.");
	new id = GetNearbyApartament(playerid);
	if(id == -1) return SCM(playerid, COLOR_GREY, "Nu esti langa un apartament.");
	if(PlayerInfo[playerid][pApartament] != ApartamentInfo[complex][id][aID]) return SCM(playerid, COLOR_GREY, "Nu esti langa apartament tau.");
	new type[16], value;
	if(sscanf(params, "s[16]i", type, value)) return SyntaxMSG(playerid, "/apartament [withdraw/deposit/balance/rentable/rentprice] [valoare(optional)]");
	if(value <= 0) return SCM(playerid, COLOR_GREY, "Suma trebuie sa fie pozitiva.");
	if(CompareStrings(type, "withdraw"))
	{
		if(ApartamentInfo[complex][id][aBank] > value) return SCM(playerid, COLOR_GREY, "Nu ai suficienti bani in apartament.");
		ApartamentInfo[complex][id][aBank] -= value;
		GiveCash(playerid, value);
		SCMEx(playerid, COLOR_GREY, "Ai extras din apartament suma de %d$.", value);
		format(msg, sizeof(msg), "AdmWarn: %s a extras din apartamentul %d (COMPLEX: %d) suma de %d$.", GetName(playerid), id, complex, value);
		AMSG(COLOR_LIGHTRED, msg);
		return 1;
	}
	if(CompareStrings(type, "deposit"))
	{
		if(ApartamentInfo[complex][id][aBank] + value >= MAX_APARTAMENT_BANK) return SCMEx(playerid, COLOR_GREY, "Suma maxima ce poate fi depozitata in apartament este de $d!", MAX_APARTAMENT_BANK);
		if(GetCash(playerid) < value) return SCM(playerid, COLOR_GREY, "Nu ai suficienti bani.");
		ApartamentInfo[complex][id][aBank] += value;
		GiveCash(playerid, -value);
		SCMEx(playerid, COLOR_GREY, "Ai depozitat in apartament suma de %d$.", value);
		format(msg, sizeof(msg), "AdmWarn: %s a depozitat in apartamentul %d (COMPLEX: %d) suma de %d$.", GetName(playerid), id, complex, value);
		AMSG(COLOR_LIGHTRED, msg);
		return 1;
	}
	if(CompareStrings(type, "balance"))
	{
		SCMEx(playerid, COLOR_GREEN, "Banii din seiful complexului: %d$.", ApartamentInfo[complex][id][aBank]);
		SCM(playerid, COLOR_OOC, "HINT: Poti folosi comenzile /apartament withdraw sau /apartament deposit pentru a extrage/depozita bani.");
		return 1;
	}
	if(CompareStrings(type, "rentable"))
	{
		SCM(playerid, COLOR_OOC, "Apartament Rentable: 0 - neinchiriabil | 1 - inchiriabil.");
		ApartamentInfo[complex][id][aRentable] = value;
		SCMEx(playerid, COLOR_GREEN, "Statusul inchirierii apartamentului a fost setat la '%d'.", value);
		return 1;
	}
	if(CompareStrings(type, "rentprice"))
	{
		if(ApartamentInfo[complex][id][aRentable] == 0) return SCM(playerid, COLOR_GREY, "Apartamentul nu este inchiriabil. (/apartament rentable)");
		if(value < 1 || value > MAX_APARTAMENT_RENT_PRICE) return SCMEx(playerid, COLOR_GREY, "Pretul de inchiriere trebuie sa fie intre 0 si %d.", MAX_APARTAMENT_RENT_PRICE);
		ApartamentInfo[complex][id][aRentPrice] = value;
		SCMEx(playerid, COLOR_GREEN, "Ai setat pretul de inchiriere al apartamentului la %d.", value);
		return 1;
	}
	SaveApartament(complex, id, 1);
	UpdateApartamentPickup(complex, id);
	UpdateApartamentText(complex, id);
	return 1;
}

CMD:rentlist(playerid, params[])
{
	if(PlayerInfo[playerid][pApartament] <= 0) return SCM(playerid, COLOR_GREY, "Nu ai un apartament.");
	SCM(playerid, COLOR_GREEN, "Lista chiriasilor ONLINE:");
	foreach(Player, i)
	{
		if(PlayerInfo[i][pRentApartament] == ApartamentInfo[PlayerInfo[playerid][pApComplex]][PlayerInfo[playerid][pApartament]][aID])
		{
			SCMEx(playerid, COLOR_RADIO, "(ID: %d) %s", i, GetName(i));
		}
	}
	SCM(playerid, COLOR_OOC, "HINT: Poti folosi /evictapartament [id] pentru a incheia contractul cu unul dintre chiriasi.");
	return 1;
}

CMD:evictapartament(playerid, params[])
{
	if(PlayerInfo[playerid][pApartament] <= 0) return SCM(playerid, COLOR_GREY, "Nu ai un apartament!");
	new pid;
	if(sscanf(params, "i", pid)) return SyntaxMSG(playerid, "/evict [playerid]");
	if(!IsPlayerConnected(pid)) return SCM(playerid, COLOR_GREY, "Acest jucator nu este conectat!");
	if(PlayerInfo[pid][pRentApartament] != PlayerInfo[playerid][pApartament]) return SCM(playerid, COLOR_GREY, "Acest jucator nu are un contrat de inchiriere cu tine!");
	PlayerInfo[pid][pRentApartament] = 0;
	SCMEx(playerid, COLOR_GREEN, "Ai incheiat contractul de inchiriere cu %s.", GetName(pid));
	SCMEx(pid, COLOR_GREEN, "%s a incheiat contracutl de inchiriere al apartamentului cu tine.", GetName(playerid));
	SavePlayerStats(playerid);
	return 1;
}

//PLAYER
CMD:buyapartament(playerid, params[])
{
	if(PlayerInfo[playerid][pApartament] > 0) return SCM(playerid, COLOR_GREY, "Ai deja un apartament.");
	new complex = enteredcomplex[playerid];
	if(complex == -1) return SCM(playerid, COLOR_GREY, "Nu esti intr-un complex.");
	new id = GetNearbyApartament(playerid);
	if(id == -1) return SCM(playerid, COLOR_GREY, "Nu esti langa un apartament.");
	if(PlayerInfo[playerid][pLevel] < ApartamentInfo[complex][id][aLevel]) return SCM(playerid, COLOR_GREY, "Nu ai nivelul necesar.");
	if(GetCash(playerid) < ApartamentInfo[complex][id][aPrice]) return SCM(playerid, COLOR_GREY, "Nu ai suficienti bani.");
	SCMEx(playerid, COLOR_GREEN, "Felicitari! Ai cumparat un apartament pentru %d,", ApartamentInfo[complex][id][aPrice]);
	GiveCash(playerid, -ApartamentInfo[complex][id][aPrice]);
	format(ApartamentInfo[complex][id][aOwner], 32, "%s", GetName(playerid));
	ApartamentInfo[complex][id][aOwned] = 1;
	PlayerInfo[playerid][pApartament] = ApartamentInfo[complex][id][aID];
	PlayerInfo[playerid][pApComplex] = ComplexInfo[complex][cID];
	UpdateApartamentText(complex, id);
	UpdateApartamentPickup(complex, id);
	SaveApartament(complex, id, 1);
	SavePlayerStats(playerid);
	SCM(playerid, COLOR_LIGHTGREEN, "Acum iti poti pune apartamentul spre inchiriat (/apartament)!");
	return 1;
}

CMD:rentapartament(playerid, params[])
{
	if(PlayerInfo[playerid][pApartament] > 0) return SCM(playerid, COLOR_GREY, "Ai deja un apartament.");
	new complex = enteredcomplex[playerid];
	if(complex == -1) return SCM(playerid, COLOR_GREY, "Nu esti intr-un complex.");
	new id = GetNearbyApartament(playerid);
	if(id == -1) return SCM(playerid, COLOR_GREY, "Nu esti langa un apartament.");
	if(ApartamentInfo[complex][id][aRentable] == 0) return SCM(playerid, COLOR_GREY, "Acest apartament nu este de inchiriat.");
	if(GetCash(playerid) < ApartamentInfo[complex][id][aRentPrice]) return SCM(playerid, COLOR_GREY, "Nu ai suficienti bani.");
	SCMEx(playerid, COLOR_GREEN, "Felicitari! Ai inchiriat un apartament pentru %d.", ApartamentInfo[complex][id][aRentPrice]);
	SCM(playerid, COLOR_OOC, "Banii pe chirie vor fi retrasi automat din fiecare salar!");
	GiveCash(playerid, -ApartamentInfo[complex][id][aRentPrice]);
	PlayerInfo[playerid][pRentApartament] = ApartamentInfo[complex][id][aID];
	PlayerInfo[playerid][pApComplex] = ComplexInfo[complex][cID];
	ApartamentInfo[complex][id][aBank] += ApartamentInfo[complex][id][aRentPrice];
	SavePlayerStats(playerid);
	return 1;
}

CMD:unrentapartament(playerid, params[])
{
	if(PlayerInfo[playerid][pRentApartament] == 0) return SCM(playerid, COLOR_GREY, "Nu inchiriezi un apartament.");
	SCMEx(playerid, COLOR_GREEN, "Ai anulat contractul de inchiriere al apartamentului %d.", PlayerInfo[playerid][pRentApartament]);
	PlayerInfo[playerid][pRentApartament] = 0;
	PlayerInfo[playerid][pApComplex] = 0;
	SavePlayerStats(playerid);
	return 1;
}

//DEBUG
CMD:updateapartamenttext(playerid, params[])
{
	if(debugmode[playerid] == 0) return NotAuthMSG(playerid);
	new complex = enteredcomplex[playerid];
	if(complex == -1) return SCM(playerid, COLOR_GREY, "Nu esti intr-un complex!");
	new id = GetNearbyApartament(playerid);
	if(id == -1) return SCM(playerid, COLOR_GREY, "Nu esti langa un apartament!");
	UpdateApartamentText(complex, id);
	SCMEx(playerid, COLOR_WHITE, "3DText: Updated CID: %d | ID: %d.", complex, id);
	return 1;
}

CMD:updateapartamentpickup(playerid, params[])
{
	if(debugmode[playerid] == 0) return NotAuthMSG(playerid);
	new complex = enteredcomplex[playerid];
	if(complex == -1) return SCM(playerid, COLOR_GREY, "Nu esti intr-un complex!");
	new id = GetNearbyApartament(playerid);
	if(id == -1) return SCM(playerid, COLOR_GREY, "Nu esti langa un apartament!");
	UpdateApartamentPickup(complex, id);
	SCMEx(playerid, COLOR_WHITE, "Pickup: Updated CID: %d | ID: %d.", complex, id);
	return 1;
}