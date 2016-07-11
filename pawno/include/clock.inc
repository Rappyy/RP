#include <a_samp>
#pragma tabsize 0



#define ZBC_MONDAY 0
#define ZBC_TUESDAY 1
#define ZBC_WEDNESDAY 2
#define ZBC_THURSDAY 3
#define ZBC_FRIDAY 4
#define ZBC_SATURDAY 5
#define ZBC_SUNDAY 6

#define ZBC_COLOR_BLACK 0x000000FF
#define ZBC_COLOR_RED 0xE21F1FFF
#define ZBC_COLOR_GREY 0xFFFFFFFF
#define ZBC_COLOR_WHITE 0xFFFFFFFF

new ZBCDay;
new ZBCHours;

new Text:TextZBC;
new TextZBCHoursString[56];
new TextZBCMinutes, TextZBCMinutesString[56];

new Text:TextMonday;
new Text:TextTuesday;
new Text:TextWednesday;
new Text:TextThursday;
new Text:TextFriday;
new Text:TextSaturday;
new Text:TextSunday;

// USE THESE NATIVES ONLY!!!!!!
stock SetDay(Day)
{
	ZBCDay = Day;
	UpdateDay(ZBCDay);
}
stock SetHour(Hour)
{
	ZBCHours = Hour;
}
stock GetHour()
{
	return ZBCHours;
}
stock GetDay()
{
	return ZBCDay;
}
// When the Clock Ticks
forward OnZBCTimeTick();
// When the day updates
forward OnZBCDayChange();

// Native callback to go under OnGameModeInit()
stock InitializeZBC(style)
{
	if(style == 0)
        {
		// The clock's text
		TextZBC = TextDrawCreate(546.000000,22.000000,"--:--");
		TextDrawAlignment(TextZBC,0);
		TextDrawBackgroundColor(TextZBC,ZBC_COLOR_BLACK);
		TextDrawFont(TextZBC,3);
		TextDrawLetterSize(TextZBC,0.635,2.4);
		TextDrawColor(TextZBC,ZBC_COLOR_WHITE);
		TextDrawSetOutline(TextZBC,1);
		TextDrawSetProportional(TextZBC,1);
		TextDrawSetShadow(TextZBC,1);

		// Text draws for the days of the week
		TextMonday = TextDrawCreate(549.000000, 44.000000, "M");
		TextDrawAlignment(TextMonday, 2);
		TextDrawBackgroundColor(TextMonday, 255);
		TextDrawFont(TextMonday, 3);
		TextDrawLetterSize(TextMonday, 0.180000, 0.700000);
		TextDrawColor(TextMonday, ZBC_COLOR_GREY);
		TextDrawSetOutline(TextMonday, 1);
		TextDrawSetProportional(TextMonday, 1);

		TextTuesday = TextDrawCreate(557.000000, 44.000000, "T");
		TextDrawAlignment(TextTuesday, 2);
		TextDrawBackgroundColor(TextTuesday, 255);
		TextDrawFont(TextTuesday, 3);
		TextDrawLetterSize(TextTuesday, 0.180000, 0.700000);
		TextDrawColor(TextTuesday, ZBC_COLOR_GREY);
		TextDrawSetOutline(TextTuesday, 1);
		TextDrawSetProportional(TextTuesday, 1);

		TextWednesday = TextDrawCreate(565.000000, 44.000000, "W");
		TextDrawAlignment(TextWednesday, 2);
		TextDrawBackgroundColor(TextWednesday, 255);
		TextDrawFont(TextWednesday, 3);
		TextDrawLetterSize(TextWednesday, 0.180000, 0.700000);
		TextDrawColor(TextWednesday, ZBC_COLOR_GREY);
		TextDrawSetOutline(TextWednesday, 1);
		TextDrawSetProportional(TextWednesday, 1);

		TextThursday = TextDrawCreate(573.000000, 44.000000, "T");
		TextDrawAlignment(TextThursday, 2);
		TextDrawBackgroundColor(TextThursday, 255);
		TextDrawFont(TextThursday, 3);
		TextDrawLetterSize(TextThursday, 0.180000, 0.700000);
		TextDrawColor(TextThursday, ZBC_COLOR_GREY);
		TextDrawSetOutline(TextThursday, 1);
		TextDrawSetProportional(TextThursday, 1);

		TextFriday = TextDrawCreate(580.000000, 44.000000, "F");
		TextDrawAlignment(TextFriday, 2);
		TextDrawBackgroundColor(TextFriday, 255);
		TextDrawFont(TextFriday, 3);
		TextDrawLetterSize(TextFriday, 0.180000, 0.700000);
		TextDrawColor(TextFriday, ZBC_COLOR_GREY);
		TextDrawSetOutline(TextFriday, 1);
		TextDrawSetProportional(TextFriday, 1);

		TextSaturday = TextDrawCreate(587.000000, 44.000000, "S");
		TextDrawAlignment(TextSaturday, 2);
		TextDrawBackgroundColor(TextSaturday, 255);
		TextDrawFont(TextSaturday, 3);
		TextDrawLetterSize(TextSaturday, 0.180000, 0.700000);
		TextDrawColor(TextSaturday, ZBC_COLOR_GREY);
		TextDrawSetOutline(TextSaturday, 1);
		TextDrawSetProportional(TextSaturday, 1);

		TextSunday = TextDrawCreate(594.000000, 44.000000, "S");
		TextDrawAlignment(TextSunday, 2);
		TextDrawBackgroundColor(TextSunday, 255);
		TextDrawFont(TextSunday, 3);
		TextDrawLetterSize(TextSunday, 0.180000, 0.700000);
		TextDrawColor(TextSunday, ZBC_COLOR_GREY);
		TextDrawSetOutline(TextSunday, 1);
		TextDrawSetProportional(TextSunday, 1);
	}
	else if(style == 1) // IDEA BY: ducati09
        {
		// The clock's text
		TextZBC = TextDrawCreate(546.000000,22.000000,"--:--");
		TextDrawAlignment(TextZBC,0);
		TextDrawBackgroundColor(TextZBC,ZBC_COLOR_BLACK);
		TextDrawFont(TextZBC,3);
		TextDrawLetterSize(TextZBC,0.635,2.4);
		TextDrawColor(TextZBC,ZBC_COLOR_WHITE);
		TextDrawSetOutline(TextZBC,1);
		TextDrawSetProportional(TextZBC,1);
		TextDrawSetShadow(TextZBC,1);

		// Text draws for the days of the week
		TextMonday = TextDrawCreate(503.000000, 14.000000, "M");
		TextDrawAlignment(TextMonday, 2);
		TextDrawBackgroundColor(TextMonday, 255);
		TextDrawFont(TextMonday, 3);
		TextDrawLetterSize(TextMonday, 0.280000, 1.000000);
		TextDrawColor(TextMonday, ZBC_COLOR_GREY);
		TextDrawSetOutline(TextMonday, 1);
		TextDrawSetProportional(TextMonday, 1);

		TextTuesday = TextDrawCreate(514.000000, 14.000000, "T");
		TextDrawAlignment(TextTuesday, 2);
		TextDrawBackgroundColor(TextTuesday, 255);
		TextDrawFont(TextTuesday, 3);
		TextDrawLetterSize(TextTuesday, 0.280000, 1.000000);
		TextDrawColor(TextTuesday, ZBC_COLOR_GREY);
		TextDrawSetOutline(TextTuesday, 1);
		TextDrawSetProportional(TextTuesday, 1);

		TextWednesday = TextDrawCreate(526.000000, 14.000000, "W");
		TextDrawAlignment(TextWednesday, 2);
		TextDrawBackgroundColor(TextWednesday, 255);
		TextDrawFont(TextWednesday, 3);
		TextDrawLetterSize(TextWednesday, 0.280000, 1.000000);
		TextDrawColor(TextWednesday, ZBC_COLOR_GREY);
		TextDrawSetOutline(TextWednesday, 1);
		TextDrawSetProportional(TextWednesday, 1);

		TextThursday = TextDrawCreate(538.000000, 14.000000, "T");
		TextDrawAlignment(TextThursday, 2);
		TextDrawBackgroundColor(TextThursday, 255);
		TextDrawFont(TextThursday, 3);
		TextDrawLetterSize(TextThursday, 0.280000, 1.000000);
		TextDrawColor(TextThursday, ZBC_COLOR_GREY);
		TextDrawSetOutline(TextThursday, 1);
		TextDrawSetProportional(TextThursday, 1);

		TextFriday = TextDrawCreate(548.000000, 14.000000, "F");
		TextDrawAlignment(TextFriday, 2);
		TextDrawBackgroundColor(TextFriday, 255);
		TextDrawFont(TextFriday, 3);
		TextDrawLetterSize(TextFriday, 0.280000, 1.000000);
		TextDrawColor(TextFriday, ZBC_COLOR_GREY);
		TextDrawSetOutline(TextFriday, 1);
		TextDrawSetProportional(TextFriday, 1);

		TextSaturday = TextDrawCreate(558.000000, 14.000000, "S");
		TextDrawAlignment(TextSaturday, 2);
		TextDrawBackgroundColor(TextSaturday, 255);
		TextDrawFont(TextSaturday, 3);
		TextDrawLetterSize(TextSaturday, 0.280000, 1.000000);
		TextDrawColor(TextSaturday, ZBC_COLOR_GREY);
		TextDrawSetOutline(TextSaturday, 1);
		TextDrawSetProportional(TextSaturday, 1);

		TextSunday = TextDrawCreate(568.000000, 14.000000, "S");
		TextDrawAlignment(TextSunday, 2);
		TextDrawBackgroundColor(TextSunday, 255);
		TextDrawFont(TextSunday, 3);
		TextDrawLetterSize(TextSunday, 0.280000, 1.000000);
		TextDrawColor(TextSunday, ZBC_COLOR_GREY);
		TextDrawSetOutline(TextSunday, 1);
		TextDrawSetProportional(TextSunday, 1);
	}
	
	TextZBCMinutes = 00;
	SetTimer("UpdateTime", 1000, 1); // Every second
 	SetWorldTime(ZBCHours);
 	UpdateDay(ZBCDay);

	
}

// Where ever you want this
stock LoadZBCText(playerid)
{
	TextDrawShowForPlayer(playerid, TextZBC);
	TextDrawShowForPlayer(playerid, TextMonday);
	TextDrawShowForPlayer(playerid, TextTuesday);
	TextDrawShowForPlayer(playerid, TextWednesday);
	TextDrawShowForPlayer(playerid, TextThursday);
	TextDrawShowForPlayer(playerid, TextFriday);
	TextDrawShowForPlayer(playerid, TextSaturday);
	TextDrawShowForPlayer(playerid, TextSunday);
}

stock UnloadZBCText(playerid)
{
    TextDrawHideForPlayer(playerid, TextZBC);
    TextDrawHideForPlayer(playerid, TextMonday);
    TextDrawHideForPlayer(playerid, TextTuesday);
    TextDrawHideForPlayer(playerid, TextWednesday);
    TextDrawHideForPlayer(playerid, TextThursday);
    TextDrawHideForPlayer(playerid, TextFriday);
    TextDrawHideForPlayer(playerid, TextSaturday);
    TextDrawHideForPlayer(playerid, TextSunday);
}


// DO NOT CALL THIS!!!!!!!!
//Timer for time (lol)
forward UpdateTime();
public UpdateTime()
{
	new ClockString[126];
	TextZBCMinutes++;
	// Checks for clock 'defining' minutes limit as 60 and hours limit as 24
	if(TextZBCMinutes == 60)
	{
	    TextZBCMinutes = 00;
	    ZBCHours++;
	    if(ZBCHours == 24)
	    {
	        ZBCDay++;
	        if(ZBCDay == 6)
	        {
	            ZBCDay = 0;
	        }
	        UpdateDay(ZBCDay);
	        ZBCHours = 00;
                OnZBCDayChange();
	    }
	}
 	if(TextZBCMinutes < 10)
  	{
	    format(TextZBCMinutesString, sizeof(TextZBCMinutesString), "0%i", TextZBCMinutes);
  	}
  	if(TextZBCMinutes > 10)
  	{
	    format(TextZBCMinutesString, sizeof(TextZBCMinutesString), "%i", TextZBCMinutes);
  	}
  	if(ZBCHours < 10)
  	{
  	    format(TextZBCHoursString, sizeof(TextZBCHoursString), "0%i", ZBCHours);
  	}
  	if(ZBCHours > 10)
  	{
  	    format(TextZBCHoursString, sizeof(TextZBCHoursString), "%i", ZBCHours);
  	}
	format(ClockString, sizeof(ClockString), "%s:%s", TextZBCHoursString, TextZBCMinutesString);
	for(new iZBC=0; iZBC<MAX_PLAYERS; iZBC++)
	{
	    if(IsPlayerConnected(iZBC))
	    {
	        SetPlayerTime(iZBC, ZBCHours, TextZBCMinutes);
	    }
	}
	TextDrawSetString(TextZBC, ClockString);
	OnZBCTimeTick();
}



// DO NOT CALL THIS!!!!!!!!
forward UpdateDay(Day);
public UpdateDay(Day)
{
	if(Day == 0) // Monday
	{
		TextDrawSetString(TextMonday, "~b~~h~M");
		TextDrawSetString(TextTuesday, "~w~T");
		TextDrawSetString(TextWednesday, "~w~W");
		TextDrawSetString(TextThursday, "~w~T");
		TextDrawSetString(TextFriday, "~w~F");
		TextDrawSetString(TextSaturday, "~w~S");
		TextDrawSetString(TextSunday, "~w~S");
	}
	if(Day == 1) // Tuesday
	{
	    TextDrawSetString(TextMonday, "~w~M");
		TextDrawSetString(TextTuesday, "~b~~h~T");
		TextDrawSetString(TextWednesday, "~w~W");
		TextDrawSetString(TextThursday, "~w~T");
		TextDrawSetString(TextFriday, "~w~F");
		TextDrawSetString(TextSaturday, "~w~S");
		TextDrawSetString(TextSunday, "~w~S");
	}
	if(Day == 2) // Wednesday
	{
	    TextDrawSetString(TextMonday, "~w~M");
		TextDrawSetString(TextTuesday, "~w~T");
		TextDrawSetString(TextWednesday, "~b~~h~W");
		TextDrawSetString(TextThursday, "~w~T");
		TextDrawSetString(TextFriday, "~w~F");
		TextDrawSetString(TextSaturday, "~w~S");
		TextDrawSetString(TextSunday, "~w~S");
	}
	if(Day == 3) // Thursday
	{
	    TextDrawSetString(TextMonday, "~w~M");
		TextDrawSetString(TextTuesday, "~w~T");
		TextDrawSetString(TextWednesday, "~w~W");
		TextDrawSetString(TextThursday, "~b~~h~T");
		TextDrawSetString(TextFriday, "~w~F");
		TextDrawSetString(TextSaturday, "~w~S");
		TextDrawSetString(TextSunday, "~w~S");
	}
	if(Day == 4) // Friday
	{
	    TextDrawSetString(TextMonday, "~w~M");
		TextDrawSetString(TextTuesday, "~w~T");
		TextDrawSetString(TextWednesday, "~w~W");
		TextDrawSetString(TextThursday, "~w~T");
		TextDrawSetString(TextFriday, "~b~~h~F");
		TextDrawSetString(TextSaturday, "~w~S");
		TextDrawSetString(TextSunday, "~w~S");
	}
	if(Day == 5) // Saturday
	{
	    TextDrawSetString(TextMonday, "~w~M");
		TextDrawSetString(TextTuesday, "~w~T");
		TextDrawSetString(TextWednesday, "~w~W");
		TextDrawSetString(TextThursday, "~w~T");
		TextDrawSetString(TextFriday, "~w~F");
		TextDrawSetString(TextSaturday, "~b~~h~S");
		TextDrawSetString(TextSunday, "~w~S");
	}
	if(Day == 6) // Sunday
	{
	    TextDrawSetString(TextMonday, "~w~M");
		TextDrawSetString(TextTuesday, "~w~T");
		TextDrawSetString(TextWednesday, "~w~W");
		TextDrawSetString(TextThursday, "~w~T");
		TextDrawSetString(TextFriday, "~w~F");
		TextDrawSetString(TextSaturday, "~w~S");
		TextDrawSetString(TextSunday, "~b~~h~S");
	}
}
