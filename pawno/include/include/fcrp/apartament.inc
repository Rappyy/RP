#define APARTAMENT_DEFAULT_OWNER "Complex Administration"

new apinfostr[256];
new enteredapartament[MAX_PLAYERS];

enum AP_INFO{
	aComplex,
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
		if(PlayerToPoint(3.0, playerid, ApartamentInfo[enteredcomplex[playerid]][i][aEnterX], ApartamentInfo[enteredcomplex[playerid]][i][aEnterY], ApartamentInfo[enteredcomplex[playerid]][i][aEnterZ])) return 1;
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

stock UpdateApartamentText(complex, id)
{
	if(ApartamentInfo[complex][id][aOwned] == 0) format(apinfostr, 256, "Apartament %d\nNivel %d\nPret %d\nFoloseste /buyapartament pentru a cumpara", id, ApartamentInfo[complex][id][aLevel], ApartamentInfo[complex][id][aPrice]);
	else if(ApartamentInfo[complex][id][aOwned] == 1) format(apinfostr, 256, "Apartament %d\nNivel %d\nPret %d\nFoloseste /enter pentru a intra", id, ApartamentInfo[complex][id][aLevel], ApartamentInfo[complex][id][aPrice]);
	UpdateDynamic3DTextLabelText(Text3D:ApartamentInfo[complex][id][aLabel], -1, apinfostr);
	return 1;
}

stock UpdateApartamentPickup(complex, id)
{
	DestroyDynamicPickup(ApartamentInfo[complex][id][aPickup]);
	return AddApartamentPickup(complex, id);
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
	ApartamentInfo[complex][id][aComplex] = complex;
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
	format(apinfostr, 256, "Apartament %d\nNivel %d\nPret %d\nFoloseste /buyapartament pentru a cumpara", id, ApartamentInfo[complex][id][aLevel], ApartamentInfo[complex][id][aPrice]);
	ApartamentInfo[complex][id][aLabel] = CreateDynamic3DTextLabel(apinfostr, COLOR_HOUSE, X, Y, Z, 3.0, INVALID_PLAYER_ID, INVALID_VEHICLE_ID, 0, -1, -1, -1, 100.0);
	return 1;
}

CMD:removeapartament(playerid, params[])
{
	if(!CheckAdmin(playerid, ADMIN_LEVEL_4)) return NotAuthMSG(playerid);
	if(enteredcomplex[playerid] == 0) return SCM(playerid, COLOR_GREY, "Nu esti intr-un complex!");
	new complex = enteredcomplex[playerid];
	new id = GetNearbyApartament(playerid);
	ApartamentInfo[complex][id][aComplex] = 0;
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
	return 1;
}


//OWNER

//PLAYER