stock AssignDonateItems(playerid)
{
	switch(PlayerInfo[playerid][pDonateRank])
	{
		case 1:
		{
			PlayerInfo[playerid][pNameChg] += 2;
			PlayerInfo[playerid][pPhoneChg] += 2;
			PlayerInfo[playerid][pSexChg] += 2;
			PlayerInfo[playerid][pCKChg] += 0;
		}
		case 2:
		{
			PlayerInfo[playerid][pNameChg] += 3;
			PlayerInfo[playerid][pPhoneChg] += 3;
			PlayerInfo[playerid][pSexChg] += 3;
			PlayerInfo[playerid][pCKChg] += 1;
			PlayerInfo[playerid][pLevel] += 2;
			SetPlayerScore(playerid, PlayerInfo[playerid][pLevel]);
		}
		case 3:
		{
			PlayerInfo[playerid][pNameChg] += 5;
			PlayerInfo[playerid][pPhoneChg] += 5;
			PlayerInfo[playerid][pSexChg] += 5;
			PlayerInfo[playerid][pCKChg] += 3;
			PlayerInfo[playerid][pLevel] += 3;
			SetPlayerScore(playerid, PlayerInfo[playerid][pLevel]);
		}
		case 4:
		{
			PlayerInfo[playerid][pNameChg] += 10;
			PlayerInfo[playerid][pPhoneChg] += 10;
			PlayerInfo[playerid][pSexChg] += 10;
			PlayerInfo[playerid][pCKChg] += 5;
			PlayerInfo[playerid][pLevel] += 5;
			SetPlayerScore(playerid, PlayerInfo[playerid][pLevel]);
		}
		
	}
	return 1;
}

stock CheckNameUsage(playerid, name[])
{
	format(query, sizeof(query), "SELECT * FROM `users` WHERE `name` = '%s'", name);
	mysql_function_query(dbHandle, query, true, "ChangeNameCheck", "d", playerid);
	return 1;
}

forward ChangeNameCheck(playerid);
public ChangeNameCheck(playerid)
{
	new rows, fields;
	cache_get_data(rows, fields, dbHandle);
	if(rows) canchangename[playerid] = 0;
	else canchangename[playerid] = 1;
	return 1;
}
CMD:donator(playerid, params[])
{
	if(PlayerInfo[playerid][pDonateRank] < 1) return SCM(playerid, COLOR_GREY, "Nu esti donator.");
	new drank[64], dstr[128];
	switch(PlayerInfo[playerid][pDonateRank])
	{
		case 1: drank = "Donator: {D1740A}Bronze";
		case 2: drank = "Donator: {B5C7C7}Silver";
		case 3: drank = "Donator: {E3CF39}Gold";
		case 4: drank = "Donator: {1FC0E0}Diamond";
	}
	format(dstr, sizeof(dstr), "Shimbarea numelui (Ramase:%d)\nShimbarea numarului (Ramase:%d)\nShimbarea sexului (Ramase:%d)\nEliberare CK (Ramase:%d)\n", PlayerInfo[playerid][pNameChg], PlayerInfo[playerid][pPhoneChg], PlayerInfo[playerid][pSexChg], PlayerInfo[playerid][pCKChg]);
	ShowDialog(playerid, Show:<DONATE>, DIALOG_STYLE_LIST, drank, dstr, "Selecteaza", "Inchide");
	return 1;
}

Dialog:DONATE(playerid, response, listitem, inputtext[])
{
	if(response)
	{
		new drank[64];
		switch(PlayerInfo[playerid][pDonateRank])
		{
			case 1: drank = "Donator: {D1740A}Bronze";
			case 2: drank = "Donator: {B5C7C7}Silver";
			case 3: drank = "Donator: {E3CF39}Gold";
			case 4: drank = "Donator: {1FC0E0}Diamond";
		}
		switch(listitem)
		{
			case 0:
			{
				ShowDialog(playerid, Show:<DONATE_NameChange>, DIALOG_STYLE_INPUT, drank, "Selecteaza un nume nou pentru caracterul tau:", "Schimba", "Inchide");
			}
			case 1:
			{
				ShowDialog(playerid, Show:<DONATE_PhoneChange>, DIALOG_STYLE_INPUT, drank, "Selecteaza un numar de telefon nou pentru caracterul tau:", "Schimba", "Inchide");
			}
			case 2:
			{
				ShowDialog(playerid, Show:<DONATE_SexChange>, DIALOG_STYLE_LIST, drank, "Masculin\nFeminin", "Schimba", "Inchide");
			}
			case 3:
			{
				ShowDialog(playerid, Show:<DONATE_CK>, DIALOG_STYLE_MSGBOX, drank, "Caracterul tau a fost eliberat de la CK!", "Ok", "");
			}
		}
	}
	return 1;
}


Dialog:DONATE_NameChange(playerid, response, listitem, inputtext[])
{
	if(response)
	{
		if(PlayerInfo[playerid][pNameChg] == 0) return SCM(playerid, COLOR_GREY, "Nu mai ai schimbari de nume disponibile!");
		format(newname[playerid], 128, "%s", inputtext);
		CheckNameUsage(playerid, inputtext);
		SetTimerEx("ChangeNamePlayer", 2000, false, "i", playerid);
	}
	return 1;
}

forward ChangeNamePlayer(playerid);
public ChangeNamePlayer(playerid)
{
	if(canchangename[playerid] == 0) return SCM(playerid, COLOR_GREY, "Acest nume este deja folosit.");
	PlayerInfo[playerid][pNameChg]--;
	new inputtext[128];
	format(inputtext, sizeof(inputtext), "%s", newname[playerid]);
	format(query, sizeof(query), "UPDATE `users` SET `name` = '%s' WHERE `name` = '%s'", inputtext, GetName(playerid));
	mysql_function_query(dbHandle, query, false, "", "");
	//-------------------------------------------------------------------------------------------------------------
	if(PlayerInfo[playerid][pHouseKey] != -1)
	{
		format(query, sizeof(query), "UPDATE `houses` SET `owner` = '%s' WHERE `owner` = '%s'", inputtext, GetName(playerid));
		mysql_function_query(dbHandle, query, false, "", "");
		format(HouseInfo[PlayerInfo[playerid][pHouseKey]][hOwner], MAX_PLAYER_NAME, "%s", inputtext);
		UpdateHouseInfo(PlayerInfo[playerid][pHouseKey]);
		UpdateHouseText(PlayerInfo[playerid][pHouseKey]);
	}
	//-------------------------------------------------------------------------------------------------------------
	if(PlayerInfo[playerid][pBizKey] != -1)
	{
		format(query, sizeof(query), "UPDATE `business` SET `owner` = '%s' WHERE `owner` = '%s'", inputtext, GetName(playerid));
		mysql_function_query(dbHandle, query, false, "", "");
		format(BizInfo[PlayerInfo[playerid][pBizKey]][bizOwner], MAX_PLAYER_NAME, "%s", inputtext);
		UpdateBizInfo(PlayerInfo[playerid][pBizKey]);
	}
	//-------------------------------------------------------------------------------------------------------------
	UpdatePlayerVehicles(playerid);
	//-------------------------------------------------------------------------------------------------------------
	for(new i = 0; i < MAX_VEHICLES; i++)
	{
		if(CompareStrings(VehicleInfo[i][carOwner], GetName(playerid)))
		{
			format(VehicleInfo[i][carOwner], MAX_PLAYER_NAME, "%s", GetName(playerid));
		}
	}
	format(query, sizeof(query), "SELECT * FROM `ownedvehicles` WHERE `owner` = '%s' SET `owner` = '%s'", GetName(playerid), inputtext);
	mysql_function_query(dbHandle, query, false, "", "");
	//-------------------------------------------------------------------------------------------------------------
	SCMEx(playerid, COLOR_LIGHTBLUE, "[DONATOR] Numele tau a fost schimbat in %s.", inputtext);
	SetPlayerName(playerid, inputtext);
	canchangename[playerid] = 0;
	strdel(newname[playerid], 0, 128);
	return 1;
}
	
Dialog:DONATE_PhoneChange(playerid, response, listitem, inputtext[])
{
	if(response)
	{
		if(PlayerInfo[playerid][pPhoneChg] == 0) return SCM(playerid, COLOR_GREY, "Nu mai ai schimbari de numar disponibile!");
		PlayerInfo[playerid][pPhoneChg]--;
		PlayerInfo[playerid][pNumber] = strval(inputtext);
		SCMEx(playerid, COLOR_LIGHTBLUE, "[DONATOR] Numarul tau a fost schimbat in %d.", strval(inputtext));		
	}
	return 1;
}

Dialog:DONATE_SexChange(playerid, response, listitem, inputtext[])
{
	if(response)
	{
		if(PlayerInfo[playerid][pSexChg] == 0) return SCM(playerid, COLOR_GREY, "Nu mai ai schimbari de sex disponibile!");
		PlayerInfo[playerid][pSexChg]--;
		if(listitem == 0)
		{
			PlayerInfo[playerid][pSex] = 1;
			SCM(playerid, COLOR_LIGHTBLUE, "[DONATOR] Sexul tau este: Masculin.");
		}
		if(listitem == 1)
		{
			PlayerInfo[playerid][pSex] = 2;
			SCM(playerid, COLOR_LIGHTBLUE, "[DONATOR] Sexul tau este: Feminin.");
		}
	}
	return 1;
}

Dialog:DONATE_CK(playerid, response, listitem, inputtext[])
{
	if(response)
	{
		if(PlayerInfo[playerid][pCKChg] == 0) return SCM(playerid, COLOR_GREY, "Nu mai ai eliberari de la CK disponibile!");
//		if(PlayerInfo[playerid][pCK] == 0) return SCM(playerid, COLOR_GREY, "Nu ai primit CK!");
		PlayerInfo[playerid][pCKChg]--;
		PlayerInfo[playerid][pJailed] = 0;
		PlayerInfo[playerid][pJailTime] = 0;
		PlayerInfo[playerid][pJailTime2] = 0;
		LOCALAMSG(playerid, 20, COLOR_LIGHTRED, msg);
		PlayerTextDrawHide(playerid,jail_timeleft[playerid]);
		SetPlayerSpawn(playerid);
		SCM(playerid, COLOR_LIGHTBLUE, "[DONATOR] Ai fost eliberat din CK.");
	}
	return 1;
}


