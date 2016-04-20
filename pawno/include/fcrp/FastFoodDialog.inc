#include <a_samp>

//FASTFOOD TEXTDRAWS - IULY
new PlayerText:FF_Box[MAX_PLAYERS]; // BOX 1
new PlayerText:FF_Title[MAX_PLAYERS]; // 'FastFood Menu' 2
new PlayerText:FF_MeniuLow[MAX_PLAYERS]; // 'Meniu Low' 3
new PlayerText:FF_MeniuMediu[MAX_PLAYERS]; // 'Meniu Mediu' 4
new PlayerText:FF_MeniuMaxi[MAX_PLAYERS]; // 'Meniu Maxi' 5
new PlayerText:FF_HMic[MAX_PLAYERS]; // 'Hamburger Mic' 6
new PlayerText:FF_PMic[MAX_PLAYERS]; // 'Cartofi Portie Mica' 7
new PlayerText:FF_CMic[MAX_PLAYERS]; // 'Suc Cola Mic' 8
new PlayerText:FF_BUY1[MAX_PLAYERS]; // 'Cumpara 20$' 9
new PlayerText:FF_HMediu[MAX_PLAYERS]; // 'Hamburger Mediu' 10
new PlayerText:FF_PMediu[MAX_PLAYERS]; // 'Cartofi Portie Medie' 11
new PlayerText:FF_CMediu[MAX_PLAYERS]; // 'Suc Cola Mediu' 12
new PlayerText:FF_BUY2[MAX_PLAYERS]; // 'Cumpara 30$' 13
new PlayerText:FF_HMare[MAX_PLAYERS]; // 'Hamburger Mare' 14
new PlayerText:FF_PMare[MAX_PLAYERS]; // 'Cartofi Portie Mare' 15
new PlayerText:FF_CMare[MAX_PLAYERS]; // 'Suc Cola Mare' 16
new PlayerText:FF_BUY3[MAX_PLAYERS]; // 'Cumpara 40$' 17
new PlayerText:FF_Close[MAX_PLAYERS]; // 'X' 18

//NEWS
new meal[MAX_PLAYERS];
new meal_object[MAX_PLAYERS];
new meal_rtimer[MAX_PLAYERS];

stock CreateFFDialog(playerid)
{
	//1
	FF_Box[playerid] = CreatePlayerTextDraw(playerid, 557.500000, 149.588867, "_");
	PlayerTextDrawLetterSize(playerid, FF_Box[playerid], 0.000000, 20.285804);
	PlayerTextDrawTextSize(playerid, FF_Box[playerid], 79.500000, 0.000000);
	PlayerTextDrawAlignment(playerid, FF_Box[playerid], 1);
	PlayerTextDrawColor(playerid, FF_Box[playerid], -5963521);
	PlayerTextDrawUseBox(playerid, FF_Box[playerid], true);
	PlayerTextDrawBoxColor(playerid, FF_Box[playerid], 102);
	PlayerTextDrawSetShadow(playerid, FF_Box[playerid], 0);
	PlayerTextDrawSetOutline(playerid, FF_Box[playerid], 0);
	PlayerTextDrawFont(playerid, FF_Box[playerid], 0);
	PlayerTextDrawSetProportional(playerid, FF_Box[playerid], 1);

	//2
	FF_Title[playerid]
	= CreatePlayerTextDraw(playerid, 92.000000, 158.044403, "Fast Food Menu");
	PlayerTextDrawLetterSize(playerid, FF_Title[playerid], 0.449999, 1.600000);
	PlayerTextDrawTextSize(playerid, FF_Title[playerid], -43.000000, -17.422233);
	PlayerTextDrawAlignment(playerid, FF_Title[playerid], 1);
	PlayerTextDrawColor(playerid, FF_Title[playerid], -1);
	PlayerTextDrawSetShadow(playerid, FF_Title[playerid], 0);
	PlayerTextDrawSetOutline(playerid, FF_Title[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, FF_Title[playerid], 51);
	PlayerTextDrawFont(playerid, FF_Title[playerid], 0);
	PlayerTextDrawSetProportional(playerid, FF_Title[playerid], 1);

	//3
	FF_MeniuLow[playerid] = CreatePlayerTextDraw(playerid, 135.000000, 210.933319, "Meniu Low");
	PlayerTextDrawLetterSize(playerid, FF_MeniuLow[playerid], 0.449999, 1.600000);
	PlayerTextDrawAlignment(playerid, FF_MeniuLow[playerid], 1);
	PlayerTextDrawColor(playerid, FF_MeniuLow[playerid], -2147483393);
	PlayerTextDrawSetShadow(playerid, FF_MeniuLow[playerid], 0);
	PlayerTextDrawSetOutline(playerid, FF_MeniuLow[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, FF_MeniuLow[playerid], 51);
	PlayerTextDrawFont(playerid, FF_MeniuLow[playerid], 0);
	PlayerTextDrawSetProportional(playerid, FF_MeniuLow[playerid], 1);

	//4
	FF_MeniuMediu[playerid] = CreatePlayerTextDraw(playerid, 279.000000, 210.933319, "Meniu Mediu");
	PlayerTextDrawLetterSize(playerid, FF_MeniuMediu[playerid], 0.449999, 1.600000);
	PlayerTextDrawAlignment(playerid, FF_MeniuMediu[playerid], 1);
	PlayerTextDrawColor(playerid, FF_MeniuMediu[playerid], -2147483393);
	PlayerTextDrawSetShadow(playerid, FF_MeniuMediu[playerid], 0);
	PlayerTextDrawSetOutline(playerid, FF_MeniuMediu[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, FF_MeniuMediu[playerid], 51);
	PlayerTextDrawFont(playerid, FF_MeniuMediu[playerid], 0);
	PlayerTextDrawSetProportional(playerid, FF_MeniuMediu[playerid], 1);

	//5
	FF_MeniuMaxi[playerid] = CreatePlayerTextDraw(playerid, 431.500000, 210.311096, "Meniu Maxi");
	PlayerTextDrawLetterSize(playerid, FF_MeniuMaxi[playerid], 0.449999, 1.600000);
	PlayerTextDrawAlignment(playerid, FF_MeniuMaxi[playerid], 1);
	PlayerTextDrawColor(playerid, FF_MeniuMaxi[playerid], -2147483393);
	PlayerTextDrawSetShadow(playerid, FF_MeniuMaxi[playerid], 0);
	PlayerTextDrawSetOutline(playerid, FF_MeniuMaxi[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, FF_MeniuMaxi[playerid], 51);
	PlayerTextDrawFont(playerid, FF_MeniuMaxi[playerid], 0);
	PlayerTextDrawSetProportional(playerid, FF_MeniuMaxi[playerid], 1);

	//6
	FF_HMic[playerid] = CreatePlayerTextDraw(playerid, 164.500000, 236.006942, "- hamburger mic");
	PlayerTextDrawLetterSize(playerid, FF_HMic[playerid], 0.195500, 0.840888);
	PlayerTextDrawAlignment(playerid, FF_HMic[playerid], 2);
	PlayerTextDrawColor(playerid, FF_HMic[playerid], -1);
	PlayerTextDrawSetShadow(playerid, FF_HMic[playerid], 0);
	PlayerTextDrawSetOutline(playerid, FF_HMic[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, FF_HMic[playerid], 51);
	PlayerTextDrawFont(playerid, FF_HMic[playerid], 2);
	PlayerTextDrawSetProportional(playerid, FF_HMic[playerid], 1);

	//7
	FF_PMic[playerid] = CreatePlayerTextDraw(playerid, 129.000000, 247.829162, "- CARTOFI PORTIE MICA");
	PlayerTextDrawLetterSize(playerid, FF_PMic[playerid], 0.205999, 0.840888);
	PlayerTextDrawAlignment(playerid, FF_PMic[playerid], 1);
	PlayerTextDrawColor(playerid, FF_PMic[playerid], -1);
	PlayerTextDrawSetShadow(playerid, FF_PMic[playerid], 0);
	PlayerTextDrawSetOutline(playerid, FF_PMic[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, FF_PMic[playerid], 51);
	PlayerTextDrawFont(playerid, FF_PMic[playerid], 2);
	PlayerTextDrawSetProportional(playerid, FF_PMic[playerid], 1);

	//8
	FF_CMic[playerid] = CreatePlayerTextDraw(playerid, 129.000000, 259.466674, "- SUC COLA MIC");
	PlayerTextDrawLetterSize(playerid, FF_CMic[playerid], 0.232500, 0.766222);
	PlayerTextDrawAlignment(playerid, FF_CMic[playerid], 1);
	PlayerTextDrawColor(playerid, FF_CMic[playerid], -1);
	PlayerTextDrawSetShadow(playerid, FF_CMic[playerid], 0);
	PlayerTextDrawSetOutline(playerid, FF_CMic[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, FF_CMic[playerid], 51);
	PlayerTextDrawFont(playerid, FF_CMic[playerid], 2);
	PlayerTextDrawSetProportional(playerid, FF_CMic[playerid], 1);

	//9
	FF_BUY1[playerid] = CreatePlayerTextDraw(playerid, 128.000000, 288.088928, "Cumpara (20$)");
	PlayerTextDrawLetterSize(playerid, FF_BUY1[playerid], 0.287499, 1.413333);
	PlayerTextDrawAlignment(playerid, FF_BUY1[playerid], 1);
	PlayerTextDrawColor(playerid, FF_BUY1[playerid], 8388863);
	PlayerTextDrawSetShadow(playerid, FF_BUY1[playerid], 0);
	PlayerTextDrawSetOutline(playerid, FF_BUY1[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, FF_BUY1[playerid], 51);
	PlayerTextDrawFont(playerid, FF_BUY1[playerid], 2);
	PlayerTextDrawSetProportional(playerid, FF_BUY1[playerid], 1);
	PlayerTextDrawSetSelectable(playerid, FF_BUY1[playerid], true);

	//10
	FF_HMediu[playerid] = CreatePlayerTextDraw(playerid, 273.500000, 235.822204, "- HAMBURGER MEDIU");
	PlayerTextDrawLetterSize(playerid, FF_HMediu[playerid], 0.184999, 0.909332);
	PlayerTextDrawAlignment(playerid, FF_HMediu[playerid], 1);
	PlayerTextDrawColor(playerid, FF_HMediu[playerid], -1);
	PlayerTextDrawSetShadow(playerid, FF_HMediu[playerid], 0);
	PlayerTextDrawSetOutline(playerid, FF_HMediu[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, FF_HMediu[playerid], 51);
	PlayerTextDrawFont(playerid, FF_HMediu[playerid], 2);
	PlayerTextDrawSetProportional(playerid, FF_HMediu[playerid], 1);

	//11
	FF_PMediu[playerid] = CreatePlayerTextDraw(playerid, 273.500000, 248.266662, "- CARTOFI PORTIE MEDIE");
	PlayerTextDrawLetterSize(playerid, FF_PMediu[playerid], 0.188998, 1.027555);
	PlayerTextDrawAlignment(playerid, FF_PMediu[playerid], 1);
	PlayerTextDrawColor(playerid, FF_PMediu[playerid], -1);
	PlayerTextDrawSetShadow(playerid, FF_PMediu[playerid], 0);
	PlayerTextDrawSetOutline(playerid, FF_PMediu[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, FF_PMediu[playerid], 51);
	PlayerTextDrawFont(playerid, FF_PMediu[playerid], 2);
	PlayerTextDrawSetProportional(playerid, FF_PMediu[playerid], 1);

	//12
	FF_CMediu[playerid] = CreatePlayerTextDraw(playerid, 273.500000, 261.333312, "- SUC COLA MEDIU");
	PlayerTextDrawLetterSize(playerid, FF_CMediu[playerid], 0.192499, 0.940443);
	PlayerTextDrawAlignment(playerid, FF_CMediu[playerid], 1);
	PlayerTextDrawColor(playerid, FF_CMediu[playerid], -1);
	PlayerTextDrawSetShadow(playerid, FF_CMediu[playerid], 0);
	PlayerTextDrawSetOutline(playerid, FF_CMediu[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, FF_CMediu[playerid], 51);
	PlayerTextDrawFont(playerid, FF_CMediu[playerid], 2);
	PlayerTextDrawSetProportional(playerid, FF_CMediu[playerid], 1);

	//13
	FF_BUY2[playerid] = CreatePlayerTextDraw(playerid, 271.500000, 288.088836, "CUMPARA (30$)");
	PlayerTextDrawLetterSize(playerid, FF_BUY2[playerid], 0.282498, 1.506665);
	PlayerTextDrawAlignment(playerid, FF_BUY2[playerid], 1);
	PlayerTextDrawColor(playerid, FF_BUY2[playerid], 8388863);
	PlayerTextDrawSetShadow(playerid, FF_BUY2[playerid], 0);
	PlayerTextDrawSetOutline(playerid, FF_BUY2[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, FF_BUY2[playerid], 51);
	PlayerTextDrawFont(playerid, FF_BUY2[playerid], 2);
	PlayerTextDrawSetProportional(playerid, FF_BUY2[playerid], 1);
	PlayerTextDrawSetSelectable(playerid, FF_BUY2[playerid], true);

	//14
	FF_HMare[playerid] = CreatePlayerTextDraw(playerid, 426.000000, 234.577758, "- HAMBURGER MARE");
	PlayerTextDrawLetterSize(playerid, FF_HMare[playerid], 0.200999, 1.015110);
	PlayerTextDrawAlignment(playerid, FF_HMare[playerid], 1);
	PlayerTextDrawColor(playerid, FF_HMare[playerid], -1);
	PlayerTextDrawSetShadow(playerid, FF_HMare[playerid], 0);
	PlayerTextDrawSetOutline(playerid, FF_HMare[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, FF_HMare[playerid], 51);
	PlayerTextDrawFont(playerid, FF_HMare[playerid], 2);
	PlayerTextDrawSetProportional(playerid, FF_HMare[playerid], 1);

	//15
	FF_PMare[playerid] = CreatePlayerTextDraw(playerid, 426.500000, 247.644439, "- CARTOFI PORTIE MARE");
	PlayerTextDrawLetterSize(playerid, FF_PMare[playerid], 0.182499, 1.083554);
	PlayerTextDrawAlignment(playerid, FF_PMare[playerid], 1);
	PlayerTextDrawColor(playerid, FF_PMare[playerid], -1);
	PlayerTextDrawSetShadow(playerid, FF_PMare[playerid], 0);
	PlayerTextDrawSetOutline(playerid, FF_PMare[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, FF_PMare[playerid], 51);
	PlayerTextDrawFont(playerid, FF_PMare[playerid], 2);
	PlayerTextDrawSetProportional(playerid, FF_PMare[playerid], 1);

	//16
	FF_CMare[playerid] = CreatePlayerTextDraw(playerid, 427.000000, 260.088867, "- SUC COLA MARE");
	PlayerTextDrawLetterSize(playerid, FF_CMare[playerid], 0.188500, 1.039999);
	PlayerTextDrawAlignment(playerid, FF_CMare[playerid], 1);
	PlayerTextDrawColor(playerid, FF_CMare[playerid], -1);
	PlayerTextDrawSetShadow(playerid, FF_CMare[playerid], 0);
	PlayerTextDrawSetOutline(playerid, FF_CMare[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, FF_CMare[playerid], 51);
	PlayerTextDrawFont(playerid, FF_CMare[playerid], 2);
	PlayerTextDrawSetProportional(playerid, FF_CMare[playerid], 1);

	//17
	FF_BUY3[playerid] = CreatePlayerTextDraw(playerid, 428.500000, 289.333343, "CUMPARA (40$)");
	PlayerTextDrawLetterSize(playerid, FF_BUY3[playerid], 0.282498, 1.506665);
	PlayerTextDrawAlignment(playerid, FF_BUY3[playerid], 1);
	PlayerTextDrawColor(playerid, FF_BUY3[playerid], 8388863);
	PlayerTextDrawSetShadow(playerid, FF_BUY3[playerid], 0);
	PlayerTextDrawSetOutline(playerid, FF_BUY3[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, FF_BUY3[playerid], 51);
	PlayerTextDrawFont(playerid, FF_BUY3[playerid], 2);
	PlayerTextDrawSetProportional(playerid, FF_BUY3[playerid], 1);
	PlayerTextDrawSetSelectable(playerid, FF_BUY3[playerid], true);

	//18
	FF_Close[playerid] = CreatePlayerTextDraw(playerid, 539.500000, 155.422195, "X");
	PlayerTextDrawLetterSize(playerid, FF_Close[playerid], 0.449999, 1.600000);
	PlayerTextDrawAlignment(playerid, FF_Close[playerid], 1);
	PlayerTextDrawColor(playerid, FF_Close[playerid], -1);
	PlayerTextDrawSetShadow(playerid, FF_Close[playerid], 0);
	PlayerTextDrawSetOutline(playerid, FF_Close[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, FF_Close[playerid], 51);
	PlayerTextDrawFont(playerid, FF_Close[playerid], 1);
	PlayerTextDrawSetProportional(playerid, FF_Close[playerid], 1);
	PlayerTextDrawSetSelectable(playerid, FF_Close[playerid], true);
	return 1;
}

stock ShowFFTD(playerid)
{
	PlayerTextDrawShow(playerid, FF_Box[playerid]); // BOX 1
	PlayerTextDrawShow(playerid, FF_Title[playerid]); // 'FastFood Menu' 2
	PlayerTextDrawShow(playerid, FF_MeniuLow[playerid]); // 'Meniu Low' 3
	PlayerTextDrawShow(playerid, FF_MeniuMediu[playerid]); // 'Meniu Mediu' 4
	PlayerTextDrawShow(playerid, FF_MeniuMaxi[playerid]); // 'Meniu Maxi' 5
	PlayerTextDrawShow(playerid, FF_HMic[playerid]); // 'Hamburger Mic' 6
	PlayerTextDrawShow(playerid, FF_PMic[playerid]); // 'Cartofi Portie Mica' 7
	PlayerTextDrawShow(playerid, FF_CMic[playerid]); // 'Suc Cola Mic' 8
	PlayerTextDrawShow(playerid, FF_BUY1[playerid]); // 'Cumpara 20$' 9
	PlayerTextDrawShow(playerid, FF_HMediu[playerid]); // 'Hamburger Mediu' 10
	PlayerTextDrawShow(playerid, FF_PMediu[playerid]); // 'Cartofi Portie Medie' 11
	PlayerTextDrawShow(playerid, FF_CMediu[playerid]); // 'Suc Cola Mediu' 12
	PlayerTextDrawShow(playerid, FF_BUY2[playerid]); // 'Cumpara 30$' 13
	PlayerTextDrawShow(playerid, FF_HMare[playerid]); // 'Hamburger Mare' 14
	PlayerTextDrawShow(playerid, FF_PMare[playerid]); // 'Cartofi Portie Mare' 15
	PlayerTextDrawShow(playerid, FF_CMare[playerid]); // 'Suc Cola Mare' 16
	PlayerTextDrawShow(playerid, FF_BUY3[playerid]); // 'Cumpara 40$' 17
	PlayerTextDrawShow(playerid, FF_Close[playerid]); // Close
}

stock HideFFTD(playerid)
{
	PlayerTextDrawHide(playerid, FF_Box[playerid]); // BOX 1
	PlayerTextDrawHide(playerid, FF_Title[playerid]); // 'FastFood Menu' 2
	PlayerTextDrawHide(playerid, FF_MeniuLow[playerid]); // 'Meniu Low' 3
	PlayerTextDrawHide(playerid, FF_MeniuMediu[playerid]); // 'Meniu Mediu' 4
	PlayerTextDrawHide(playerid, FF_MeniuMaxi[playerid]); // 'Meniu Maxi' 5
	PlayerTextDrawHide(playerid, FF_HMic[playerid]); // 'Hamburger Mic' 6
	PlayerTextDrawHide(playerid, FF_PMic[playerid]); // 'Cartofi Portie Mica' 7
	PlayerTextDrawHide(playerid, FF_CMic[playerid]); // 'Suc Cola Mic' 8
	PlayerTextDrawHide(playerid, FF_BUY1[playerid]); // 'Cumpara 20$' 9
	PlayerTextDrawHide(playerid, FF_HMediu[playerid]); // 'Hamburger Mediu' 10
	PlayerTextDrawHide(playerid, FF_PMediu[playerid]); // 'Cartofi Portie Medie' 11
	PlayerTextDrawHide(playerid, FF_CMediu[playerid]); // 'Suc Cola Mediu' 12
	PlayerTextDrawHide(playerid, FF_BUY2[playerid]); // 'Cumpara 30$' 13
	PlayerTextDrawHide(playerid, FF_HMare[playerid]); // 'Hamburger Mare' 14
	PlayerTextDrawHide(playerid, FF_PMare[playerid]); // 'Cartofi Portie Mare' 15
	PlayerTextDrawHide(playerid, FF_CMare[playerid]); // 'Suc Cola Mare' 16
	PlayerTextDrawHide(playerid, FF_BUY3[playerid]); // 'Cumpara 40$' 17
	PlayerTextDrawHide(playerid, FF_Close[playerid]); // Close
}

enum FASTFOOD_INFO
{
	Float:ffX,
	Float:ffY,
	Float:ffZ
};

new FastFood[][FASTFOOD_INFO] = {
{375.4843, -118.8061, 1001.4995} //IDLESTACK (INTERIOR)
};

stock IsAtFastFood(playerid)
{
	for(new i=0;i<sizeof(FastFood);i++)
	{
		if(PlayerToPoint(3.0, playerid, FastFood[i][ffX], FastFood[i][ffY], FastFood[i][ffZ]))
		{
			return true;			
		}
	}
	return false;
}