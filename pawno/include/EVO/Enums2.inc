#include <a_samp>

enum ATTACH_WEP{
	wepID,
	wepAmmo,
	wepType,
	wepGType,
	wepASlot
}
new AttachWep[MAX_PLAYERS][ATTACH_WEP];
enum NOTES_INFO
{
	nDatabaseID,
	nNote[128],
	nToInsert,
	nToDelete,
	nOn
}
new PlayerNotes[MAX_PLAYERS][MAX_NOTES][NOTES_INFO];

enum WEAPON_INFO
{
	wID,
	wDamage
}
new WeaponDMG[MAX_WEAPONS][WEAPON_INFO];

#define CELL_ID 1
#define TOOL_ID 2
#define RADIO_ID 3
#define MASK_ID 4
#define LIGHTER_ID 5
#define DICE_ID 6
#define CIGGARS_ID 7
#define GASCAN_ID 8
#define PEN_ID 9
#define BAT_ID 10
#define CAMERA_ID 11
#define FISHINGROD_ID 12

enum STORE_ITEMS
{
	itemPrice,
	itemName[64],
	itemUsage[64],
	itemID
}

new StoreItems[][STORE_ITEMS] = {
{250, "Telefon", "call", CELL_ID},
{100, "Set de scule", "lock", TOOL_ID},
{1500, "Statie radio", "setchannel", RADIO_ID},
{100, "Masca", "mask", MASK_ID},
{1, "Bricheta (40 folosiri)", "smoke", LIGHTER_ID},
{10, "Tigari (20)", "smoke", CIGGARS_ID},
{5, "Zar", "dice", DICE_ID},
{75, "Gascan", "gascan", GASCAN_ID},
{5, "Pix", "note", PEN_ID},
{25, "Baseball bat", "none", BAT_ID},
{150, "Camera", "none", CAMERA_ID},
{50, "Undita de pescuit", "fishingrod", FISHINGROD_ID}
};


#define FURNITURE_LIST 1
#define FURNITURE_LIST_NONE 2

enum eInfo{

	eMsg[80],
	eExpire

}

new ErrorInfo[MAX_PLAYERS][3][eInfo];

//========================BoomBox URL's========================//
enum TOLL_INFO
{
	E_tLocked,  // 0 & 1 = Richhman, 2 & 3 = Flint, 4 & 5 = LV, 6 & 7 = BlueBerry right
	E_tOpenTime // 0 & 1 = Richhman, 2 & 3 = Flint, 4 & 5 = LV, 6 & 7 = BlueBerry right
}
new aTolls[MAX_TOLLS][TOLL_INFO];

enum TRUCKER_INFO
{
	tDestination[128],
	Float:tDesX,
	Float:tDesY,
	Float:tDesZ
}
enum GATHER_INFO
{
	tGather[128],
}

new TruckItems[][GATHER_INFO] = {
{"ELECTRONICE"},
{"MOBILA"},
{"MATERIALE DE CONSTRUCTIE"},
{"MANCARE SI SUPLIMENTE"},
{"HAINE"}
};

new TruckDropInfo[][TRUCKER_INFO] = {
{"MARKET STORAGE DROP OFF", 1097.9225,-1189.0782,18.3428},
{"WILLOWFIELD DROP OFF", 2080.3901,-2033.3337,13.5469},
{"OCEAN DOCKS DROP OFF", 2273.0703,-2350.4883,13.5469},
{"LAS COLINAS DROP OFF", 2266.3250,-1103.1696,37.9766},
{"VINEWOOD DROP OFF", 952.5364,-913.3711,45.7656},
{"VINEWOOD DROP OFF", 696.8450,-1186.6152,15.5669},
{"BLUEBERRY DROP OFF", 119.7707,-183.6332,1.5335},
{"BLUEBERRY DROP OFF", 211.3066,-32.6511,1.5781}
};

new TruckInfo[][TRUCKER_INFO] = {
{"EAST BEACH LOADING BAY", 2769.1587,-1615.4111,10.9219},
{"PLAYA DEL SEVILLE LOADING BAY", 2750.9058,-2001.4749,13.5547},
{"EAST BEACH LOADING BAY 2", 2668.6970,-1443.8296,30.5299},
{"VINEWOOD LOADING BAY 2", 914.3157,-1000.7145,38.0578},
{"SANTA MARIA BEACH LOADING BAY", 411.8087,-1726.6237,8.8560},
{"FLINT COUNTY LOADING BAY", -65.6933,-1120.3291,1.0781},
{"FALLEN TREE LOADING BAY", -576.3687,-545.1996,25.5234},
{"EASTER BAY CHEMICALS LOADING BAY", -1044.8248,-639.4695,32.0078},
{"RED COUNTY LOADING BAY", -159.7691,-289.2556,3.9053},
{"RED COUNTY LOADING BAY 2", -23.4623,-274.6633,5.4297},
{"BLUEBERRY LOADING BAY", 52.3418,-286.3346,1.6938},
{"BLUEBERRY ACRES LOADING BAY", -32.9033,63.6575,3.1172},
{"BLUEBERRY LOADING BAY 2", 253.3181,-215.8886,1.4255},
{"EL CORONA LOADING BAY", 1934.3129,-2012.8688,13.5469},
{"COMMERCE LOADING BAY", 1636.6791,-1524.1759,13.6027},
{"IDLEWOOD LOADING BAY", 1866.1418,-1794.7328,13.5469},
{"COMMERCE LOADING BAY 2", 1783.5977,-1700.1433,13.4958},
{"PERSHING SQUARE LOADING BAY", 1361.7292,-1651.1287,13.3828},
{"VINEWOOD LOADING BAY", 867.1447,-1207.7621,16.9766},
{"MARKET STORAGE", 958.8982,-1449.7124,13.4784},
{"WILLOWFIELD LOADING BAY", 2208.5217,-2048.3191,13.5469},
{"WEAPON WARE HOUSE LOADING BAY", 2167.0076,-2273.4688,13.3733},
{"OCEAN DOCKS LOADING BAY", 2430.9922,-2509.6985,13.6564}
};


enum BOOMBOX_INFO
{
	boomboxUrlName[128],
	boomboxURL[128]
}

new BoomBoxInfo[][BOOMBOX_INFO] = {
{"RADIOUP.COM - The HitList - #1 FOR ALL HIT MUSIC", "http://scfire-ntc-aa01.stream.aol.com:80/stream/1030/"},
{"PULS FM - Pure Dance Radio!", "http://87.230.82.41:80/"},
{"TrueHipHop.FM Int - Culture.FM", "http://truehiphop.dyndns.org:9020/"},
{"SOFA FM - Progressive House / Trance", "http://somafm.com/tags.pls/"},
{"The Rock (Hard Rock!)", "http://relay.181.fm:8064/"},
{"FG DJ Radio", "http://fg.impek.com:80/"},
{"DEFJAY.DE - 100% R&B!", "http://212.45.104.39:8042/"},
{"CLASSICAL 102 - The First Class In Music", "http://yp.shoutcast.com/sbin/tunein-station.pls?id=1676910/"},
{"ClubTime.FM - 24h Deep - Tech & Minimal House and Techno", "http://yp.shoutcast.com/sbin/tunein-station.pls?id=564830/"},
{"CoreTime.FM - 24h Deep - House and Techno", "http://yp.shoutcast.com/sbin/tunein-station.pls?id=9470737/"},
{"HardBase.FM - 24h Hardstyle, Jumpstyle, Hardcore & More", "http://yp.shoutcast.com/sbin/tunein-station.pls?id=537179/"},
{"Westcoast RAP - YAKATA RABOTA WEST COAST RADIO - 2 GANSTA 4 REGULAR RADIO", "http://yp.shoutcast.com/sbin/tunein-station.pls?id=1462312/"},
{"True R&B Radio", "http://yp.shoutcast.com/sbin/tunein-station.pls?id=366480/"},
{"BreakZ.us | Radio", "http://yp.shoutcast.com/sbin/tunein-station.pls?id=127014/"},
{"The OFFICE FM", "http://yp.shoutcast.com/sbin/tunein-station.pls?id=26002/"},
{"BlackBeats FM", "http://yp.shoutcast.com/sbin/tunein-station.pls?id=111772/"},
{"BigUpRadio Roots Reggae", "http://yp.shoutcast.com/sbin/tunein-station.pls?id=279923/"},
{"ChartHitz FM - Mega Hot Music", "http://yp.shoutcast.com/sbin/tunein-station.pls?id=43280/"},
{"Radio Onda 1 - Hitradio Italia Italy", "http://yp.shoutcast.com/sbin/tunein-station.pls?id=9484568/"},
{"Radio Sunshine - Italy", "http://yp.shoutcast.com/sbin/tunein-station.pls?id=7905/"},
{"RADIO SPLASH - SICILY - ITALY", "http://yp.shoutcast.com/sbin/tunein-station.pls?id=1689207/"}
};
//========================BoomBox URL's========================//

//========================Furnitures System========================//
enum FURNITURE_DETAILS
{
    furnitureModel,
    furnitureName[128],
    furniturePrice,
}

new ChairsInfo[][FURNITURE_DETAILS] = {
{1369, "Wheelchair",120},
{1663, "Swivel chair 1",120},
{1671, "Swivel chair 2",120},
{1714, "Swivel chair 3",120},
{1715, "Swivel chair 4",120},
{1704, "Living room chair 1",120},
{1705, "Living room chair 2",120},
{1708, "Living room chair 3",120},
{1711, "Living room chair 4",120},
{1720, "Rest chair",120},
{1721, "Rest chair 2",120},
{1735, "Rest chair 3",120},
{1739, "Dinning chair",120},
{1811, "Dinning chair 2",120},
{2079, "Dinning chair 3",120},
{2120, "Dinning chair 4",120},
{2121, "Dinning chair 5",120},
{2123, "Dinning chair 6",120},
{2124, "Dinning chair 6",120},
{2125, "Dinning chair 7",120},
{2310, "Dinning chair 8",120},
{2636, "Dinning chair 9",120},
{1806, "Office chair",120},
{2309, "Office chair 2",120},
{1810, "Fold chair",120},
{1810, "Rocking chair",120}
};
new TablesInfo[][FURNITURE_DETAILS] = {
{1824, "Craps table",250},
{1896, "Casino table 2",250},
{2964, "Pool table",250},
{2964, "Poker table",250},
{1826, "Living room rable",250},
{1827, "Living room rable 2",250},
{2311, "Living room rable 3",250},
{2313, "Living room rable 4",250},
{2314, "Living room rable 5",250},
{2315, "Living room rable 6",250},
{2319, "Living room rable 7",250},
{2321, "Living room rable 8",250},
{2024, "Living room rable 9",250},
{2346, "Hifi table",250},
{2370, "Hifi table 2",250},
{2725, "Strip table",250},
{14869, "Bobbie table",250}
};
new DinnerTablesInfo[][FURNITURE_DETAILS] = {
{1433, "Dinning table",250},
{1516, "Dinning table 2",250},
{1737, "Dinning table 3",250},
{1770, "Dinning table 4",250},
{2029, "Swank dinning",250},
{2030, "Roundtable",250},
{2086, "Roundtable 2",250},
{2109, "Roundtable 3",250},
{2111, "Roundtable 4",250},
{2031, "Oval table",250},
{2032, "Oval table 2",250},
{2080, "Oval table 3",250},
{2085, "Oval table 4",250},
{2118, "Oval table 5",250},
{2112, "Square table",250},
{2110, "Rectangular table",250},
{2115, "Rectangular table 2",250},
{2116, "Rectangular table 3",250},
{2117, "Rectangular table 4",250},
{2119, "Rectangular table 5",250},
{2357, "Rectangular table 6",250}
};
new BedsInfo[][FURNITURE_DETAILS] = {
{1700, "Room bed",450},
{1701, "Room bed 2",450},
{1745, "Room bed 3",450},
{1799, "Room bed 4",450},
{1802, "Room bed 5",450},
{1771, "Bunk bed",450},
{1803, "Bunk bed 2",450},
{2300, "Bunk bed 3",450},
{1793, "Low bed",450},
{1794, "Low bed 2",450},
{1796, "Low bed 3",450},
{1800, "Low bed 4",450},
{1812, "Low bed 5",450},
{2302, "Low bed 6",450},
{1795, "Swank bed",450},
{1797, "Swank bed 2",450},
{1798, "Swank bed 3",450},
{1801, "Swank bed 4",450},
{2090, "Swank bed 5",450},
{2298, "Swank bed 6",450},
{2299, "Swank bed 7",450},
{2301, "Swank bed 8",450}
};
new DressersInfo[][FURNITURE_DETAILS] = {
{2562, "Dresser 1",100},
{2568, "Dresser 2",100},
{2569, "Dresser 3",100},
{2570, "Dresser 4",100},
{2573, "Dresser 5",100},
{2574, "Dresser 6",100},
{2576, "Dresser 7",100}
};
new CabinetsInfo[][FURNITURE_DETAILS] = {
{911, "Bust cabinet",350},
{912, "Bust cabinet 2",350},
{913, "Bust cabinet 3",350},
{1730, "Swank cabinet",350},
{2078, "Swank cabinet 2",350},
{2089, "Swank cabinet 3",350},
{2094, "Swank cabinet 4",350},
{1740, "Small cabinet",350},
{2088, "Small cabinet 2",350},
{2095, "Small cabinet 3",350},
{2306, "Small cabinet 4",350},
{2328, "Small cabinet 5",350},
{2329, "Small cabinet 6",350},
{2021, "Small cabinet 7",350},
{1741, "Medium cabinet",350},
{1743, "Medium cabinet 2",350},
{2084, "Medium cabinet 3",350},
{2087, "Medium cabinet 4",350},
{2307, "Medium cabinet 5",350},
{2020, "Medium cabinet 6",350},
{2197, "Locker",350},
{2204, "Office cabinet",350}
};
new SofasInfo[][FURNITURE_DETAILS] = {
{1702, "Living room couch",650},
{1703, "Living room couch 2",650},
{1706, "Living room couch 3",650},
{1707, "Living room couch 4",650},
{1712, "Living room couch 5",650},
{1713, "Living room couch 6",650},
{1756, "Living room couch 7",650},
{1757, "Living room couch 8",650},
{1709, "[Very Long] couch",650},
{1710, "[Medium] couch",650},
{1760, "[Medium] couch 2",650},
{1766, "[Medium] couch 3",650},
{1768, "[Medium] couch 4",650},
{1753, "Swank couch",650},
{1761, "Swank couch 2",650},
{1763, "Low couch",650},
{1764, "Low couch 2",650},
{1716, "Stool 1",650},
{1805, "Stool 2",650},
{2350, "Bar stool",650},
{2723, "Strip stool",650}
};
new GrugsInfo[][FURNITURE_DETAILS] = {
{2815, "Living Grug",500},
{2833, "Living Grug 2",500},
{2834, "Living Grug 3",500},
{2835, "Living Grug 4",500},
{2836, "Living Grug 5",500}
};
new PicturesInfo[][FURNITURE_DETAILS] = {
{2254, "Picture 1",25},
{2255, "Picture 2",25},
{2556, "Picture 3",25},
{2557, "Picture 4",25},
{2558, "Picture 5",25},
{2559, "Picture 6",25},
{2260, "Picture 7",25},
{2261, "Picture 8",25},
{2262, "Picture 9",25},
{2263, "Picture 10",25},
{2264, "Picture 11",25},
{2265, "Picture 12",25},
{2266, "Picture 13",25},
{2267, "Picture 14",25},
{2268, "Picture 15",25},
{2269, "Picture 16",25},
{2270, "Picture 17",25},
{2270, "Picture 18",25},
{2272, "Picture 19",25},
{2273, "Picture 20",25},
{2274, "Picture 21",25},
{2275, "Picture 22",25},
{2276, "Picture 23",25},
{2277, "Picture 24",25},
{2278, "Picture 25",25},
{2279, "Picture 26",25},
{2280, "Picture 27",25},
{2281, "Picture 28",25},
{2282, "Picture 29",25},
{2283, "Picture 30",25},
{2284, "Picture 31",25},
{2285, "Picture 32",25},
{2286, "Picture 33",25},
{2287, "Picture 34",25},
{2288, "Picture 35",25},
{2289, "Picture 36",25}
};
new PlantsInfo[][FURNITURE_DETAILS] = {
{948, "Plant pot 1",10},
{949, "Plant pot 2",10},
{950, "Plant pot 3",10},
{2194, "Plant pot 4",10},
{2195, "Plant pot 5",10},
{2203, "Plant pot 6",10},
{2240, "Plant pot 7",10},
{2241, "Plant pot 8",10},
{2242, "Plant pot 9",10},
{2243, "Plant pot 10",10},
{2244, "Plant pot 11",10},
{2245, "Plant pot 12",10},
{2246, "Plant pot 13",10},
{2247, "Plant pot 14",10},
{2248, "Plant pot 15",10},
{2249, "Plant pot 16",10},
{2250, "Plant pot 17",10},
{2251, "Plant pot 18",10},
{2252, "Plant pot 19",10},
{2253, "Plant pot 20",10},
{3811, "Plant pot 21",10},
{15038, "Plant pot 22",10},
{14804, "Plant pot 23",10}
};
new LampsInfo[][FURNITURE_DETAILS] = {
{2196, "Office lamp",25},
{2238, "Lava lamp",25},
{2726, "Strip lamp",25},
{3534, "Pink lamp",25},
{2023, "Stand lamp",25},
{2026, "Ceiling lamp",25},
{2105, "Table light",25},
{2106, "Table light 2",25},
{2108, "Table light 3",25}
};
new RandomDecorations[][FURNITURE_DETAILS] = {
{2469, "Plane model 1",5},
{2470, "Plane model 2",5},
{2472, "Plane model 3",5},
{2473, "Plane model 4",5},
{2510, "[BIG] Plane model",5}
};
new RandomMess[][FURNITURE_DETAILS] = {
{2670, "Coffee and cigars",1},
{2671, "Chopsticks and tissues",1},
{2672, "Burgershot mess",1},
{2673, "Random mess 1",1},
{2674, "Cigars and papers",1},
{2675, "Food mess",1},
{2676, "Food mess 2",1},
{2677, "Food mess 3",1},
{2342, "Coffee and food",1}
};
new TelevisionsInfo[][FURNITURE_DETAILS] = {
{1429, "Normal T.V",75},
{1518, "Normal T.V 2",75},
{1747, "Normal T.V 3",75},
{1748, "Normal T.V 4",75},
{1749, "Normal T.V 5",75},
{1750, "Normal T.V 5",75},
{1751, "Normal T.V 6",75},
{2312, "Normal T.V 7",75},
{1752, "Swank T.V",75},
{1781, "Swank T.V 2",75},
{1786, "Swank T.V 3",75},
{1791, "Swank T.V 4",75},
{1792, "Swank T.V 5",75},
{2091, "T.V inside cabinet",75},
{2093, "T.V inside cabinet",75},
{2296, "T.V unit",75},
{2297, "T.V unit 2",75},
{14604, "T.V stand",75}
};

new KitchenInfo[][FURNITURE_DETAILS] = {
{2127, "Red refrigerator",350},
{2131, "White refrigerator",350},
{2147, "Normal gray refrigerator",350},
{2133, "White Kitchen Cabinet 1", 125},
{2134, "White Kitchen Cabinet 2", 125},
{2141, "White Kitchen Cabinet 3", 125},
{2338, "Large White Kitchen Cabinet", 125},
{2341, "Corner White Kitchen Cabinet", 125},
{2334, "Green Kitchen Cabinet 1", 125},
{2335, "Green Kitchen Cabinet 2", 125},
{2142, "Green Kitchen Cabinet 3", 125},
{2156, "Green Kitchen Cabinet 4", 125},
{2157, "Green Kitchen Cabinet 5", 125},
{2159, "Green Kitchen Cabinet 6", 125},
{2143, "Kitchen Cabinet + Washer", 125},
{2160, "Kitchen Cabinet + Sink", 125},
{2158, "Large Green Kitchen Cabinet", 125},
{2128, "Large Red Kitchen Cabinet", 125},
{2129, "Red Kitchen Cabinet", 125},
{2013, "Kitchen sink",125},
{2130, "Kitchen sink 2",125},
{2132, "Kitchen sink 3",125},
{2136, "Kitchen sink 4",125},
{2336, "Kitchen sink 5",125},
{2150, "Kitchen sink 6",125},
{2149, "Microwave 1",40},
{2421, "Microwave 2",40},
{2135, "Cooker",65},
{2294, "Cooker 2",65},
{2339, "Cooker 3",65},
{2417, "Cooker 4",65},
{2144, "Cooker 5",65},
{2017, "Cooker 6",65},
{2337, "Washer",65},
{2340, "Washer 2",65},
{2018, "Washer 3",65}
};

new BathroomInfo[][FURNITURE_DETAILS] = {
{2515, "Bathroom sink",50},
{2518, "Bathroom sink 2",50},
{2523, "Bathroom sink 3",50},
{2524, "Bathroom sink 4",50},
{2739, "Bathroom sink 5",50},
{2514, "Toilet 1",300},
{2521, "Toilet 2",300},
{2525, "Toilet 3",300},
{2528, "Toilet 4",300},
{2738, "Toilet 5",300},
{2516, "Bath",300},
{2519, "Bath 2",300},
{2522, "Bath 3",300},
{2526, "Bath 4",300},
{2517, "Large shower",500}
};

new DoorFurniture[][FURNITURE_DETAILS] = {
{1493, "Door 1", 50},
{1494, "Door 2", 50},
{1495, "Door 3", 50},
{1496, "Door 4", 50},
{1497, "Door 5", 50},
{1498, "Door 6", 50},
{1500, "Door 7", 50},
{1501, "Door 8", 50}
};

new WallsInfo[][FURNITURE_DETAILS] = {
{19353, "Wall 1",750},
{19354, "Wall 2",750},
{19355, "Wall 3",750},
{19356, "Wall 4",750},
{19357, "Wall 5",750},
{19358, "Wall 6",750},
{19359, "Wall 7",750},
{19360, "Wall 8",750},
{19361, "Wall 9",750},
{19362, "Wall 10",750},
{19363, "Wall 11",750},
{19364, "Wall 12",750},
{19365, "Wall 13",750},
{19366, "Wall 14",750},
{19367, "Wall 15",750},
{19368, "Wall 16",750},
{19369, "Wall 17",750},
{19370, "Wall 18",750},
{19371, "Wall 19",750},
{19372, "Wall 20",750},
{19373, "Wall 21",750},
{19383, "Wall 31",750},
{19384, "Wall 32",750},
{19385, "Wall 33",750},
{19386, "Wall 34",750},
{19387, "Wall 35",750},
{19388, "Wall 36",750},
{19389, "Wall 37",750},
{19390, "Wall 38",750},
{19391, "Wall 39",750},
{19392, "Wall 40",750},
{19393, "Wall 41",750},
{19394, "Wall 42",750},
{19395, "Wall 43",750},
{19396, "Wall 44",750},
{19397, "Wall 45",750},
{19398, "Wall 46",750},
{19399, "Wall 47",750},
{19400, "Wall 48",750},
{19401, "Wall 49",750},
{19402, "Wall 50",750},
{19403, "Wall 51",750},
{19404, "Wall 52",750},
{19405, "Wall 53",750},
{19406, "Wall 54",750},
{19407, "Wall 55",750},
{19408, "Wall 56",750},
{19409, "Wall 57",750},
{19410, "Wall 58",750},
{19411, "Wall 59",750},
{19412, "Wall 60",750},
{19413, "Wall 61",750},
{19414, "Wall 62",750},
{19415, "Wall 63",750},
{19416, "Wall 64",750},
{19417, "Wall 65",750},
{19426, "Wall 66",750},
{19427, "Wall 67",750},
{19428, "Wall 68",750},
{19429, "Wall 69",750},
{19430, "Wall 70",750},
{19431, "Wall 71",750},
{19432, "Wall 72",750},
{19433, "Wall 73",750},
{19434, "Wall 74",750},
{19435, "Wall 75",750},
{19436, "Wall 76",750},
{19437, "Wall 77",750},
{19438, "Wall 78",750},
{19439, "Wall 79",750},
{19440, "Wall 80",750},
{19441, "Wall 81",750},
{19442, "Wall 82",750},
{19443, "Wall 83",750},
{19444, "Wall 84",750},
{19445, "Wall 85",750},
{19446, "Wall 86",750},
{19447, "Wall 87",750},
{19448, "Wall 88",750},
{19449, "Wall 89",750},
{19450, "Wall 90",750},
{19451, "Wall 91",750},
{19452, "Wall 92",750},
{19453, "Wall 93",750}
};
//========================Furnitures System========================//

enum HandBrakeEnum
{
	hOn,
	Float:hPosX,
	Float:hPosY,
	Float:hPosZ,
	Float:hAngle
}

new handbrake[MAX_VEHICLES][HandBrakeEnum];

//========================Toy System========================//
#define MAX_PLAYER_TOYS 5
enum ToysEnum
{
	ptID,
	ptPID,
	ptName[128],
	ptModelID,
	ptBoneID,
	Float:ptOffsetX,
	Float:ptOffsetY,
	Float:ptOffsetZ,
	Float:ptRotX,
	Float:ptRotY,
	Float:ptRotZ,
	Float:ptScaleX,
	Float:ptScaleY,
	Float:ptScaleZ,
	ptToyOn
}
new PlayerToys[MAX_PLAYERS][MAX_PLAYER_TOYS][ToysEnum];

enum PLAYER_TOYS_INFO
{
    toyModel,
    toyName[64],
	toyPrice,
	toyBone,
	Float:toyOffestX,
	Float:toyOffestY,
	Float:toyOffestZ,
	Float:toyRotX,
	Float:toyRotY,
	Float:toyRotZ,
	Float:toyScaleX,
	Float:toyScaleY,
	Float:toyScaleZ,
}
new HatsInfo[][PLAYER_TOYS_INFO] = {
{18926, "Army Hat", 15, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18927, "Azure Hat", 15, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18928, "Funky Hat", 15, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18929, "Dark Gray Hat", 15, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18930, "Fire Hat", 15, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18931, "Dark Blue Hat", 15, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18932, "Orange Hat", 15, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18933, "Light Gray Hat", 15, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18934, "Pink Hat", 15, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18935, "Yellow Hat", 15, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18944, "Fire Hat Boater", 15, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18945, "Gray Hat Boater", 15, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18946, "Gray Hat Boater 2", 15, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18947, "Black Hat Bowler", 15, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18948, "Azure Hat Bowler", 15, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18949, "Green Hat Bowler", 15, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18950, "Red Hat Bowler", 15, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18951, "Light Green Hat Bowler", 15, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{19488, "White Hat Bowler", 15, 2, 0.13, 0.0, -0.0, -89.4, 103.69, -4.19, 1.0, 1.0, 1.0},
{18967, "Simple Black Hat", 10, 2, 0.15, 0.01, -0.01, 0.0, 97.09, 87.59, 1.0, 1.0, 1.0},
{18968, "Simple Gray Hat", 10, 2, 0.15, 0.01, -0.01, 0.0, 97.09, 87.59, 1.0, 1.0, 1.0},
{18969, "Simple Orange Hat", 10, 2, 0.15, 0.01, -0.01, 0.0, 97.09, 87.59, 1.0, 1.0, 1.0},
{18970, "Tiger Hat", 20, 2, 0.109999, 0.045999, -0.007, 0.0, 96.29, 89.5, 1.0, 1.0, 1.0},
{18971, "Black & White Cool Hat", 20, 2, 0.109999, 0.045999, -0.007, 0.0, 96.29, 89.5, 1.0, 1.0, 1.0},
{18972, "Black & Orange Cool Hat", 20, 2, 0.109999, 0.045999, -0.007, 0.0, 96.29, 89.5, 1.0, 1.0, 1.0},
{18973, "Black & Green Cool Hat", 20, 2, 0.109999, 0.045999, -0.007, 0.0, 96.29, 89.5, 1.0, 1.0, 1.0},
{19066, "Santa Hat", 35, 2, 0.126000, 0.008000, 0.0, 0.0, 87.0, 94.190002, 1.0, 1.0, 1.0},
{19067, "Red Hoody Hat", 20, 2, 0.133999, -0.006000, 0.0, -22.199998, 92.500030, 114.199836, 1.0, 1.0, 1.0},
{19068, "Tiger Hoody Hat", 20, 2, 0.133999, -0.006000, 0.0, -22.199998, 92.500030, 114.199836, 1.0, 1.0, 1.0},
{19069, "Black Hoody Hat", 20, 2, 0.133999, -0.006000, 0.0, -22.199998, 92.500030, 114.199836, 1.0, 1.0, 1.0},
{19093, "White Dude Hat", 20, 2, 0.107999, 0.0, -0.008999, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{19095, "Brown Cowboy Hat", 20, 2, 0.18, 0.006999, -0.009999, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{19096, "Black Cowboy Hat", 20, 2, 0.18, 0.006999, -0.009999, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{19097, "Black Cowboy Hat 2", 20, 2, 0.18, 0.006999, -0.009999, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{19098, "Brown Cowboy Hat 2", 20, 2, 0.18, 0.006999, -0.009999, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{19352, "Black Top Hat", 10, 2, 0.143999, 0.015000, 0.0, 0.0, 90.800003, 0.0, 1.0, 1.0, 1.0},
{19487, "White Top Hat", 10, 2, 0.143999, 0.015000, 0.0, 0.0, 90.800003, 0.0, 1.0, 1.0, 1.0},
{18964, "Black Skully Cap",  10, 2, 0.136999, -0.003000, -0.004000, 35.900001, 88.200019, 44.699966, 1.0, 1.0, 1.0},
{18965, "Brown Skully Cap",  10, 2, 0.136999, -0.003000, -0.004000, 35.900001, 88.200019, 44.699966, 1.0, 1.0, 1.0},
{18966, "Funky Skully Cap",  10, 2, 0.136999, -0.003000, -0.004000, 35.900001, 88.200019, 44.699966, 1.0, 1.0, 1.0},
{18921, "Blue Beret", 10, 2, 0.179000, -0.000999, -0.012000, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18922, "Red Beret", 10, 2, 0.179000, -0.000999, -0.012000, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18923, "Dark Blue Beret", 10, 2, 0.179000, -0.000999, -0.012000, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18924, "Army Beret", 10, 2, 0.179000, -0.000999, -0.012000, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18925, "Red Army Beret", 10, 2, 0.179000, -0.000999, -0.012000, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18939, "Dark Blue CapBack", 10, 2, 0.171999, 0.008999, -0.009000, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18940, "Azure CapBack", 10, 2, 0.171999, 0.008999, -0.009000, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18941, "Black CapBack", 10, 2, 0.171999, 0.008999, -0.009000, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18942, "Gray CapBack", 10, 2, 0.171999, 0.008999, -0.009000, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18943, "Green CapBack", 10, 2, 0.171999, 0.008999, -0.009000, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0}
};
new GlassesInfo[][PLAYER_TOYS_INFO] = {
{19006, "Red Glasses", 5, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19007, "Green Glasses", 5, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19008, "Yellow Glasses", 5, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19009, "Azure Glasses", 5, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19010, "Pink Glasses", 5, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19011, "Funky Glasses", 5, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19012, "Gray Glasses", 5, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19013, "Funky Glasses 2", 5, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19014, "Black & White Glasses", 5, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19015, "White Glasses", 5, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19016, "X-Ray Glasses", 5, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19017, "Covered Yellow Glasses", 5, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19018, "Covered Orange Glasses", 5, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19019, "Covered Red Glasses", 5, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19020, "Covered Blue Glasses", 5, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19021, "Covered Green Glasses", 5, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19022, "Cool Black Glasses", 5, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19023, "Cool Azure Glasses", 5, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19024, "Cool Blue Glasses", 5, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19025, "Cool Pink Glasses", 5, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19026, "Cool Red Glasses", 5, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19027, "Cool Orange Glasses", 5, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19028, "Cool Yellow Glasses", 5, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19029, "Cool Yellow Glasses", 5, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19030, "Pink Nerd Glasses", 5, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19031, "Green Nerd Glasses", 5, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19032, "Red Nerd Glasses", 5, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19033, "Black Nerd Glasses", 5, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19034, "Black & White Nerd Glasses", 5, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19035, "Ocean Nerd Glasses", 5, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0}
};
new BandanasInfo[][PLAYER_TOYS_INFO] = {
{18891, "Purple Bandana", 2, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18892, "Red Bandana", 2, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18893, "Red&White Bandana", 2, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18894, "Orange Bandana", 2, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18895, "Skull Bandana", 2, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18896, "Black Bandana", 2, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18897, "Blue Bandana", 2, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18898, "Green Bandana", 2, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18899, "Pink Bandana", 2, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18900, "Funky Bandana", 2, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18901, "Tiger Bandana", 2, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18902, "Yellow Bandana", 2, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18903, "Azure Bandana", 2, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18904, "Dark Blue Bandana", 2, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18905, "Olive Bandana", 2, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18906, "Orange&Yellow Bandana", 2, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18907, "Funky Bandana 2", 2, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18907, "Blue Bandana 2", 2, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18907, "Azure Bandana 2", 2, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18907, "Fire Bandana", 2, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18911, "Skull Bandana Mask", 2, 18, 0.03, 0.079999, 0.0, -20.7001, 87.2, 22.4, 1.0, 1.0, 1.0},
{18912, "Black Bandana Mask", 2, 18, 0.03, 0.079999, 0.0, -20.7001, 87.2, 22.4, 1.0, 1.0, 1.0},
{18913, "Green Bandana Mask", 2, 18, 0.03, 0.079999, 0.0, -20.7001, 87.2, 22.4, 1.0, 1.0, 1.0},
{18914, "Army Bandana Mask", 2, 18, 0.03, 0.079999, 0.0, -20.7001, 87.2, 22.4, 1.0, 1.0, 1.0},
{18915, "Funky Bandana Mask", 2, 18, 0.03, 0.079999, 0.0, -20.7001, 87.2, 22.4, 1.0, 1.0, 1.0},
{18916, "Light Bandana Mask", 2, 18, 0.03, 0.079999, 0.0, -20.7001, 87.2, 22.4, 1.0, 1.0, 1.0},
{18917, "Dark Blue Bandana Mask", 2, 18, 0.03, 0.079999, 0.0, -20.7001, 87.2, 22.4, 1.0, 1.0, 1.0},
{18918, "Gray Bandana Mask", 2, 18, 0.03, 0.079999, 0.0, -20.7001, 87.2, 22.4, 1.0, 1.0, 1.0},
{18919, "White Bandana Mask", 2, 18, 0.03, 0.079999, 0.0, -20.7001, 87.2, 22.4, 1.0, 1.0, 1.0},
{18920, "Colorful Bandana Mask", 2, 18, 0.03, 0.079999, 0.0, -20.7001, 87.2, 22.4, 1.0, 1.0, 1.0}
};
new HeadphonesInfo[][PLAYER_TOYS_INFO] = {
{19421, "White Headphones", 50, 2, 0.036999, -0.028, -0.006999, 86.6, 176.2, 88.4, 1.157, 1.0, 1.0},
{19422, "Black Headphones", 50, 2, 0.036999, -0.028, -0.006999, 86.6, 176.2, 88.4, 1.157, 1.0, 1.0},
{19423, "Gray Headphones", 50, 2, 0.036999, -0.028, -0.006999, 86.6, 176.2, 88.4, 1.157, 1.0, 1.0},
{19424, "Blue Headphones", 50, 2, 0.036999, -0.028, -0.006999, 86.6, 176.2, 88.4, 1.157, 1.0, 1.0}
};
new SportsInfo[][PLAYER_TOYS_INFO] = {
{19036, "White Hockey Mask", 30, 2, 0.096999, 0.043999, -0.006000, 87.499961, 94.899955, 0.0, 1.0, 1.0, 1.0},
{19037, "Red Hockey Mask", 30, 2, 0.096999, 0.043999, -0.006000, 87.499961, 94.899955, 0.0, 1.0, 1.0, 1.0},
{19038, "Green Hockey Mask", 30, 2, 0.096999, 0.043999, -0.006000, 87.499961, 94.899955, 0.0, 1.0, 1.0, 1.0},
{19472, "Gas Mask", 150, 2, -0.005000, 0.142999, -0.008000, 87.499961, 94.899955, 0.0, 1.0, 1.116000, 1.0},
{2919, "Sports Bag", 17, 5, 0.273000, 0.034999, 0.046999, -11.199997, -103.500007, 4.300001, 0.439000, 0.161000, 0.351000},
{3026, "Jansport Backpack", 140, 1, -0.143000, -0.049999, 0.009999, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18645, "Red&White Motorcycle Helmet", 250, 2, 0.050999, 0.023000, -0.012999, 82.800025, 91.199928, 4.500027, 1.0, 1.0, 1.0},
{18976, "Blue Motorcycle Helmet", 250, 2, 0.087998, 0.039000, -0.006998, 82.800025, 91.199928, 4.500027, 0.970000, 1.179000, 1.0},
{18977, "Red Motorcycle Helmet", 250, 2, 0.050999, 0.023000, -0.012999, 82.800025, 91.199928, 4.500027, 1.0, 1.0, 1.0},
{18978, "White Motorcycle Helmet", 250, 2, 0.050999, 0.023000, -0.012999, 82.800025, 91.199928, 4.500027, 1.0, 1.0, 1.0},
{18979, "Purple Motorcycle Helmet", 250, 2, 0.050999, 0.023000, -0.012999, 82.800025, 91.199928, 4.500027, 1.0, 1.0, 1.0}
};
new GuitarsInfo[][PLAYER_TOYS_INFO] = {
{19317, "Bass Guitar", 14000},
{19318, "Flying Guitar", 15000},
{19319, "Warlock Guitar", 16000},
{19319, "BoomBox (One Time Use)", 5000}
};

new VehicleNames[212][] = {
   "Landstalker",  "Bravura",  "Buffalo", "Linerunner", "Perennial", "Sentinel",
   "Dumper",  "Firetruck" ,  "Trashmaster" ,  "Stretch",  "Manana",  "Infernus",
   "Voodoo", "Pony",  "Mule", "Cheetah", "Ambulance",  "Leviathan",  "Moonbeam",
   "Esperanto", "Taxi",  "Washington",  "Bobcat",  "Mr Whoopee", "BF Injection",
   "Hunter", "Premier",  "Enforcer",  "Securicar", "Banshee", "Predator", "Bus",
   "Rhino",  "Barracks",  "Hotknife",  "Trailer",  "Previon", "Coach", "Cabbie",
   "Stallion", "Rumpo", "RC Bandit",  "Romero", "Packer", "Monster",  "Admiral",
   "Squalo", "Seasparrow", "Pizzaboy", "Tram", "Trailer",  "Turismo", "Speeder",
   "Reefer", "Tropic", "Flatbed","Yankee", "Caddy", "Solair","Berkley's RC Van",
   "Skimmer", "PCJ-600", "Faggio", "Freeway", "RC Baron","RC Raider","Glendale",
   "Oceanic", "Sanchez", "Sparrow",  "Patriot", "Quad",  "Coastguard", "Dinghy",
   "Hermes", "Sabre", "Rustler", "ZR-350", "Walton",  "Regina",  "Comet", "BMX",
   "Burrito", "Camper", "Marquis", "Baggage", "Dozer","Maverick","News Chopper",
   "Rancher", "FBI Rancher", "Virgo", "Greenwood","Jetmax","Hotring","Sandking",
   "Blista Compact", "Police Maverick", "Boxville", "Benson","Mesa","RC Goblin",
   "Hotring Racer", "Hotring Racer", "Bloodring Banger", "Rancher",  "Super GT",
   "Elegant", "Journey", "Bike", "Mountain Bike", "Beagle", "Cropdust", "Stunt",
   "Tanker", "RoadTrain", "Nebula", "Majestic", "Buccaneer", "Shamal",  "Hydra",
   "FCR-900","NRG-500","HPV1000","Cement Truck","Tow Truck","Fortune","Cadrona",
   "FBI Truck", "Willard", "Forklift","Tractor","Combine","Feltzer","Remington",
   "Slamvan", "Blade", "Freight", "Streak","Vortex","Vincent","Bullet","Clover",
   "Sadler",  "Firetruck", "Hustler", "Intruder", "Primo", "Cargobob",  "Tampa",
   "Sunrise", "Merit",  "Utility Truck",  "Nevada", "Yosemite", "Windsor",  "Monster",
   "Monster","Uranus","Jester","Sultan","Stratum","Elegy","Raindance","RCTiger",
   "Flash","Tahoma","Savanna", "Bandito", "Freight", "Trailer", "Kart", "Mower",
   "Dune", "Sweeper", "Broadway", "Tornado", "AT-400",  "DFT-30", "Huntley",
   "Stafford", "BF-400", "Newsvan","Tug","Trailer","Emperor","Wayfarer","Euros",
   "Hotdog", "Club", "Trailer", "Trailer","Andromada","Dodo","RC Cam", "Launch",
   "Police Car (LSPD)", "Police Car (SFPD)","Police Car (LVPD)","Police Ranger",
   "Picador",   "S.W.A.T. Van",  "Alpha",   "Phoenix",   "Glendale",   "Sadler",
   "Luggage Trailer","Luggage Trailer","Stair Trailer", "Boxville", "Farm Plow",
   "Utility Trailer"
};

new OrTeleports[][] =
{
	{"24/7 1"},
	{"24/7 2"},
	{"24/7 3"},
	{"24/7 4"},
	{"24/7 5"},
	{"24/7 6"},
	{"Airport Ticket Desk"},
	{"Airport Baggage Reclaim"},
	{"Shamal"},
	{"Andromada"},
	{"Ammunation 1"},
	{"Ammunation 2"},
	{"Ammunation 3"},
	{"Ammunation 4"},
	{"Ammunation 5"},
	{"Ammunation Booths"},
	{"Ammunation Range"},
	{"Blastin Fools Hallway"},
	{"Budget Inn Motel Room"},
	{"Jefferson Motel"},
	{"Off Track Betting Shop"},
	{"Sex Shop"},
	{"Meat Factory"},
	{"Zero's RC Shop"},
	{"Dillmore Gas Station"},
	{"Caligula's Basement"},
	{"FDC Janitors Room"},
	{"Woozie's Office"},
	{"Binco"},
	{"Didier Sachs"},
	{"Prolaps"},
	{"Suburban"},
	{"Victim"},
	{"ZIP"},
	{"Alhambra"},
	{"Ten Bottles"},
 	{"Lil' Probe Inn"},
 	{"Jay's Dinner"},
 	{"Gant Bridge Dinner"},
	{"Secret Valley Dinner"},
	{"World of Coq"},
	{"Welcome Pump"},
	{"Burger Shot"},
	{"Cluckin' Bell"},
	{"Well Stacked Pizza"},
	{"Jimmy's Sticky Ring"},
	{"Denise Room"},
	{"Katie Room"},
	{"Helena Room"},
	{"Michelle Room"},
	{"Barbara Room"},
	{"Mille Room"},
	{"Sherman Dam"},
	{"Planning Dept."},
	{"Area 51"},
	{"LS Gym"},
	{"SF Gym"},
	{"LV Gym"},
	{"B Dup's House"},
	{"B Dup's Crack Pad"},
	{"CJ's House"},
	{"Madd Dogg's Mansion"},
	{"OG Loc's House"},
	{"Ryder's House"},
	{"Sweet's House"},
	{"Crack Factory"},
	{"Big Spread Ranch"},
	{"Fanny Batters"},
	{"Strip Club"},
	{"Strip Club Private Room"},
	{"Unnamed Brothel"},
	{"Tiger Skin Brothel"},
	{"Pleasure Domes"},
	{"Liberty City Outside"},
	{"Liverty City Inside"},
	{"Gang House"},
	{"Colonel Furhberger's House"},
	{"Crack Den"},
	{"Warehouse 1"},
	{"Warehouse 2"},
	{"Sweet's Garage"},
	{"Lil' Probe Inn Toilet"},
	{"Unused Safe House"},
	{"RC Battlefield"},
	{"Barber 1"},
	{"Barber 2"},
	{"Barber 3"},
	{"Tatoo parlour 1"},
	{"Tatoo parlour 2"},
	{"Tatoo parlour 3"},
	{"LS Police HQ"},
	{"SF Police HQ"},
	{"LV Police HQ"},
	{"Car School"},
	{"8-Track"},
	{"Bloodbowl"},
	{"Dirt Track"},
	{"Kickstart"},
	{"Vice Stadium"},
	{"SF Garage"},
	{"LS Garage"},
	{"SF Bomb Shop"},
	{"Blueberry Warehouse"},
	{"LV Warehouse 1"},
	{"LV Warehouse 2"},
	{"Catigula's Hidden Room"},
	{"Bank"},
	{"Bank - Behind Desk"},
	{"LS Atruim"},
	{"Bike School"}
};

new FishNamesAmount = 9;
new FishNames[9][20] = {
{"Shark"},
{"Catfish"},
{"Carpio"},
{"Tuna"},
{"Trout"},
{"Mullet"},
{"Striped Bass"},
{"Turtle"},
{"Salomon"}
};

enum p_Info
{
	pDatabaseID,
	pRegistered,
	pCash,
	pBank,
	pSkin,
	pSex,
	pAge,
	pOrigin[16],
	pLevel,
	pExp,
	pHours,
	pAdmin,
	pHelper,
	pInt,
	pWorld,
	pJailed,
	pJailTime,
	pBanned,
	pWarns,
	pDonateRank,
	pCarLic,
	pWepLic,
	pFlyLic,
	Float:pPosX,
	Float:pPosY,
	Float:pPosZ,
	Float:pPosA,
	pDied,
	pFightStyle,
	pPen,
	pNote1[256],
	pNote1s,
	pNote2[256],
	pNote2s,
	pNote3[256],
	pNote3s,
	pAttributes[256],
	pPayCheckMade,
	pPayCheckMoney,
	pUpgrade,
	pPayDayTime,
	Float:pSHealth,
	pCellPhone,
	pNumber,
	pSavings,
	pHouseKey,
	pMeleeWep,
	pPerm1,
	pPerm2,
	pAmmo1,
	pAmmo2,
	pRadio,
	pCrashed,
	pMask,
	pAccentOn,
	pAccent[128],
	pBMX,
	pCarKey,
	pVehicles,
	pVehSlot,
	pSpareKey,
	pLighter,
	pCigars,
	pBizKey,
	pWorkOn,
	pWalk,
	Float:pArmour,
	pHasArmour,
	pFaction,
	pRank,
	pBadgeNumber,
	pDriveWarns,
	pJailTime2,
	pArrested,
	pTalk,
	pSwat,
	pTickets[MAX_PLAYER_TICKETS],
	pJob,
	pJobRank,
	pCareer,
	pSideJob,
	pSpawnType,
	pPrisoned,
	pDrug[MAX_DRUGS],
	pDrugAmount[MAX_DRUGS],
	pSeeds,
	pSoda,
	pPowder,
	pAlcohol,
	pVehs[MAX_OWNED_VEHICLES],
	pContacts[MAX_CONTACTS],
	pChannels[MAX_RADIO_SLOTS],
	pAuthed[MAX_RADIO_SLOTS],
	pSlot,
	pIPaddress,
	pSerial,
	pTaxiLic,
	pWepMats,
	pComplex,
	pApartament,
	pApComplex,
	pRentApartament,
	pCard,
	pPinCard,
	pFName,
	pForumName[64],
	pNameChg,
	pPhoneChg,
	pSexChg,
	pCKChg,
	pBikeLic,
	pBigLic,
	pFishingRod,
	pHairCut,
	pWanted[256],
	pMaskID
}
new PlayerInfo[MAX_PLAYERS][p_Info];

enum PLANTS_INFO
{
	pID,
	pPlanter[MAX_PLAYER_NAME],
	pGrowTime,
	Float:pX,
	Float:pY,
	Float:pZ,
	pMade,
	pObject,
	Text3D:pLabel,
	pPlanted
}
new CropsInfo[MAX_PLANTS][PLANTS_INFO];

enum DNC_INFO
{
	dOn,
	Float:dPosX,
	Float:dPosY,
	Float:dPosZ,
	Text3D:dText,
}

new DNCInfo[MAX_DNC][DNC_INFO];

enum SPRAY_INFO
{
	sID,
	sOwner[MAX_PLAYER_NAME],
	Float:sX,
	Float:sY,
	Float:sZ,
	Float:sRX,
	Float:sRY,
	Float:sRZ,
	sFont[64],
	sObject,
	sBold,
	sColor[16],
	sText[64],
	sOn
}
new SprayInfo[MAX_OBJECTS][SPRAY_INFO];

enum EMERGANCY_INFO
{
	callType[64],
	callCaller,
	callSituation[128],
	callLocation[64],
	callTrace[64],
	callDate[64],
	callID,
	callTaken
}
new CallInfo[10][EMERGANCY_INFO];
new ToLastCallSlot = 0;

enum ARREST_INFO
{
	arrestSuspect,
	arrestOfficer,
	arrestDate[64],
	arrestLocation[64],
	arrestTime,
	arrestTaken
}
new ArrestInfo[30][ARREST_INFO];
new ToLastArrestSlot = 0;

enum POLICE_CAR_WEAPON
{
	wepID,
	wepAmmo
}

new PoliceTrunk[][POLICE_CAR_WEAPON] = {
{3, 1},
{29, 500},
{31, 500},
{24, 500},
{25, 250},
{43, 100},
{34, 50},
{41, 500}
};

enum E_CARJACK_DATA
{
    Float:E_LAST_X,
    Float:E_LAST_Y,
    Float:E_LAST_Z,
    E_LAST_VEH
}

new g_carjackData[ MAX_PLAYERS ] [ E_CARJACK_DATA ];

enum JOBS_INFO
{
	jobID,
	jobPickUp,
	Text3D:jobLabel,
	jobName[64],
	Float:jobX,
	Float:jobY,
	Float:jobZ,
	jobRanks,
	jobHighRank,
	jobRank1[64],
	jobRank2[64],
	jobRank3[64],
	jobRank4[64],
	jobRank5[64],
	jobRank6[64],
	jobRank7[64],
	jobRank8[64],
	jobRank9[64],
	jobRank10[64],
	jobSideJob,
	jobOn
}
new JobsInfo[MAX_JOBS][JOBS_INFO];

enum LABEL_INFO
{
	tID,
	Text3D:tLabel,
	tInfo[128],
	tPickUp,
	Float:tLabelX,
	Float:tLabelY,
	Float:tLabelZ,
	tColor,
	tVirtualWorld,
	tGameText,
	tLabelOn
}
new LabelsInfo[MAX_LABELS][LABEL_INFO];

enum DOOR_INFO
{
	dID,
	Text3D:dEnterLabel,
	Text3D:dExitLabel,
	dPickUp,
	dInfo[128],
	Float:dEnterX,
	Float:dEnterY,
	Float:dEnterZ,
	Float:dExitX,
	Float:dExitY,
	Float:dExitZ,
	dEnterInterior,
	dExitInterior,
	dVirtualWorld,
	dEnterMSG[128],
	dDoorOn
}
new DoorInfo[MAX_DOORS][DOOR_INFO];

enum HOUSE_INTERIORS
{
	atID,
	Float:aPosX,
	Float:aPosY,
	Float:aPosZ,
	aInterior,
	aMapName[128],
	aTeleOn
};
new HouseInteriors[MAX_INTERIORS][HOUSE_INTERIORS];

enum OBJECTS_INFO
{
	oID,
	oModel,
	oObject,
	oName[256],
	oInterior,
	oVirtualWorld,
	Float:oPosX,
	Float:oPosY,
	Float:oPosZ,
	Float:oPosRX,
	Float:oPosRY,
	Float:oPosRZ,
	oObjectOn
}
new ObjectsInfo[MAX_OBJECTS][OBJECTS_INFO];

enum INFO_STUFF
{
	cID,
	cPickUp,
	cCheckPoint,
	cVirtualWorld,
	cLabelText1[256],
	cLabelText2[256],
	cOtherInfo[256],
	Text3D:cLabel,
	Float:cPosX,
	Float:cPosY,
	Float:cPosZ,
	cInfoOn
}
new CPTInfo[MAX_INFOS][INFO_STUFF];

enum BANK_INFO
{
	bID,
	bInterior,
	bInfo[126],
	Float:bPosX,
	Float:bPosY,
	Float:bPosZ,
	bBankOn
}
new BankInfo[MAX_BANKS][BANK_INFO];

enum ATM_INFO
{
	atmID,
	atmInterior,
	atmInfo[126],
	atmPickUp,
	Text3D:atmLabel,
	Float:atmPosX,
	Float:atmPosY,
	Float:atmPosZ,
	atmAtmOn,
}
new ATMInfo[MAX_ATMS][ATM_INFO];

enum VEHICLE_INFO
{
	vID,
	vModel,
	vColor1,
	vColor2,
	vType,
	Float:vPosX,
	Float:vPosY,
	Float:vPosZ,
	Float:vPosA,
	vPlate[64],
	vInfo[265],
	vVehicle,
	vFaction,
	vCarOn,
	vSiren
}
new CityVehicles[MAX_VEHICLES][VEHICLE_INFO];

enum GAS_INFO
{
	gID,
	Text3D:gLabel,
	gPickUp,
	Float:gPosX,
	Float:gPosY,
	Float:gPosZ,
	gPrice,
	gInfo[265],
	gStationOn
}
new GasStation[MAX_GAS_STATIONS][GAS_INFO];

enum BIZ_INFO
{
	bizID,
	Float:bizPosX,
	Float:bizPosY,
	Float:bizPosZ,
	Float:bizExitX,
	Float:bizExitY,
	Float:bizExitZ,
	bizPickUp,
	bizName[128],
	bizInfo[128],
	bizEnterMSG[128],
	bizOwner[MAX_PLAYER_NAME],
	bizOwned,
	bizLocked,
	bizPrice,
	bizLevelbuy,
	bizInterior,
	bizWorld,
	bizCash,
	bizType,
	bizEntrance,
	bizRadio,
	bizRadioOn,
	bizRadioURL[256],
	bizOn
};
new BizInfo[MAX_BIZ][BIZ_INFO];

enum HOUSE_INFO
{
	hID,
	Text3D:hLabel,
	hCheckPoint,
	Float:hEntranceX,
	Float:hEntranceY,
	Float:hEntranceZ,
	Float:hExitX,
	Float:hExitY,
	Float:hExitZ,
	hInfo[128],
	hOwner[MAX_PLAYER_NAME],
	hOwned,
	hLocked,
	hPrice,
	hLevelbuy,
	hRentprice,
	hRentable,
	hInterior,
	hWorld,
	hCash,
	hFurnitures,
	hWeapon[10],
	hAmmo[10],
	hHouseOn,
	Float:hCheckPosX,
	Float:hCheckPosY,
	Float:hCheckPosZ,
	hRadio,
	hRadioOn,
	hRadioURL[256]
};
new HouseInfo[MAX_HOUSES][HOUSE_INFO];

enum FURNITURE_INFO
{
	fID,
	fModel,
	fObject,
	fName[128],
	fHouseID,
	fInterior,
	fVirtualWorld,
	fMarketPrice,
	Float:fPosX,
	Float:fPosY,
	Float:fPosZ,
	Float:fPosRX,
	Float:fPosRY,
	Float:fPosRZ,
	fLocked,
	fOpened,
	fOn
}
new FurnitureInfo[MAX_HOUSES][MAX_FURNITURE][FURNITURE_INFO];

enum FOODSTANDS_INFO
{
	fID,
	Text3D:fLabel,
	fPickUp,
	fObject,
	fInfo[128],
	Float:fPosX,
	Float:fPosY,
	Float:fPosZ,
	Float:fPosRX,
	Float:fPosRY,
	Float:fPosRZ,
	fStandOn
}
new FoodStand[MAX_FOOD_STANDS][FOODSTANDS_INFO];

enum GUN_DROPS_INFO
{
	gunID,
	gunAmmo,
	gunObject,
	Float:gunPosX,
	Float:gunPosY,
	Float:gunPosZ,
	gunDropped
}
new WeaponDropInfo[MAX_WEP_DROPS][GUN_DROPS_INFO];

new StoreSkins[276] = {
1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,
50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,72,73,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,
97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,
132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,
167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,
202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,
237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,256,257,258,259,260,261,262,263,268,269,270,271,
272,273,289,290,291,292,293,294,295,296,297,298,299
};

new LSPDSkins[12] = {
71,265,266,267,280,281,284,303,304,305,306,307
};

new LSFDSkins[7] = {
70,274,275,276,277,279,308
};

new NEWSSkins[5] = {
2,170,250,60,150
};

new NGuardSkins[8] = {
287,282,283,288,310,311,309,191
};


new GunObjects[47][0] = { // (c) gimini
	{0},// Emty
	{331},// Brass Knuckles
	{333},// Golf Club
	{334},// Nitestick
	{335},// Knife
	{336},// Baseball Bat
	{337},// Showel
	{338},// Pool Cue
	{339},// Katana
	{341},// Chainsaw
	{321},// Purple Dildo
	{322},// Small White Dildo
	{323},// Long White Dildo
	{324},// Vibrator
	{325},// Flowers
	{326},// Cane
	{342},// Grenade
	{343},// Tear Gas
	{344},// Molotov
	{0},
	{0},
	{0},
	{346},// Glock
	{347},// Silenced Colt
	{348},// Desert Eagle
	{349},// Shotgun
	{350},// Sawn Off
	{351},// Combat Shotgun
	{352},// Micro UZI
	{353},// MP5
	{355},// AK47
	{356},// M4
	{372},// Tec9
	{357},// Rifle
	{358},// Sniper Rifle
	{359},// Rocket Launcher
	{360},// HS Rocket Launcher
	{361},// Flamethrower
	{362},// Minigun
	{363},// Detonator
	{364},// Detonator Button
	{365},// Spraycan
	{366},// Fire Extinguisher
	{367},// Camera
	{368},// Nightvision
	{368},// Infrared Vision
	{371}// Parachute
};

enum FACTION_INFO
{
	fID,
	fPickUp,
	fName[50],
	Float:fX,
	Float:fY,
	Float:fZ,
	fSpawnInt,
	fRank1[35],
	fRank2[35],
	fRank3[35],
	fRank4[35],
	fRank5[35],
	fRank6[35],
	fRank7[35],
	fRank8[35],
	fRank9[35],
	fRank10[35],
	fRank11[35],
	fRank12[35],
	fRank13[35],
	fRank14[35],
	fRank15[35],
	fRank16[35],
	fRank17[35],
	fRank18[35],
	fRank19[35],
	fRank20[35],
	fJoinRank,
	fType,
	fRankAmount,
	fChatON,
	fColor,
	fLeaderRank,
	Float:fUniformX,
	Float:fUniformY,
	Float:fUniformZ,
	fShortName[21],
	fON
};
new Factions[MAX_FACTIONS][FACTION_INFO];

enum FACTION_DOORS
{
	dID,
	dPickUp,
	dInfo[128],
	Float:dEnterX,
	Float:dEnterY,
	Float:dEnterZ,
	Float:dExitX,
	Float:dExitY,
	Float:dExitZ,
	dEnterInterior,
	dExitInterior,
	dVirtualWorld,
	dFaction,
	dLocked,
	dWithVehicle,
	Float:dEnterAngle,
	Float:dExitAngle,
	dDoorOn
}
new FactionDoors[MAX_FACTION_DOORS][FACTION_DOORS];

enum MOVEABLE_DOORS
{
	doorID,
	doorModel,
	doorObject,
	doorName[256],
	doorInterior,
	doorVirtualWorld,
	doorFaction,
	doorOpened,
	Float:doorPosX,
	Float:doorPosY,
	Float:doorPosZ,
	Float:doorPosRX,
	Float:doorPosRY,
	Float:doorPosRZ,
	Float:doorOpenSpeed,
	Float:doorMoveX,
	Float:doorMoveY,
	Float:doorMoveZ,
	doorObjectOn
}
new Doors[MAX_OBJECTS][MOVEABLE_DOORS];

enum MOVEABLE_GATES
{
	gateID,
	gateOpening,
	gateModel,
	gateObject,
	gateName[256],
	gateInterior,
	gateVirtualWorld,
	gateFaction,
	gateOpened,
	Float:gatePosX,
	Float:gatePosY,
	Float:gatePosZ,
	Float:gatePosRX,
	Float:gatePosRY,
	Float:gatePosRZ,
	Float:gateOpenSpeed,
	Float:gateMoveX,
	Float:gateMoveY,
	Float:gateMoveZ,
	Float:gateMoveRX,
	Float:gateMoveRY,
	Float:gateMoveRZ,
	gateSound,
	gateSoundLength,
	gateObjectOn
}
new Gates[MAX_OBJECTS][MOVEABLE_GATES];

enum CCTV_INFO
{
	tvID,
	tvFaction,
	tvObject,
	tvName[256],
	tvInterior,
	tvVirtualWorld,
	Float:tvPosX,
	Float:tvPosY,
	Float:tvPosZ,
	Float:tvPosRX,
	Float:tvPosRY,
	Float:tvPosRZ,
	tvObjectOn
}
new CCTVInfo[MAX_OBJECTS][CCTV_INFO];

enum RADIOS_INFO
{
	radioID,
	radioProtected,
	radioOwner[128],
	radioPass[128],
	radioOn
}
new RadiosInfo[MAX_RADIO_CHANNELS][RADIOS_INFO];

enum DEALERSHIPS_INFO
{
	dealerID,
	Float:dealerPosX,
	Float:dealerPosY,
	Float:dealerPosZ,
	dealerInfo[128],
	dealerPickUp,
	dealerOn
}
new DealersInfo[MAX_DEALERSHIPS][DEALERSHIPS_INFO];


enum DEALERSHIP_VEHICLES
{
	dCarModel,
	dCarPrice,
	dStoc
}

new CarsPrices[][DEALERSHIP_VEHICLES] = {
{400, 65000, 15}, // Landstalker
{401, 15000, 15}, //Bravura
{402, 150000, 15}, //Buffalo
{404, 13000, 15}, //Perenniel
{405, 25000, 15}, //Sentinel
{409, 125000, 15}, //Stretch
{410, 12000, 15}, //Manana
{412, 18000, 15}, //Vodoo
{413, 20000, 15}, //Pony
{414, 38000, 15}, //Mule
{415, 600000, 15}, //Cheetah
{418, 30000, 15}, //Moonbeam
{419, 24000, 15}, //Esperanto
{420, 35000, 15}, //Taxi
{421, 35000, 15}, //Washington
{422, 19000, 15}, //Bobcat
{423, 47000, 15}, //Mr Whoopee
{424, 170000, 15}, //BF Injection
{426, 45000, 15}, // Premier
{434, 400000, 15}, //Hotknife
{436, 16000, 15}, //Previon
{438, 25000, 15}, //Cabbie
{439, 40000, 15}, //Stallion
{440, 34000, 15}, //Rumpo
{445, 35000, 15}, //Admiral
{456, 45000, 15}, //Yankee
{458, 25000, 15}, //Solair
{459, 20000, 15}, //Topfun Van
{466, 22000, 15}, //Glendale
{467, 22000, 15}, //Oceanic
{474, 60000, 15}, //Hermes
{475, 50000, 15}, //Sabre
{477, 220000, 15}, //ZR-350
{478, 18000, 15}, //Walton
{479, 23000, 15}, //Regina
{480, 170000, 15}, //Comet
{482, 35000, 15}, //Burrito
{489, 48000, 15}, //Rancher
{491, 37000, 15}, //Virgo
{492, 35000, 15}, //Greenwood
{496, 45000, 15}, //Blista Compact
{498, 36000, 15}, //Boxville
{499, 30000, 15}, //Benson
{500, 40000, 15}, //Mesa
{506, 550000, 15}, //Super Gt
{507, 55000, 15}, //Elegant
{508, 65000, 15}, //Journey
{516, 30000, 15}, //Nebula
{517, 27000, 15}, //Majestic
{518, 27000, 15}, //Buccaneer
{525, 18000, 15}, //Towtruck
{526, 26000, 15}, //Fortune
{527, 20000, 15}, //Cadrona
{529, 27000, 15}, //Willard
{531, 20000, 15}, //Tractor
{532, 35000, 15}, //Combine
{533, 75000, 15}, //Feltzer
{534, 35000, 15}, //Remington
{535, 35000, 15}, //Slamvan
{536, 32000, 15}, //Blade
{540, 34000, 15}, //Vincent
{541, 1000000, 15}, //Bullet
{542, 21000, 15}, //Clover
{543, 20000, 15}, //Sadler
{545, 65000, 15}, //Hustler
{546, 26000, 15}, //Intruder
{547, 27000, 15}, //Primo
{549, 25000, 15}, //Tampa
{550, 35000, 15}, //Sunrise
{551, 33000, 15}, //Merit
{554, 50000, 15}, //Yosemite
{555, 67000, 15}, //Windsor
{558, 70000, 15}, //Uranus
{559, 130000, 15}, //Jester
{560, 600000, 15}, //Sultan
{561, 40000, 15}, //Stratum
{562, 270000, 15}, //Elegy
{565, 70000, 15}, //Flash
{566, 37000, 15}, //Tahoma
{567, 40000, 15}, //Savanna
{575, 43000, 15}, //Broadway
{576, 27000, 15}, //Tornado
{579, 250000, 15}, //Huntley
{580, 90000, 15}, //Stafford
{585, 35000, 15}, //Emperor
{587, 35000, 15}, //Euros
{588, 40000, 15}, //Hotdog
{589, 30000, 15}, //Club
{600, 22000, 15}, //Picador
{602, 40000, 15}, //Alpha
{603, 65000, 15}, //Phoenix
{403, 200000, 15}, //Linerunner
{514, 170000, 15}, //Tanker
{515, 250000, 15}, //Roadtrain
{586, 25000, 15}, //Wayfarer
{463, 30000, 15}, //Freeway
{581, 50000, 15}, //BF-400
{461, 60000, 15}, //PCJ-600
{471, 40000, 15}, //Quad
{468, 45000, 15}, //Sanchez
{462, 5000, 15}, //Faggio
{509, 1500, 15}, //Bike
{510, 1500, 15}, //Mountain Bike
{481, 1500, 15}, //Bmx
{469, 500000, 15}, //Sparrow
{487, 1000000, 15}, //Maverick
{460, 500000, 15}, //Skimmer
{511, 750000, 15}, //Beagle
{446, 330000, 15}, //Squallo
{452, 270000, 15}, //Speeder
{453, 110000, 15}, //Reefer
{454, 230000, 15}, //Tropic
{473, 30000, 15}, //Dinghy
{484, 250000, 15} //Marquis
};

enum DonateInfo{
	dName[64],
	dModel,
	dPrice
};

new DonateCarsList[][DonateInfo] = {
{"Infernus", 411, 10}, 
{"Turismo", 451, 8}, 
{"Banshee", 429, 6}, 
{"Patriot", 470, 5},
{"Jetmax", 493, 3},
{"Shamal", 519, 10}, 
{"FCR-900", 521, 5},
{"Bandito", 568, 3},
{"Kart", 571, 1}
};

enum GPSEnums
{
	gpsName[64],
	gpsOn,
	gpsID,
	Float:gpsX,
	Float:gpsY,
	Float:gpsZ
};

new GPSInfo[MAX_GPS_LOCATION][GPSEnums];

//DMV

enum DMVBikeEnums{
	Float:dX,
	Float:dY,
	Float:dZ};
	
new DMVBike[][DMVBikeEnums] = {
{1212.3961,-1843.8572,12.9809},
{1247.8502,-1855.4733,12.9793},
{1293.4242,-1855.2000,12.9807},
{1314.4637,-1746.8500,12.9805},
{1315.2865,-1560.6075,12.9839},
{1359.8464,-1424.1394,12.9804},
{1212.9012,-1398.3380,12.8399},
{1194.1021,-1556.9783,12.9802},
{1160.7507,-1569.1923,12.8744},
{1148.1945,-1698.2931,13.3787},
{1051.2701,-1710.9116,12.9805},
{1044.7178,-1835.9266,13.0798},
{1203.2566,-1854.4883,12.9867},
{1215.1354,-1835.8419,12.9836}
};

enum DMVEnums{
	Float:dX,
	Float:dY,
	Float:dZ};

new DMV[][DMVEnums] = {
{1215.1189,-1840.9005,13.1185},
{1302.5857,-1855.3810,13.1186},
{1314.8802,-1750.1855,13.1188},
{1315.2681,-1587.5790,13.1187},
{1359.8419,-1418.5469,13.1185},
{1385.6066,-1407.3473,13.1187},
{1393.9271,-1434.4900,13.1212},
{1437.4879,-1443.5574,13.1187},
{1456.9873,-1318.7345,13.1187},
{1697.1924,-1304.4648,13.2323},
{1717.4072,-1177.6785,23.3931},
{1500.4229,-1158.2407,23.6511},
{1375.4235,-1138.8140,23.3911},
{1228.0121,-1140.4176,23.3032},
{1213.4685,-1262.7321,13.6732},
{1196.4419,-1376.8220,13.0310},
{1193.9204,-1555.7529,13.1188},
{1166.8752,-1569.2841,13.0381},
{1146.9910,-1694.7173,13.5176},
{1169.5282,-1715.3597,13.4256},
{1172.0533,-1834.7126,13.1364},
{1231.3121,-1832.4259,13.1320}
};

enum DMVBigEnums{
	Float:dX,
	Float:dY,
	Float:dZ};

new DMVBig[][DMVEnums] = {
{1204.3386,-1849.9388,13.5599},
{1075.6433,-1849.6282,13.5650},
{982.2690,-1782.2828,14.2547},
{826.9965,-1767.0776,13.5710},
{583.4556,-1719.5522,13.6828},
{368.4371,-1698.9569,7.1297},
{182.3841,-1589.8250,13.8894},
{94.4500,-1536.9181,6.0409},
{130.4345,-1565.1306,9.8051},
{112.1471,-1672.3262,9.9486},
{215.9766,-1735.6842,4.5184},
{361.6266,-1774.8398,5.4556},
{462.0160,-1743.9983,7.5564},
{607.5535,-1744.7156,13.5282},
{848.9426,-1787.1375,13.9529},
{1048.0854,-1849.9312,13.5720},
{1119.8914,-1854.7212,13.5562},
{1214.8752,-1839.2448,13.5572}
};

//END OF DMV

enum CourierEnums
{
	Float:coPosX,
	Float:coPosY,
	Float:coPosZ,
	coLoc[128],
	coPers[64]
};

new Courier[][CourierEnums] = {
{663.3444,-1582.6331,13.9333, "Marina", "Dl. Russell Stonge"}, // C1
{685.9463,-1409.5885,12.9549, "Market Street", "Dna. Rosalie Steger"}, // C2
{880.2781,-1409.7769,12.4685, "Market Street", "Dl. Brian Blanchard"}, // C3
{1166.7002,-1074.6863,26.8971, "Temple", "Dl. Robert Warren"}, // C4
{2447.2146,-1302.5248,23.3658, "East Los Santos", "Dna. Katlyn Hall"}, // C5
{2402.1030,-1728.3951,12.9234, "East Montgomery", "Dl. Leslie White"}, // C7
{1753.4056,-1707.4562,12.9234, "Little Mexico", "RC Courier"} // C10 - OCEAN DOCKS
};

enum SweepEnums
{
	Float:swPosX,
	Float:swPosY,
	Float:swPosZ
};

new Sweeper[][SweepEnums] = {
{1986.8733,49.1048,31.8276},
{2115.4792,38.8016,26.0611},
{2278.1697,38.7963,26.0610},
{2296.5430,73.8545,26.0633},
{2328.9905,88.7390,26.0615},
{2380.3127,89.3528,26.1441},
{2390.2339,54.8792,26.0611},
{2448.3611,39.1729,26.0627},
{2461.4888,-13.5694,26.0610},
{2407.6765,-25.2249,26.0624},
{2356.6252,-25.1130,26.0613},
{2346.3582,70.8796,26.0617},
{2308.8384,92.9911,26.0626},
{2291.0903,57.8286,26.0600},
{2291.0161,-14.8643,26.0617},
{2242.7922,-25.4467,26.0611},
{2221.7239,-82.9080,26.0611},
{2278.0063,-100.6031,26.0620},
{2296.8943,-45.5204,26.0602},
{2296.7090,29.9462,26.0611},
{2002.2471,42.7748,30.8768},
{2012.8851,67.5619,30.6152}
};

enum PaperEnums
{
	Float:papPosX,
	Float:papPosY,
	Float:papPosZ
};

new PaperDelivery[][PaperEnums] = {
{2133.4292,-1454.3224,23.4007},
{2133.6877,-1412.2350,23.4003},
{2131.1401,-1305.0670,23.4045},
{2375.2546,-1280.2754,23.3986},
{2447.0242,-1302.1381,23.3871},
{2426.3923,-1462.4926,23.3888},
{2380.8865,-1728.3162,12.9465},
{2326.9365,-1728.5745,12.9457},
{2020.4733,-1747.8619,12.9475},
{1587.9839,-1414.8909,13.1731}
};

new DonateCars[][DEALERSHIP_VEHICLES] = {
{0, 0}
};

enum INSURANCE_INFO
{
	insuranceModel,
	insurancePrice
}
new InsurancesPrice[][INSURANCE_INFO] = {
{462, 350},
{525, 400},
{543, 410},
{473, 500},
{463, 510},
{440, 520},
{532, 530},
{600, 540},
{491, 560},
{410, 570},
{516, 580},
{418, 600},
{586, 605},
{467, 610},
{547, 620},
{401, 630},
{549, 630},
{436, 630},
{420, 630},
{517, 700},
{589, 710},
{518, 720},
{527, 720},
{551, 720},
{439, 720},
{445, 750},
{478, 750},
{492, 800},
{422, 800},
{529, 850},
{405, 850},
{466, 870},
{546, 870},
{540, 870},
{474, 900},
{526, 900},
{500, 900},
{483, 900},
{545, 900},
{419, 910},
{561, 910},
{459, 910},
{421, 920},
{458, 920},
{550, 950},
{576, 950},
{412, 950},
{438, 950},
{533, 1000},
{534, 1000},
{585, 1000},
{507, 1000},
{554, 1100},
{567, 1100},
{536, 1100},
{599, 1100},
{575, 1100},
{479, 1150},
{489, 1150},
{431, 1150},
{523, 1150},
{575, 1150},
{542, 1150},
{413, 1150},
{496, 1150},
{535, 1150},
{508, 1300},
{426, 1600},
{404, 1400},
{562, 1650},
{580, 1450},
{482, 1350},
{566, 1700},
{587, 1690},
{423, 2000},
{588, 2500},
{559, 2100},
{579, 1900},
{400, 1350},
{453, 3000},
{402, 1850},
{558, 1850},
{480, 1900},
{408, 2500},
{602, 1900},
{565, 2600},
{555, 2600},
{484, 3500},
{430, 3500},
{409, 3000},
{560, 4500},
{454, 5000},
{603, 5150},
{415, 7100},
{446, 6510},
{563, 11000},
{417, 12300},
{487, 13000},
{593, 21000},
{509, 100},
{481, 100},
{477, 3000},
{468, 1500},
{521, 3500},
{541, 9000},
{429, 8500}
};

enum OWNED_CARS_INFO
{
	carID,
	carModel,
	carColor1,
	carColor2,
	Float:carParkX,
	Float:carParkY,
	Float:carParkZ,
	Float:carParkA,
	carPlate[64],
	carOwner[128],
	carOwned,
	carSpawned,
	carAlarm,
	carLock,
	carImmob,
	carInsurances,
	carDestroyed,
	carGps,
	carOwnerSlot,
	carFuel,
	carRegistered,
	carBroken,
	carTrunkWep[10],
	carTrunkAmmo[10],
	carComponent[14],
	carPaintJob,
	carRadio,
	carRadioOn,
	carRadioURL[256],
	carTicket[MAX_CAR_TICKETS],
	carDupKey,
	carTrunkLock,
	carComps,
	carOn,
	carDrug[21],
	carDrugAmount[21],
	carFaction,
	carPanels,
	carDoors,
	carLights,
	carTires,
	carRadarDetector,
	carDmg,
}
new VehicleInfo[MAX_VEHICLES][OWNED_CARS_INFO];

enum OWNED_CARS_STATUS
{
	carID,
	carModel,
	carPlate[64],
	carAlarm,
	carLock,
	carImmob,
	carInsurances,
	carDestroyed,
	carGps,
	carOn,
	carRadarDetector
}
new VehicleStatus[MAX_PLAYERS][MAX_OWNED_VEHICLES][OWNED_CARS_STATUS];

enum SPIKE_INFO
{
	sCreated,
    Float:sX,
    Float:sY,
    Float:sZ,
    sObject,
};
new SpikeInfo[MAX_OBJECTS][SPIKE_INFO];

enum PARK_METERS
{
	parkID,
	Float:parkPosX,
	Float:parkPosY,
	Float:parkPosZ,
	Float:parkPosRX,
	Float:parkPosRY,
	Float:parkPosRZ,
	Text3D:parkLabel,
	parkObject,
	parkName[256],
	parkMinutes,
	parkArea,
	parkOn
}
new ParkMeters[MAX_PARK_METERS][PARK_METERS];

enum APB_INFO
{
	apbID,
	apbCharge[64],
	apbSuspect[MAX_PLAYER_NAME],
	apbOfficer[MAX_PLAYER_NAME],
	apbPage,
	apbOn
}
new ApbInfo[MAX_APBS][APB_INFO];

enum COMP_INFO
{
	compID,
	compPrice,
}

new Wheels[][COMP_INFO] = {
{1025, 10500},
{1073, 10510},
{1074, 10530},
{1075, 10560},
{1076, 10580},
{1078, 10630},
{1079, 10640},
{1080, 10680},
{1081, 10690},
{1082, 10710},
{1083, 10730},
{1084, 10750},
{1085, 10760},
{1096, 10780},
{1097, 10810},
{1098, 10840}
};
new Spoilers[][COMP_INFO] = {
{1000, 10000},
{1001, 10020},
{1002, 10050},
{1003, 10080},
{1014, 10090},
{1015, 10120},
{1016, 10130},
{1023, 10150},
{1049, 10180},
{1050, 10220},
{1058, 10250},
{1060, 10280},
{1138, 10310},
{1139, 10320},
{1146, 10340},
{1147, 10360},
{1158, 10370},
{1162, 10390},
{1163, 10420},
{1164, 10450}
};
new Scoops[][COMP_INFO] = {
{1004, 10000},
{1005, 10020},
{1011, 10050},
{1012, 10080}
};
new Roofs[][COMP_INFO] = {
{1006, 9000},
{1032, 9020},
{1033, 9040},
{1035, 9060},
{1038, 9090},
{1053, 9100},
{1054, 9130},
{1055, 9160},
{1061, 9190},
{1067, 9210},
{1068, 9230},
{1088, 9250},
{1091, 9270},
{1103, 9280},
{1128, 9300},
{1130, 9320},
{1131, 9330}
};
new Sideskirts[][COMP_INFO] = {
{1007, 11000},
{1017, 11010},
{1026, 11040},
{1027, 11060},
{1030, 11090},
{1031, 11110},
{1036, 11140},
{1039, 11160},
{1040, 11180},
{1041, 11210},
{1042, 11230},
{1047, 11250},
{1048, 11260},
{1051, 11290},
{1052, 11310},
{1056, 11320},
{1057, 11340},
{1062, 11350},
{1063, 11370},
{1069, 11390},
{1070, 11410},
{1071, 11430},
{1072, 11450},
{1090, 11470},
{1093, 11490},
{1094, 11510},
{1095, 11520},
{1099, 11530},
{1100, 11550},
{1101, 11590},
{1102, 11610},
{1106, 11630},
{1107, 11640},
{1108, 11650},
{1118, 11660},
{1119, 11690},
{1120, 11710},
{1121, 11730},
{1122, 11740},
{1124, 11790},
{1133, 11810},
{1134, 11830},
{1137, 11860}
};
new Exhausts[][COMP_INFO] = {
{1018, 5000},
{1019, 5000},
{1020, 5000},
{1021, 5000},
{1022, 5000},
{1028, 5000},
{1029, 5000},
{1034, 5000},
{1037, 5000},
{1043, 5000},
{1044, 5000},
{1045, 5000},
{1046, 5000},
{1059, 5000},
{1064, 5000},
{1065, 5000},
{1066, 5000},
{1089, 5000},
{1092, 5000},
{1104, 5000},
{1105, 5000},
{1113, 5000},
{1114, 5000},
{1126, 5000},
{1127, 5000},
{1129, 5000},
{1132, 5000},
{1135, 5000},
{1136, 5000},
{1018, 5000},
{1018, 5000},
{1018, 5000},
{1018, 5000},
{1018, 5000},
{1018, 5000}
};
