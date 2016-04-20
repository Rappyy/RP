stock ShowVehicleList(playerid)
{
	VList_BG[playerid] = CreatePlayerTextDraw(playerid, 134.444442, 329.037780, "usebox");
	PlayerTextDrawLetterSize(playerid, VList_BG[playerid], 0.000000, -22.218887);
	PlayerTextDrawTextSize(playerid, VList_BG[playerid], 500.666656, 0.000000);
	PlayerTextDrawAlignment(playerid, VList_BG[playerid], 1);
	PlayerTextDrawColor(playerid, VList_BG[playerid], 0);
	PlayerTextDrawUseBox(playerid, VList_BG[playerid], true);
	PlayerTextDrawBoxColor(playerid, VList_BG[playerid], 102);
	PlayerTextDrawSetShadow(playerid, VList_BG[playerid], 0);
	PlayerTextDrawSetOutline(playerid, VList_BG[playerid], 0);
	PlayerTextDrawFont(playerid, VList_BG[playerid], 0);

	VList_VListText[playerid] = CreatePlayerTextDraw(playerid, 136.888931, 132.408935, "Vehicle List");
	PlayerTextDrawLetterSize(playerid, VList_VListText[playerid], 0.449999, 1.600000);
	PlayerTextDrawAlignment(playerid, VList_VListText[playerid], 1);
	PlayerTextDrawColor(playerid, VList_VListText[playerid], -1061109505);
	PlayerTextDrawSetShadow(playerid, VList_VListText[playerid], 0);
	PlayerTextDrawSetOutline(playerid, VList_VListText[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, VList_VListText[playerid], 51);
	PlayerTextDrawFont(playerid, VList_VListText[playerid], 0);
	PlayerTextDrawSetProportional(playerid, VList_VListText[playerid], 1);

	VList_VName[playerid] = CreatePlayerTextDraw(playerid, 179.111099, 170.737777, "Nume Vehicul");
	PlayerTextDrawLetterSize(playerid, VList_VName[playerid], 0.449999, 1.600000);
	PlayerTextDrawAlignment(playerid, VList_VName[playerid], 1);
	PlayerTextDrawColor(playerid, VList_VName[playerid], -5963521);
	PlayerTextDrawSetShadow(playerid, VList_VName[playerid], 0);
	PlayerTextDrawSetOutline(playerid, VList_VName[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, VList_VName[playerid], 51);
	PlayerTextDrawFont(playerid, VList_VName[playerid], 0);
	PlayerTextDrawSetProportional(playerid, VList_VName[playerid], 1);

	VList_VImage[playerid] = CreatePlayerTextDraw(playerid, 161.333328, 192.142227, "LD_SPAC:white");
	PlayerTextDrawLetterSize(playerid, VList_VImage[playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, VList_VImage[playerid], 128.444442, 99.057754);
	PlayerTextDrawAlignment(playerid, VList_VImage[playerid], 1);
	PlayerTextDrawColor(playerid, VList_VImage[playerid], -1);
	PlayerTextDrawSetShadow(playerid, VList_VImage[playerid], 0);
	PlayerTextDrawSetOutline(playerid, VList_VImage[playerid], 0);
	PlayerTextDrawFont(playerid, VList_VImage[playerid], 4);

	VList_VLock[playerid] = CreatePlayerTextDraw(playerid, 329.777679, 190.151016, "Incuietoare: LVL");
	PlayerTextDrawLetterSize(playerid, VList_VLock[playerid], 0.327777, 1.376000);
	PlayerTextDrawAlignment(playerid, VList_VLock[playerid], 1);
	PlayerTextDrawColor(playerid, VList_VLock[playerid], -1);
	PlayerTextDrawSetShadow(playerid, VList_VLock[playerid], 0);
	PlayerTextDrawSetOutline(playerid, VList_VLock[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, VList_VLock[playerid], 51);
	PlayerTextDrawFont(playerid, VList_VLock[playerid], 1);
	PlayerTextDrawSetProportional(playerid, VList_VLock[playerid], 1);

	VList_VAlarm[playerid] = CreatePlayerTextDraw(playerid, 330.777709, 208.573196, "Alarma: LVL");
	PlayerTextDrawLetterSize(playerid, VList_VAlarm[playerid], 0.327777, 1.376000);
	PlayerTextDrawAlignment(playerid, VList_VAlarm[playerid], 1);
	PlayerTextDrawColor(playerid, VList_VAlarm[playerid], -1);
	PlayerTextDrawSetShadow(playerid, VList_VAlarm[playerid], 0);
	PlayerTextDrawSetOutline(playerid, VList_VAlarm[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, VList_VAlarm[playerid], 51);
	PlayerTextDrawFont(playerid, VList_VAlarm[playerid], 1);
	PlayerTextDrawSetProportional(playerid, VList_VAlarm[playerid], 1);

	VList_VImmob[playerid] = CreatePlayerTextDraw(playerid, 329.555541, 226.995422, "Imobilizare: LVL");
	PlayerTextDrawLetterSize(playerid, VList_VImmob[playerid], 0.327777, 1.376000);
	PlayerTextDrawAlignment(playerid, VList_VImmob[playerid], 1);
	PlayerTextDrawColor(playerid, VList_VImmob[playerid], -1);
	PlayerTextDrawSetShadow(playerid, VList_VImmob[playerid], 0);
	PlayerTextDrawSetOutline(playerid, VList_VImmob[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, VList_VImmob[playerid], 51);
	PlayerTextDrawFont(playerid, VList_VImmob[playerid], 1);
	PlayerTextDrawSetProportional(playerid, VList_VImmob[playerid], 1);

	VList_VInsurance[playerid] = CreatePlayerTextDraw(playerid, 330.555419, 247.906494, "Numar asigurari: LVL");
	PlayerTextDrawLetterSize(playerid, VList_VInsurance[playerid], 0.327777, 1.376000);
	PlayerTextDrawAlignment(playerid, VList_VInsurance[playerid], 1);
	PlayerTextDrawColor(playerid, VList_VInsurance[playerid], -1);
	PlayerTextDrawSetShadow(playerid, VList_VInsurance[playerid], 0);
	PlayerTextDrawSetOutline(playerid, VList_VInsurance[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, VList_VInsurance[playerid], 51);
	PlayerTextDrawFont(playerid, VList_VInsurance[playerid], 1);
	PlayerTextDrawSetProportional(playerid, VList_VInsurance[playerid], 1);

	VList_VDestroyed[playerid] = CreatePlayerTextDraw(playerid, 328.555450, 171.239898, "Distrugeri: LVL");
	PlayerTextDrawLetterSize(playerid, VList_VDestroyed[playerid], 0.327777, 1.376000);
	PlayerTextDrawAlignment(playerid, VList_VDestroyed[playerid], 1);
	PlayerTextDrawColor(playerid, VList_VDestroyed[playerid], -1);
	PlayerTextDrawSetShadow(playerid, VList_VDestroyed[playerid], 0);
	PlayerTextDrawSetOutline(playerid, VList_VDestroyed[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, VList_VDestroyed[playerid], 51);
	PlayerTextDrawFont(playerid, VList_VDestroyed[playerid], 1);
	PlayerTextDrawSetProportional(playerid, VList_VDestroyed[playerid], 1);

/*	VList_Veh3[playerid] = CreatePlayerTextDraw(playerid, 329.555389, 266.817535, "Numar asigurari: 5");
	PlayerTextDrawLetterSize(playerid, VList_Veh3[playerid], 0.327777, 1.376000);
	PlayerTextDrawAlignment(playerid, VList_Veh3[playerid], 1);
	PlayerTextDrawColor(playerid, VList_Veh3[playerid], -1);
	PlayerTextDrawSetShadow(playerid, VList_Veh3[playerid], 0);
	PlayerTextDrawSetOutline(playerid, VList_Veh3[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, VList_Veh3[playerid], 51);
	PlayerTextDrawFont(playerid, VList_Veh3[playerid], 1);
	PlayerTextDrawSetProportional(playerid, VList_Veh3[playerid], 1);*/

	VList_Veh1[playerid] = CreatePlayerTextDraw(playerid, 264.888885, 134.897781, "Vehicul 1");
	PlayerTextDrawLetterSize(playerid, VList_Veh1[playerid], 0.330444, 0.987733);
	PlayerTextDrawAlignment(playerid, VList_Veh1[playerid], 1);
	PlayerTextDrawColor(playerid, VList_Veh1[playerid], -1378294017);
	PlayerTextDrawSetShadow(playerid, VList_Veh1[playerid], 0);
	PlayerTextDrawSetOutline(playerid, VList_Veh1[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, VList_Veh1[playerid], 255);
	PlayerTextDrawFont(playerid, VList_Veh1[playerid], 3);
	PlayerTextDrawSetProportional(playerid, VList_Veh1[playerid], 1);
	PlayerTextDrawSetSelectable(playerid, VList_Veh1[playerid], true);

	VList_Veh2[playerid] = CreatePlayerTextDraw(playerid, 331.666870, 134.902236, "Vehicul 2");
	PlayerTextDrawLetterSize(playerid, VList_Veh2[playerid], 0.330444, 0.987733);
	PlayerTextDrawAlignment(playerid, VList_Veh2[playerid], 1);
	PlayerTextDrawColor(playerid, VList_Veh2[playerid], -1378294017);
	PlayerTextDrawSetShadow(playerid, VList_Veh2[playerid], 0);
	PlayerTextDrawSetOutline(playerid, VList_Veh2[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, VList_Veh2[playerid], 255);
	PlayerTextDrawFont(playerid, VList_Veh2[playerid], 3);
	PlayerTextDrawSetProportional(playerid, VList_Veh2[playerid], 1);
	PlayerTextDrawSetSelectable(playerid, VList_Veh2[playerid], true);

	VList_Veh3[playerid] = CreatePlayerTextDraw(playerid, 398.000305, 135.404479, "Vehicul 3");
	PlayerTextDrawLetterSize(playerid, VList_Veh3[playerid], 0.330444, 0.987733);
	PlayerTextDrawAlignment(playerid, VList_Veh3[playerid], 1);
	PlayerTextDrawColor(playerid, VList_Veh3[playerid], -1378294017);
	PlayerTextDrawSetShadow(playerid, VList_Veh3[playerid], 0);
	PlayerTextDrawSetOutline(playerid, VList_Veh3[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, VList_Veh3[playerid], 255);
	PlayerTextDrawFont(playerid, VList_Veh3[playerid], 3);
	PlayerTextDrawSetProportional(playerid, VList_Veh3[playerid], 1);
	PlayerTextDrawSetSelectable(playerid, VList_Veh3[playerid], true);

	VList_VSpawn[playerid] = CreatePlayerTextDraw(playerid, 404.888793, 315.093383, "Spawneaza Vehicul");
	PlayerTextDrawLetterSize(playerid, VList_VSpawn[playerid], 0.297111, 1.107199);
	PlayerTextDrawAlignment(playerid, VList_VSpawn[playerid], 1);
	PlayerTextDrawColor(playerid, VList_VSpawn[playerid], -5963521);
	PlayerTextDrawSetShadow(playerid, VList_VSpawn[playerid], 0);
	PlayerTextDrawSetOutline(playerid, VList_VSpawn[playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, VList_VSpawn[playerid], 51);
	PlayerTextDrawFont(playerid, VList_VSpawn[playerid], 3);
	PlayerTextDrawSetProportional(playerid, VList_VSpawn[playerid], 1);
	PlayerTextDrawSetSelectable(playerid, VList_VSpawn[playerid], true);
	return 1;
