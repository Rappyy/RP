#include "a_samp"

#define MAX_DYNAMIC_GROUPS 10
#define MAX_DYNAMIC_VEHICLES 200
#define MainDialogID 4765
#define ShowVehicleSpawnDialog(%0) ShowPlayerDialog(%0,MainDialogID - 1,DIALOG_STYLE_LIST,"Admin Vehicle Spawner - BC-CNR",MainDialogString,"Select","Quit")
#if !defined isnull
    #define isnull(%1) \
                ((!(%1[0])) || (((%1[0]) == '\1') && (!(%1[1]))))
#endif

forward _OnDialogResponse(playerid, dialogid, response, listitem, inputtext[]);
forward _OnVehicleDeath(vehicleid);
forward _OnPlayerExitVehicle(playerid, vehicleid);

new adminveh;

enum DynamicGroups
{
	DialogString[500],
	DialogID,
	ContainingVehicles
};

enum DynamicVehicles
{
	DynVehGroup,
	DynVehModel,
	DynVehColor1,
	DynVehColor2
};

new DynamicVehicleGroupInfo[MAX_DYNAMIC_GROUPS][DynamicGroups],
	DynamicVehicleInfo[MAX_DYNAMIC_VEHICLES][DynamicVehicles],
	DynamicGroupCount = 0,
	DynamicVehicleCount = 0,
	MainDialogString[500],
	strr[128],
	vNames[212][50] =
	{
	   "Landstalker",		"Bravura",   		"Buffalo",  	 	"Linerunner",		"Pereniel",  		"Sentinel",
	   "Dumper",			"Firetruck", 		"Trashmaster",   	"Stretch",			"Manana",    		"Infernus",
	   "Voodoo",			"Pony",   	 		"Mule",   		 	"Cheetah",			"Ambulance", 		"Leviathan",
	   "Moonbeam",  		"Esperanto", 		"Taxi",		     	"Washington",   	"Bobcat",    		"Mr Whoopee",
	   "BF Injection",  	"Hunter",    		"Premier",   	 	"Enforcer",   		"Securicar", 		"Banshee",
	   "Predator",   		"Bus",   	 		"Rhino",   		 	"Barracks",   		"Hotknife",  		"Trailer",
	   "Previon",   		"Coach",     		"Cabbie",  		 	"Stallion",   		"Rumpo",     		"RC Bandit",
	   "Romero",   			"Packer",    		"Monster Truck", 	"Admiral",  		"Squalo",    		"Seasparrow",
	   "Pizzaboy",  		"Tram",      		"Trailer",   	 	"Turismo",   		"Speeder",   		"Reefer",
	   "Tropic",   			"Flatbed",   		"Yankee",   	 	"Caddy",   			"Solair",    		"RC Van",
	   "Skimmer",   		"PCJ-600",   		"Faggio",   	 	"Freeway",   		"RC Baron",  		"RC Raider",
	   "Glendale",  		"Oceanic",   		"Sanchez",   	 	"Sparrow",   		"Patriot",   		"Quad",
	   "Coastguard",    	"Dinghy",    		"Hermes",   	 	"Sabre",   			"Rustler",   		"ZR-350",
	   "Walton",  	 		"Regina",    		"Comet",   		 	"BMX",   			"Burrito",   		"Camper",
	   "Marquis",   		"Baggage",   		"Dozer",   		 	"Maverick", 		"News Chopper",		"Rancher",
	   "Police Rancher",	"Virgo",   	  		"Greenwood",   	 	"Jetmax",   		"Hotring",    		"Sandking",
	   "Blista Compact",	"Police Maverick",	"Boxville",   	 	"Benson",   		"Mesa",   	 		"RC Goblin",
	   "Hotring Racer", 	"Hotring Racer",	"Bloodring Banger", "Rancher",   		"Super GT",   		"Elegant",
	   "Journey",   		"Bike",   	  		"Mountain Bike",    "Beagle",   		"Cropdust",   		"Stunt",
	   "Tanker",   			"RoadTrain",  		"Nebula",   		"Majestic",  		"Buccaneer",  		"Shamal",
	   "Hydra",   			"FCR-900",    		"NRG-500",  		"HPV-1000",  		"Cement Truck",   	"Tow Truck",
	   "Fortune",  			"Cadrona",  		"Enforcer",		   	"Willard",   		"Forklift",   		"Tractor",
	   "Combine",   		"Feltzer",   		"Remington",   		"Slamvan",   		"Blade",   			"Freight",
	   "Streak",   			"Vortex",   		"Vincent",   		"Bullet",   		"Clover",   		"Sadler",
	   "Firetruck (LA)",	"Hustler",  		"Intruder",  		"Primo",   			"Cargobob",   		"Tampa",
	   "Sunrise", 			"Merit",   			"Utility",   		"Nevada",   		"Yosemite",  		"Windsor",
	   "Monster Truck A",	"Monster Truck B",  "Uranus",   		"Jester",   		"Sultan",   		"Stratum",
	   "Elegy",   			"Raindance",   		"RC Tiger",  		"Flash",   			"Tahoma",   		"Savanna",
	   "Bandito",   		"Freight",   		"Trailer",   		"Kart",   			"Mower",   			"Duneride",
	   "Sweeper",	    	"Broadway", 		"Tornado",   		"AT-400", 			"DFT-30",   		"Huntley",
	   "Stafford",  		"BF-400",   		"Newsvan",   		"Tug",   			"Trailer",  		"Emperor",
	   "Wayfarer",  		"Euros",   			"Hotdog",   		"Club",   			"Trailer",   		"Trailer",
	   "Andromada", 		"Dodo",   			"RC Cam",   		"Launch",   		"Police Car (LSPD)","Police Car (SFPD)",
	   "Police Car (LVPD)",	"Police Ranger",	"Picador",		    "S.W.A.T. Van",  	"Alpha",   			"Phoenix",
	   "Glendale",   		"Sadler",   		"Luggage Trailer",  "Luggage Trailer",	"Stair Trailer",   	"Boxville",
	   "Farm Plow",   		"Utility Trailer"
	};

stock CreateDynamicVehicleGroup(groupname[64])
{
	DynamicVehicleGroupInfo[DynamicGroupCount][DialogID] = (MainDialogID + DynamicGroupCount);
	format(strr,sizeof(strr),"%s\n",groupname);
	strcat(MainDialogString,strr);
	DynamicGroupCount ++;
	return DynamicGroupCount - 1;
}

stock AddDynamicVehicle(groupid, modelid, color1 = -1, color2 = -1)
{
	DynamicVehicleInfo[DynamicVehicleCount][DynVehGroup] = groupid;
	DynamicVehicleInfo[DynamicVehicleCount][DynVehModel] = modelid;
	DynamicVehicleInfo[DynamicVehicleCount][DynVehColor1] = color1;
	DynamicVehicleInfo[DynamicVehicleCount][DynVehColor2] = color2;
	DynamicVehicleGroupInfo[groupid][ContainingVehicles] ++;
	if(DynamicVehicleCount == 0) format(strr,sizeof(strr),"%s",vNames[modelid - 400]);
	else format(strr,sizeof(strr),"\n%s",vNames[modelid - 400]);
	strcat(DynamicVehicleGroupInfo[groupid][DialogString],strr,sizeof(strr));
	DynamicVehicleCount ++;
	return DynamicVehicleCount - 1;
}

public _OnDialogResponse(playerid, dialogid, response, listitem, inputtext[])
{
	if(response)
	{
		new VehiclesBeforeGroup[MAX_PLAYERS];
		new text[256];
		if(dialogid == MainDialogID - 1)
		{
			//printf(DynamicVehicleGroupInfo[listitem][DialogString]);
			ShowPlayerDialog(playerid,MainDialogID + listitem,DIALOG_STYLE_LIST,"Admin Vehicle Spawner - BC-CNR",DynamicVehicleGroupInfo[listitem][DialogString],"Select","Quit");
			SetPVarInt(playerid,"BrowsingGroup",listitem);
			return 1;
		}
		for(new g = 0; g < MAX_DYNAMIC_GROUPS; g ++)
		{
			if(dialogid == DynamicVehicleGroupInfo[g][DialogID])
			{
				if(IsPlayerInAnyVehicle(playerid)) RemovePlayerFromVehicle(playerid);
				new Float:Pos[4],id = listitem + VehiclesBeforeGroup[playerid];
				GetPlayerPos(playerid,Pos[0],Pos[1],Pos[2]);
				GetPlayerFacingAngle(playerid,Pos[3]);
				adminveh = CreateVehicle(DynamicVehicleInfo[id][DynVehModel],Pos[0],Pos[1],Pos[2],Pos[3],DynamicVehicleInfo[id][DynVehColor1],DynamicVehicleInfo[id][DynVehColor2],-1);
				PutPlayerInVehicle(playerid,adminveh,0);
				new engine,lights,alarm,doors,bonnet,boot,objective;
			   	GetVehicleParamsEx(adminveh,engine,lights,alarm,doors,bonnet,boot,objective);
				SetVehicleParamsEx(adminveh,1,1,alarm,doors,bonnet,boot,objective);
			    new StringPlate[56];
				format(StringPlate, sizeof(StringPlate),"ADMIN %d",adminveh);
	    		SetVehicleNumberPlate(adminveh, StringPlate);
	   			format(text,sizeof(text),"[ADM] %s has spawned a %s (ID: %d) at their location.", GetPlayerNameEx(playerid),vNames[DynamicVehicleInfo[id][DynVehModel] - 400], adminveh);
    			SendMessageToAdmins(0xFF0000AA,text);
				return 1;
			}
			else
			{
				VehiclesBeforeGroup[playerid] += DynamicVehicleGroupInfo[g][ContainingVehicles];
			}
		}
		return 1;
	}
	return 1;
}

public _OnPlayerExitVehicle(playerid, vehicleid)
{
    return 1;
}

public _OnVehicleDeath(vehicleid)
{
	DestroyVehicle(vehicleid);
	return 1;
}
