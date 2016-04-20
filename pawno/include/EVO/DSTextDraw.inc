stock CreateDS_TextDraw(playerid)
{
	DS_Box[playerid] = CreatePlayerTextDraw(playerid, 193.666656, 149.174072, "usebox");
	PlayerTextDrawLetterSize(playerid, DS_Box[playerid], 0.000000, 18.257820);
	PlayerTextDrawTextSize(playerid, DS_Box[playerid], 443.000000, 0.000000);
	PlayerTextDrawAlignment(playerid, DS_Box[playerid], 1);
	PlayerTextDrawColor(playerid, DS_Box[playerid], 0x00000044);
	PlayerTextDrawUseBox(playerid, DS_Box[playerid], true);
	PlayerTextDrawBoxColor(playerid, DS_Box[playerid], 0x00000044);
	PlayerTextDrawSetShadow(playerid, DS_Box[playerid], 0);
	PlayerTextDrawSetOutline(playerid, DS_Box[playerid], 0);
	PlayerTextDrawFont(playerid, DS_Box[playerid], 0);

	DS_Title[playerid] = CreatePlayerTextDraw(playerid, 231.999984, 127.762947, "Dealership");
	PlayerTextDrawLetterSize(playerid, DS_Title[playerid], 0.730666, 3.159703);
	PlayerTextDrawAlignment(playerid, DS_Title[playerid], 2);
	PlayerTextDrawColor(playerid, DS_Title[playerid], -1);
	PlayerTextDrawSetShadow(playerid, DS_Title[playerid], 0);
	PlayerTextDrawSetOutline(playerid, DS_Title[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, DS_Title[playerid], 51);
	PlayerTextDrawFont(playerid, DS_Title[playerid], 0);
	PlayerTextDrawSetProportional(playerid, DS_Title[playerid], 1);

	DS_Model[playerid] = CreatePlayerTextDraw(playerid, 214.000000, 180.859252, "_");
	PlayerTextDrawLetterSize(playerid, DS_Model[playerid], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, DS_Model[playerid], 97.000000, 69.688888);
	PlayerTextDrawAlignment(playerid, DS_Model[playerid], 2);
	PlayerTextDrawColor(playerid, DS_Model[playerid], 0xFFFFFFFF);
	PlayerTextDrawUseBox(playerid, DS_Model[playerid], false);
	PlayerTextDrawBoxColor(playerid, DS_Model[playerid], 0xFFFFFFFF);
	PlayerTextDrawSetShadow(playerid, DS_Model[playerid], 0);
	PlayerTextDrawSetOutline(playerid, DS_Model[playerid], 0);
	PlayerTextDrawFont(playerid, DS_Model[playerid], TEXT_DRAW_FONT_MODEL_PREVIEW);
	PlayerTextDrawSetPreviewModel(playerid, DS_Model[playerid], 411);
	PlayerTextDrawSetPreviewVehCol(playerid, DS_Model[playerid], 1, 1);
	PlayerTextDrawSetPreviewRot(playerid, DS_Model[playerid], -10.0, 0.0, -20.0, 0.9);

	DS_VehName[playerid] = CreatePlayerTextDraw(playerid, 325.333496, 175.051818, "INFERNUS");
	PlayerTextDrawLetterSize(playerid, DS_VehName[playerid], 0.418333, 1.993629);
	PlayerTextDrawAlignment(playerid, DS_VehName[playerid], 1);
	PlayerTextDrawColor(playerid, DS_VehName[playerid], -1);
	PlayerTextDrawSetShadow(playerid, DS_VehName[playerid], 0);
	PlayerTextDrawSetOutline(playerid, DS_VehName[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, DS_VehName[playerid], 51);
	PlayerTextDrawFont(playerid, DS_VehName[playerid], 2);
	PlayerTextDrawSetProportional(playerid, DS_VehName[playerid], 1);

	DS_StocName[playerid] = CreatePlayerTextDraw(playerid, 326.333312, 204.088928, "Stoc disponibil");
	PlayerTextDrawLetterSize(playerid, DS_StocName[playerid], 0.237666, 1.139555);
	PlayerTextDrawAlignment(playerid, DS_StocName[playerid], 1);
	PlayerTextDrawColor(playerid, DS_StocName[playerid], -1);
	PlayerTextDrawSetShadow(playerid, DS_StocName[playerid], 0);
	PlayerTextDrawSetOutline(playerid, DS_StocName[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, DS_StocName[playerid], 51);
	PlayerTextDrawFont(playerid, DS_StocName[playerid], 2);
	PlayerTextDrawSetProportional(playerid, DS_StocName[playerid], 1);

	DS_Stoc[playerid] = CreatePlayerTextDraw(playerid, 415.999969, 201.185150, "32");
	PlayerTextDrawLetterSize(playerid, DS_Stoc[playerid], 0.449999, 1.600000);
	PlayerTextDrawAlignment(playerid, DS_Stoc[playerid], 1);
	PlayerTextDrawColor(playerid, DS_Stoc[playerid], -5963521);
	PlayerTextDrawSetShadow(playerid, DS_Stoc[playerid], 0);
	PlayerTextDrawSetOutline(playerid, DS_Stoc[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, DS_Stoc[playerid], 51);
	PlayerTextDrawFont(playerid, DS_Stoc[playerid], 2);
	PlayerTextDrawSetProportional(playerid, DS_Stoc[playerid], 1);

	DS_PretName[playerid] = CreatePlayerTextDraw(playerid, 338.666503, 220.266662, "Pret:");
	PlayerTextDrawLetterSize(playerid, DS_PretName[playerid], 0.265000, 1.185185);
	PlayerTextDrawAlignment(playerid, DS_PretName[playerid], 1);
	PlayerTextDrawColor(playerid, DS_PretName[playerid], -1);
	PlayerTextDrawSetShadow(playerid, DS_PretName[playerid], 0);
	PlayerTextDrawSetOutline(playerid, DS_PretName[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, DS_PretName[playerid], 51);
	PlayerTextDrawFont(playerid, DS_PretName[playerid], 2);
	PlayerTextDrawSetProportional(playerid, DS_PretName[playerid], 1);

	DS_Price[playerid] = CreatePlayerTextDraw(playerid, 374.999969, 220.266662, "1,000,000$");
	PlayerTextDrawLetterSize(playerid, DS_Price[playerid], 0.310000, 1.330370);
	PlayerTextDrawAlignment(playerid, DS_Price[playerid], 1);
	PlayerTextDrawColor(playerid, DS_Price[playerid], 8388863);
	PlayerTextDrawSetShadow(playerid, DS_Price[playerid], 0);
	PlayerTextDrawSetOutline(playerid, DS_Price[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, DS_Price[playerid], 51);
	PlayerTextDrawFont(playerid, DS_Price[playerid], 3);
	PlayerTextDrawSetProportional(playerid, DS_Price[playerid], 1);

	DS_Buy[playerid] = CreatePlayerTextDraw(playerid, 263.666473,  279.370410, "CUMPARA");
	PlayerTextDrawLetterSize(playerid, DS_Buy[playerid], 0.615666, 2.786370);
	PlayerTextDrawAlignment(playerid, DS_Buy[playerid], 1);
	PlayerTextDrawColor(playerid, DS_Buy[playerid], -1);
	PlayerTextDrawSetShadow(playerid, DS_Buy[playerid], 0);
	PlayerTextDrawSetOutline(playerid, DS_Buy[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, DS_Buy[playerid], 51);
	PlayerTextDrawFont(playerid, DS_Buy[playerid], 2);
	PlayerTextDrawSetProportional(playerid, DS_Buy[playerid], 1);
	PlayerTextDrawSetSelectable(playerid, DS_Buy[playerid], true);

	DS_Next[playerid] = CreatePlayerTextDraw(playerid, 420.999969, 279.170410, ">");
	PlayerTextDrawLetterSize(playerid, DS_Next[playerid], 0.599999, 3.176296);
	PlayerTextDrawAlignment(playerid, DS_Next[playerid], 1);
	PlayerTextDrawColor(playerid, DS_Next[playerid], -1);
	PlayerTextDrawSetShadow(playerid, DS_Next[playerid], 0);
	PlayerTextDrawSetOutline(playerid, DS_Next[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, DS_Next[playerid], 51);
	PlayerTextDrawFont(playerid, DS_Next[playerid], 0);
	PlayerTextDrawSetProportional(playerid, DS_Next[playerid], 1);
	PlayerTextDrawSetSelectable(playerid, DS_Buy[playerid], true);

	DS_Prev[playerid] = CreatePlayerTextDraw(playerid, 198.666687,  278.970410, "<");
	PlayerTextDrawLetterSize(playerid, DS_Prev[playerid], 0.596666, 3.591111);
	PlayerTextDrawAlignment(playerid, DS_Prev[playerid], 1);
	PlayerTextDrawColor(playerid, DS_Prev[playerid], -1);
	PlayerTextDrawSetShadow(playerid, DS_Prev[playerid], 0);
	PlayerTextDrawSetOutline(playerid, DS_Prev[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, DS_Prev[playerid], 51);
	PlayerTextDrawFont(playerid, DS_Prev[playerid], 2);
	PlayerTextDrawSetProportional(playerid, DS_Prev[playerid], 1);
	PlayerTextDrawSetSelectable(playerid, DS_Buy[playerid], true);

	DS_Cancel[playerid] = CreatePlayerTextDraw(playerid, 433.999969, 146.429626, "X");
	PlayerTextDrawLetterSize(playerid, DS_Cancel[playerid], 0.316333, 1.575111);
	PlayerTextDrawAlignment(playerid, DS_Cancel[playerid], 1);
	PlayerTextDrawColor(playerid, DS_Cancel[playerid], -1);
	PlayerTextDrawSetShadow(playerid, DS_Cancel[playerid], 0);
	PlayerTextDrawSetOutline(playerid, DS_Cancel[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, DS_Cancel[playerid], 51);
	PlayerTextDrawFont(playerid, DS_Cancel[playerid], 2);
	PlayerTextDrawSetProportional(playerid, DS_Cancel[playerid], 1);
	PlayerTextDrawSetSelectable(playerid, DS_Cancel[playerid], true);
	PlayerTextDrawSetSelectable(playerid, DS_Buy[playerid], true);

/*    PlayerTextDrawShow(playerid, DS_Box[playerid]);
    PlayerTextDrawShow(playerid, DS_Title[playerid]);
    PlayerTextDrawShow(playerid, DS_Model[playerid]);
    PlayerTextDrawShow(playerid, DS_VehName[playerid]);
    PlayerTextDrawShow(playerid, DS_StocName[playerid]);
    PlayerTextDrawShow(playerid, DS_Stoc[playerid]);
    PlayerTextDrawShow(playerid, DS_Next[playerid]);
    PlayerTextDrawShow(playerid, DS_Prev[playerid]);
    PlayerTextDrawShow(playerid, DS_PretName[playerid]);
    PlayerTextDrawShow(playerid, DS_Price[playerid]);
    PlayerTextDrawShow(playerid, DS_Buy[playerid]);
    PlayerTextDrawShow(playerid, DS_Cancel[playerid]);*/
	return 1;
}