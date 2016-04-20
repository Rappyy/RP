// NU EDITA FARA SA-L INTREBI PE IULI !

new PlayerText:CCTV0[MAX_PLAYERS];
new PlayerText:CCTV1[MAX_PLAYERS];
new PlayerText:CCTV2[MAX_PLAYERS];
new PlayerText:CCTV3[MAX_PLAYERS];
new PlayerText:CCTV4[MAX_PLAYERS];
new PlayerText:CCTV5[MAX_PLAYERS];
new PlayerText:CCTV6[MAX_PLAYERS];
new PlayerText:CCTV_TIME[MAX_PLAYERS];
new PlayerText:CCTV_DATE[MAX_PLAYERS];
new PlayerText:CCTV_ID[MAX_PLAYERS];

stock UpdateCCTV_TD(playerid)
{
	new cctv_timestr[128];
	new hour,minute,second;
    gettime(hour,minute,second);
    format(cctv_timestr, sizeof(cctv_timestr), "%02d:%02d:%02d", hour, minute, second);
	PlayerTextDrawSetString(playerid, CCTV_TIME[playerid], cctv_timestr);

	new cctv_datestr[128];
	new year, month, day;
	getdate(year, month, day);
	format(cctv_datestr, sizeof(cctv_datestr), "%02d-%02d-%d", month, day, year);
	PlayerTextDrawSetString(playerid, CCTV_DATE[playerid], cctv_datestr);

	new cctv_idstr[64];
	new cctv = GetPVarInt(playerid, "CCTV_Show");
	format(cctv_idstr, sizeof(cctv_idstr), "%d", cctv);
	PlayerTextDrawSetString(playerid, CCTV_ID[playerid], cctv_idstr);
}

stock ShowCCTV_TD(playerid)
{
	PlayerTextDrawShow(playerid, CCTV0[playerid]);
	PlayerTextDrawShow(playerid, CCTV1[playerid]);
	PlayerTextDrawShow(playerid, CCTV2[playerid]);
	PlayerTextDrawShow(playerid, CCTV3[playerid]);
	PlayerTextDrawShow(playerid, CCTV4[playerid]);
	PlayerTextDrawShow(playerid, CCTV5[playerid]);
	PlayerTextDrawShow(playerid, CCTV6[playerid]);
	PlayerTextDrawShow(playerid, CCTV_TIME[playerid]);
	PlayerTextDrawShow(playerid, CCTV_DATE[playerid]);
	PlayerTextDrawShow(playerid, CCTV_ID[playerid]);
}

stock HideCCTV_TD(playerid)
{
	PlayerTextDrawHide(playerid, CCTV0[playerid]);
	PlayerTextDrawHide(playerid, CCTV1[playerid]);
	PlayerTextDrawHide(playerid, CCTV2[playerid]);
	PlayerTextDrawHide(playerid, CCTV3[playerid]);
	PlayerTextDrawHide(playerid, CCTV4[playerid]);
	PlayerTextDrawHide(playerid, CCTV5[playerid]);
	PlayerTextDrawHide(playerid, CCTV6[playerid]);
	PlayerTextDrawHide(playerid, CCTV_TIME[playerid]);
	PlayerTextDrawHide(playerid, CCTV_DATE[playerid]);
	PlayerTextDrawHide(playerid, CCTV_ID[playerid]);
}

stock CreateCCTV_TD(playerid)
{
	CCTV0[playerid] = CreatePlayerTextDraw(playerid, 639.500000, 1.500000, "usebox");
	PlayerTextDrawLetterSize(playerid, CCTV0[playerid], 0.000000, 6.151389);
	PlayerTextDrawTextSize(playerid, CCTV0[playerid], -2.000000, 0.000000);
	PlayerTextDrawAlignment(playerid, CCTV0[playerid], 1);
	PlayerTextDrawColor(playerid, CCTV0[playerid], 255);
	PlayerTextDrawUseBox(playerid, CCTV0[playerid], true);
	PlayerTextDrawBoxColor(playerid, CCTV0[playerid], 255);
	PlayerTextDrawSetShadow(playerid, CCTV0[playerid], 0);
	PlayerTextDrawSetOutline(playerid, CCTV0[playerid], 0);
	PlayerTextDrawFont(playerid, CCTV0[playerid], 0);
	PlayerTextDrawSetProportional(playerid, CCTV0[playerid], 1);

	CCTV1[playerid] = CreatePlayerTextDraw(playerid, 641.000000, 393.062500, "usebox");
	PlayerTextDrawLetterSize(playerid, CCTV1[playerid], 0.000000, 5.905555);
	PlayerTextDrawTextSize(playerid, CCTV1[playerid], -2.000000, 0.000000);
	PlayerTextDrawAlignment(playerid, CCTV1[playerid], 1);
	PlayerTextDrawColor(playerid, CCTV1[playerid], 0);
	PlayerTextDrawUseBox(playerid, CCTV1[playerid], true);
	PlayerTextDrawBoxColor(playerid, CCTV1[playerid], 255);
	PlayerTextDrawSetShadow(playerid, CCTV1[playerid], 0);
	PlayerTextDrawSetOutline(playerid, CCTV1[playerid], 0);
	PlayerTextDrawFont(playerid, CCTV1[playerid], 0);

	CCTV2[playerid] = CreatePlayerTextDraw(playerid, 28.000000, 57.937500, "usebox");
	PlayerTextDrawLetterSize(playerid, CCTV2[playerid], 0.000000, 38.523609);
	PlayerTextDrawTextSize(playerid, CCTV2[playerid], -2.000000, 0.000000);
	PlayerTextDrawAlignment(playerid, CCTV2[playerid], 1);
	PlayerTextDrawColor(playerid, CCTV2[playerid], 0);
	PlayerTextDrawUseBox(playerid, CCTV2[playerid], true);
	PlayerTextDrawBoxColor(playerid, CCTV2[playerid], 255);
	PlayerTextDrawSetShadow(playerid, CCTV2[playerid], 0);
	PlayerTextDrawSetOutline(playerid, CCTV2[playerid], 0);
	PlayerTextDrawFont(playerid, CCTV2[playerid], 0);

	CCTV3[playerid] = CreatePlayerTextDraw(playerid, 743.500000, 1.500000, "usebox");
	PlayerTextDrawLetterSize(playerid, CCTV3[playerid], 0.000000, 49.412498);
	PlayerTextDrawTextSize(playerid, CCTV3[playerid], 595.500000, 0.000000);
	PlayerTextDrawAlignment(playerid, CCTV3[playerid], 1);
	PlayerTextDrawColor(playerid, CCTV3[playerid], 0);
	PlayerTextDrawUseBox(playerid, CCTV3[playerid], true);
	PlayerTextDrawBoxColor(playerid, CCTV3[playerid], 255);
	PlayerTextDrawSetShadow(playerid, CCTV3[playerid], 0);
	PlayerTextDrawSetOutline(playerid, CCTV3[playerid], 0);
	PlayerTextDrawFont(playerid, CCTV3[playerid], 0);

	CCTV4[playerid] = CreatePlayerTextDraw(playerid, 27.500000, 359.187500, "CCTV");
	PlayerTextDrawLetterSize(playerid, CCTV4[playerid], 1.012999, 3.809374);
	PlayerTextDrawAlignment(playerid, CCTV4[playerid], 1);
	PlayerTextDrawColor(playerid, CCTV4[playerid], -2139062017);
	PlayerTextDrawSetShadow(playerid, CCTV4[playerid], 0);
	PlayerTextDrawSetOutline(playerid, CCTV4[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, CCTV4[playerid], 51);
	PlayerTextDrawFont(playerid, CCTV4[playerid], 2);
	PlayerTextDrawSetProportional(playerid, CCTV4[playerid], 1);

	CCTV5[playerid] = CreatePlayerTextDraw(playerid, 544.500000, 24.937500, ".");
	PlayerTextDrawLetterSize(playerid, CCTV5[playerid], 1.871999, 6.303132);
	PlayerTextDrawAlignment(playerid, CCTV5[playerid], 1);
	PlayerTextDrawColor(playerid, CCTV5[playerid], -16776961);
	PlayerTextDrawSetShadow(playerid, CCTV5[playerid], 0);
	PlayerTextDrawSetOutline(playerid, CCTV5[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, CCTV5[playerid], 51);
	PlayerTextDrawFont(playerid, CCTV5[playerid], 1);
	PlayerTextDrawSetProportional(playerid, CCTV5[playerid], 1);

	CCTV6[playerid] = CreatePlayerTextDraw(playerid, 566.000000, 59.500000, "REC");
	PlayerTextDrawLetterSize(playerid, CCTV6[playerid], 0.449999, 1.600000);
	PlayerTextDrawAlignment(playerid, CCTV6[playerid], 1);
	PlayerTextDrawColor(playerid, CCTV6[playerid], -1);
	PlayerTextDrawSetShadow(playerid, CCTV6[playerid], 0);
	PlayerTextDrawSetOutline(playerid, CCTV6[playerid], 2);
	PlayerTextDrawBackgroundColor(playerid, CCTV6[playerid], 51);
	PlayerTextDrawFont(playerid, CCTV6[playerid], 1);
	PlayerTextDrawSetProportional(playerid, CCTV6[playerid], 1);

	CCTV_TIME[playerid] = CreatePlayerTextDraw(playerid, 543.500000, 364.000000, "00:00");
	PlayerTextDrawLetterSize(playerid, CCTV_TIME[playerid], 0.310000, 1.206249);
	PlayerTextDrawAlignment(playerid, CCTV_TIME[playerid], 1);
	PlayerTextDrawColor(playerid, CCTV_TIME[playerid], -1);
	PlayerTextDrawSetShadow(playerid, CCTV_TIME[playerid], 0);
	PlayerTextDrawSetOutline(playerid, CCTV_TIME[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, CCTV_TIME[playerid], 51);
	PlayerTextDrawFont(playerid, CCTV_TIME[playerid], 1);
	PlayerTextDrawSetProportional(playerid, CCTV_TIME[playerid], 1);

	CCTV_DATE[playerid] = CreatePlayerTextDraw(playerid, 515.000000, 378.875000, "12-12-2015");
	PlayerTextDrawLetterSize(playerid, CCTV_DATE[playerid], 0.449999, 1.600000);
	PlayerTextDrawAlignment(playerid, CCTV_DATE[playerid], 1);
	PlayerTextDrawColor(playerid, CCTV_DATE[playerid], -1);
	PlayerTextDrawSetShadow(playerid, CCTV_DATE[playerid], 0);
	PlayerTextDrawSetOutline(playerid, CCTV_DATE[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, CCTV_DATE[playerid], 51);
	PlayerTextDrawFont(playerid, CCTV_DATE[playerid], 3);
	PlayerTextDrawSetProportional(playerid, CCTV_DATE[playerid], 1);

	CCTV_ID[playerid] = CreatePlayerTextDraw(playerid, 131.500000, 372.312500, "1234");
	PlayerTextDrawLetterSize(playerid, CCTV_ID[playerid], 0.690000, 2.068129);
	PlayerTextDrawAlignment(playerid, CCTV_ID[playerid], 1);
	PlayerTextDrawColor(playerid, CCTV_ID[playerid], 8388863);
	PlayerTextDrawSetShadow(playerid, CCTV_ID[playerid], 0);
	PlayerTextDrawSetOutline(playerid, CCTV_ID[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, CCTV_ID[playerid], 51);
	PlayerTextDrawFont(playerid, CCTV_ID[playerid], 1);
	PlayerTextDrawSetProportional(playerid, CCTV_ID[playerid], 1);
}