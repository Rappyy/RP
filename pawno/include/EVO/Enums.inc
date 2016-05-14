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
{15, "Telefon", "call", CELL_ID},
{50, "Set de scule", "lock", TOOL_ID},
{150, "Statie radio", "setchannel", RADIO_ID},
{150, "Masca", "mask", MASK_ID},
{1, "Bricheta (40 folosiri)", "smoke", LIGHTER_ID},
{4, "Tigari (20)", "smoke", CIGGARS_ID},
{1, "Zar", "dice", DICE_ID},
{25, "Gascan", "gascan", GASCAN_ID},
{1, "Pix", "note", PEN_ID},
{40, "Baseball bat", "none", BAT_ID},
{100, "Camera", "none", CAMERA_ID},
{7, "Undita de pescuit", "fishingrod", FISHINGROD_ID}
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

{"TRUCKER DEPO DROP OFF", -20.2678,-278.1144,6.0800},
{"HILLTOP FARMS DROP OFF", 1052.6869,-325.1702,74.6391},
{"DILLIMORE DROP OFF", 680.0326,-442.3774,16.9863},
{"BLUEBERRY DROP OFF", 119.7707,-183.6332,1.5335},
{"BLUEBERRY DROP OFF", 211.3066,-32.6511,1.5781}
};

new TruckInfo[][TRUCKER_INFO] = {
{"FLINT COUNTY LOADING BAY", -65.6933,-1120.3291,1.0781},
{"FALLEN TREE LOADING BAY", -576.3687,-545.1996,25.5234},
{"EASTER BAY CHEMICALS LOADING BAY", -1044.8248,-639.4695,32.0078},
{"RED COUNTY LOADING BAY", -159.7691,-289.2556,3.9053},
{"RED COUNTY LOADING BAY 2", -23.4623,-274.6633,5.4297},
{"BLUEBERRY LOADING BAY", 52.3418,-286.3346,1.6938},
{"BLUEBERRY ACRES LOADING BAY", -32.9033,63.6575,3.1172},
{"BLUEBERRY LOADING BAY 2", 253.3181,-215.8886,1.4255},
{"THE PANOPTICON FARM LOADING BAY", -487.9491,-190.0284,78.9264},
{"BLUEBERRY SPAIDEX LOADING BAY", 225.8909,19.0340,3.2285},
{"HAMPTON BARNS LOADING BAY", 752.5790,317.8121,20.6099},
{"MONTGOMERY PECO LOADING BAY", 1382.9436,448.8042,20.5263},
{"MOMTGOMERY ELECTRONICS LOADING BAY", 1413.8079,422.4330,20.5075},
{"PALOMINO CREEK FARM LOADING BAY", 1907.8627,178.9636,37.8537}
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
{1369, "Wheelchair",10},
{1663, "Swivel chair 1",10},
{1671, "Swivel chair 2",10},
{1714, "Swivel chair 3",10},
{1715, "Swivel chair 4",10},
{1704, "Living room chair 1",10},
{1705, "Living room chair 2",10},
{1708, "Living room chair 3",10},
{1711, "Living room chair 4",10},
{1720, "Rest chair",10},
{1721, "Rest chair 2",10},
{1735, "Rest chair 3",10},
{1739, "Dinning chair",10},
{1811, "Dinning chair 2",10},
{2079, "Dinning chair 3",10},
{2120, "Dinning chair 4",10},
{2121, "Dinning chair 5",10},
{2123, "Dinning chair 6",10},
{2124, "Dinning chair 6",10},
{2125, "Dinning chair 7",10},
{2310, "Dinning chair 8",10},
{2636, "Dinning chair 9",10},
{1806, "Office chair",10},
{2309, "Office chair 2",10},
{1810, "Fold chair",10},
{1810, "Rocking chair",10}
};
new TablesInfo[][FURNITURE_DETAILS] = {
{1824, "Craps table",30},
{1896, "Casino table 2",30},
{2964, "Pool table",30},
{2964, "Poker table",30},
{1826, "Living room rable",30},
{1827, "Living room rable 2",30},
{2311, "Living room rable 3",30},
{2313, "Living room rable 4",30},
{2314, "Living room rable 5",30},
{2315, "Living room rable 6",30},
{2319, "Living room rable 7",30},
{2321, "Living room rable 8",30},
{2024, "Living room rable 9",30},
{2346, "Hifi table",30},
{2370, "Hifi table 2",30},
{2725, "Strip table",30},
{14869, "Bobbie table",30}
};
new DinnerTablesInfo[][FURNITURE_DETAILS] = {
{1433, "Dinning table",20},
{1516, "Dinning table 2",20},
{1737, "Dinning table 3",20},
{1770, "Dinning table 4",20},
{2029, "Swank dinning",20},
{2030, "Roundtable",20},
{2086, "Roundtable 2",20},
{2109, "Roundtable 3",20},
{2111, "Roundtable 4",20},
{2031, "Oval table",20},
{2032, "Oval table 2",20},
{2080, "Oval table 3",20},
{2085, "Oval table 4",20},
{2118, "Oval table 5",20},
{2112, "Square table",20},
{2110, "Rectangular table",20},
{2115, "Rectangular table 2",20},
{2116, "Rectangular table 3",20},
{2117, "Rectangular table 4",20},
{2119, "Rectangular table 5",20},
{2357, "Rectangular table 6",20}
};
new BedsInfo[][FURNITURE_DETAILS] = {
{1700, "Room bed",65},
{1701, "Room bed 2",65},
{1745, "Room bed 3",65},
{1799, "Room bed 4",65},
{1802, "Room bed 5",65},
{1771, "Bunk bed",65},
{1803, "Bunk bed 2",65},
{2300, "Bunk bed 3",65},
{1793, "Low bed",65},
{1794, "Low bed 2",65},
{1796, "Low bed 3",65},
{1800, "Low bed 4",65},
{1812, "Low bed 5",65},
{2302, "Low bed 6",65},
{1795, "Swank bed",65},
{1797, "Swank bed 2",65},
{1798, "Swank bed 3",65},
{1801, "Swank bed 4",65},
{2090, "Swank bed 5",65},
{2298, "Swank bed 6",65},
{2299, "Swank bed 7",65},
{2301, "Swank bed 8",65}
};
new DressersInfo[][FURNITURE_DETAILS] = {
{2562, "Dresser 1",23},
{2568, "Dresser 2",23},
{2569, "Dresser 3",23},
{2570, "Dresser 4",23},
{2573, "Dresser 5",23},
{2574, "Dresser 6",23},
{2576, "Dresser 7",23}
};
new CabinetsInfo[][FURNITURE_DETAILS] = {
{911, "Bust cabinet",15},
{912, "Bust cabinet 2",15},
{913, "Bust cabinet 3",15},
{1730, "Swank cabinet",15},
{2078, "Swank cabinet 2",15},
{2089, "Swank cabinet 3",15},
{2094, "Swank cabinet 4",15},
{1740, "Small cabinet",15},
{2088, "Small cabinet 2",15},
{2095, "Small cabinet 3",15},
{2306, "Small cabinet 4",15},
{2328, "Small cabinet 5",15},
{2329, "Small cabinet 6",15},
{2021, "Small cabinet 7",15},
{1741, "Medium cabinet",15},
{1743, "Medium cabinet 2",15},
{2084, "Medium cabinet 3",15},
{2087, "Medium cabinet 4",15},
{2307, "Medium cabinet 5",15},
{2020, "Medium cabinet 6",15},
{2197, "Locker",15},
{2204, "Office cabinet",15}
};
new SofasInfo[][FURNITURE_DETAILS] = {
{1702, "Living room couch",70},
{1703, "Living room couch 2",70},
{1706, "Living room couch 3",70},
{1707, "Living room couch 4",70},
{1712, "Living room couch 5",70},
{1713, "Living room couch 6",70},
{1756, "Living room couch 7",70},
{1757, "Living room couch 8",70},
{1709, "[Very Long] couch",70},
{1710, "[Medium] couch",70},
{1760, "[Medium] couch 2",70},
{1766, "[Medium] couch 3",70},
{1768, "[Medium] couch 4",70},
{1753, "Swank couch",70},
{1761, "Swank couch 2",70},
{1763, "Low couch",70},
{1764, "Low couch 2",70},
{1716, "Stool 1",70},
{1805, "Stool 2",70},
{2350, "Bar stool",70},
{2723, "Strip stool",70}
};
new GrugsInfo[][FURNITURE_DETAILS] = {
{2815, "Living Grug",5},
{2833, "Living Grug 2",5},
{2834, "Living Grug 3",5},
{2835, "Living Grug 4",5},
{2836, "Living Grug 5",5}
};
new PicturesInfo[][FURNITURE_DETAILS] = {
{2254, "Picture 1",5},
{2255, "Picture 2",5},
{2556, "Picture 3",5},
{2557, "Picture 4",5},
{2558, "Picture 5",5},
{2559, "Picture 6",5},
{2260, "Picture 7",5},
{2261, "Picture 8",5},
{2262, "Picture 9",5},
{2263, "Picture 10",5},
{2264, "Picture 11",5},
{2265, "Picture 12",5},
{2266, "Picture 13",5},
{2267, "Picture 14",5},
{2268, "Picture 15",5},
{2269, "Picture 16",5},
{2270, "Picture 17",5},
{2270, "Picture 18",5},
{2272, "Picture 19",5},
{2273, "Picture 20",5},
{2274, "Picture 21",5},
{2275, "Picture 22",5},
{2276, "Picture 23",5},
{2277, "Picture 24",5},
{2278, "Picture 25",5},
{2279, "Picture 26",5},
{2280, "Picture 27",5},
{2281, "Picture 28",5},
{2282, "Picture 29",5},
{2283, "Picture 30",5},
{2284, "Picture 31",5},
{2285, "Picture 32",5},
{2286, "Picture 33",5},
{2287, "Picture 34",5},
{2288, "Picture 35",5},
{2289, "Picture 36",5}
};
new PlantsInfo[][FURNITURE_DETAILS] = {
{948, "Plant pot 1",2},
{949, "Plant pot 2",2},
{950, "Plant pot 3",2},
{2194, "Plant pot 4",2},
{2195, "Plant pot 5",2},
{2203, "Plant pot 6",2},
{2240, "Plant pot 7",2},
{2241, "Plant pot 8",2},
{2242, "Plant pot 9",2},
{2243, "Plant pot 10",2},
{2244, "Plant pot 11",2},
{2245, "Plant pot 12",2},
{2246, "Plant pot 13",2},
{2247, "Plant pot 14",2},
{2248, "Plant pot 15",2},
{2249, "Plant pot 16",2},
{2250, "Plant pot 17",2},
{2251, "Plant pot 18",2},
{2252, "Plant pot 19",2},
{2253, "Plant pot 20",2},
{3811, "Plant pot 21",2},
{15038, "Plant pot 22",2},
{14804, "Plant pot 23",2}
};
new LampsInfo[][FURNITURE_DETAILS] = {
{2196, "Office lamp",4},
{2238, "Lava lamp",4},
{2726, "Strip lamp",4},
{3534, "Pink lamp",4},
{2023, "Stand lamp",4},
{2026, "Ceiling lamp",4},
{2105, "Table light",4},
{2106, "Table light 2",4},
{2108, "Table light 3",4}
};
new RandomDecorations[][FURNITURE_DETAILS] = {
{2469, "Plane model 1",1},
{2470, "Plane model 2",1},
{2472, "Plane model 3",1},
{2473, "Plane model 4",1},
{2510, "[BIG] Plane model",1}
};
new RandomMess[][FURNITURE_DETAILS] = {
{2670, "Coffee and cigars",0},
{2671, "Chopsticks and tissues",0},
{2672, "Burgershot mess",0},
{2673, "Random mess 1",0},
{2674, "Cigars and papers",0},
{2675, "Food mess",0},
{2676, "Food mess 2",0},
{2677, "Food mess 3",0},
{2342, "Coffee and food",0}
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
{2127, "Red refrigerator",50},
{2131, "White refrigerator",50},
{2147, "Normal gray refrigerator",50},
{2133, "White Kitchen Cabinet 1", 25},
{2134, "White Kitchen Cabinet 2", 25},
{2141, "White Kitchen Cabinet 3", 25},
{2338, "Large White Kitchen Cabinet", 25},
{2341, "Corner White Kitchen Cabinet", 25},
{2334, "Green Kitchen Cabinet 1", 25},
{2335, "Green Kitchen Cabinet 2", 25},
{2142, "Green Kitchen Cabinet 3", 25},
{2156, "Green Kitchen Cabinet 4", 25},
{2157, "Green Kitchen Cabinet 5", 25},
{2159, "Green Kitchen Cabinet 6", 25},
{2143, "Kitchen Cabinet + Washer", 25},
{2160, "Kitchen Cabinet + Sink", 25},
{2158, "Large Green Kitchen Cabinet", 25},
{2128, "Large Red Kitchen Cabinet", 25},
{2129, "Red Kitchen Cabinet", 25},
{2013, "Kitchen sink",25},
{2130, "Kitchen sink 2",25},
{2132, "Kitchen sink 3",25},
{2136, "Kitchen sink 4",25},
{2336, "Kitchen sink 5",25},
{2150, "Kitchen sink 6",25},
{2149, "Microwave 1",20},
{2421, "Microwave 2",20},
{2135, "Cooker",25},
{2294, "Cooker 2",25},
{2339, "Cooker 3",25},
{2417, "Cooker 4",25},
{2144, "Cooker 5",25},
{2017, "Cooker 6",25},
{2337, "Washer",25},
{2340, "Washer 2",25},
{2018, "Washer 3",25}
};

new BathroomInfo[][FURNITURE_DETAILS] = {
{2515, "Bathroom sink",50},
{2518, "Bathroom sink 2",50},
{2523, "Bathroom sink 3",50},
{2524, "Bathroom sink 4",50},
{2739, "Bathroom sink 5",50},
{2514, "Toilet 1",50},
{2521, "Toilet 2",50},
{2525, "Toilet 3",50},
{2528, "Toilet 4",50},
{2738, "Toilet 5",50},
{2516, "Bath",150},
{2519, "Bath 2",150},
{2522, "Bath 3",150},
{2526, "Bath 4",150},
{2517, "Large shower",200}
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
{19353, "Wall 1",200},
{19354, "Wall 2",200},
{19355, "Wall 3",200},
{19356, "Wall 4",200},
{19357, "Wall 5",200},
{19358, "Wall 6",200},
{19359, "Wall 7",200},
{19360, "Wall 8",200},
{19361, "Wall 9",200},
{19362, "Wall 10",200},
{19363, "Wall 11",200},
{19364, "Wall 12",200},
{19365, "Wall 13",200},
{19366, "Wall 14",200},
{19367, "Wall 15",200},
{19368, "Wall 16",200},
{19369, "Wall 17",200},
{19370, "Wall 18",200},
{19371, "Wall 19",200},
{19372, "Wall 20",200},
{19373, "Wall 21",200},
{19383, "Wall 31",200},
{19384, "Wall 32",200},
{19385, "Wall 33",200},
{19386, "Wall 34",200},
{19387, "Wall 35",200},
{19388, "Wall 36",200},
{19389, "Wall 37",200},
{19390, "Wall 38",200},
{19391, "Wall 39",200},
{19392, "Wall 40",200},
{19393, "Wall 41",200},
{19394, "Wall 42",200},
{19395, "Wall 43",200},
{19396, "Wall 44",200},
{19397, "Wall 45",200},
{19398, "Wall 46",200},
{19399, "Wall 47",200},
{19400, "Wall 48",200},
{19401, "Wall 49",200},
{19402, "Wall 50",200},
{19403, "Wall 51",200},
{19404, "Wall 52",200},
{19405, "Wall 53",200},
{19406, "Wall 54",200},
{19407, "Wall 55",200},
{19408, "Wall 56",200},
{19409, "Wall 57",200},
{19410, "Wall 58",200},
{19411, "Wall 59",200},
{19412, "Wall 60",200},
{19413, "Wall 61",200},
{19414, "Wall 62",200},
{19415, "Wall 63",200},
{19416, "Wall 64",200},
{19417, "Wall 65",200},
{19426, "Wall 66",200},
{19427, "Wall 67",200},
{19428, "Wall 68",200},
{19429, "Wall 69",200},
{19430, "Wall 70",200},
{19431, "Wall 71",200},
{19432, "Wall 72",200},
{19433, "Wall 73",200},
{19434, "Wall 74",200},
{19435, "Wall 75",200},
{19436, "Wall 76",200},
{19437, "Wall 77",200},
{19438, "Wall 78",200},
{19439, "Wall 79",200},
{19440, "Wall 80",200},
{19441, "Wall 81",200},
{19442, "Wall 82",200},
{19443, "Wall 83",200},
{19444, "Wall 84",200},
{19445, "Wall 85",200},
{19446, "Wall 86",200},
{19447, "Wall 87",200},
{19448, "Wall 88",200},
{19449, "Wall 89",200},
{19450, "Wall 90",200},
{19451, "Wall 91",200},
{19452, "Wall 92",200},
{19453, "Wall 93",200}
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
{18926, "Army Hat", 5, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18927, "Azure Hat", 5, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18928, "Funky Hat", 5, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18929, "Dark Gray Hat", 5, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18930, "Fire Hat", 5, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18931, "Dark Blue Hat", 5, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18932, "Orange Hat", 5, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18933, "Light Gray Hat", 5, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18934, "Pink Hat", 5, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18935, "Yellow Hat", 5, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18944, "Fire Hat Boater", 5, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18945, "Gray Hat Boater", 5, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18946, "Gray Hat Boater 2", 5, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18947, "Black Hat Bowler", 5, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18948, "Azure Hat Bowler", 5, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18949, "Green Hat Bowler", 5, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18950, "Red Hat Bowler", 5, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18951, "Light Green Hat Bowler", 5, 2, 0.152, 0.0, -0.01, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{19488, "White Hat Bowler", 5, 2, 0.13, 0.0, -0.0, -89.4, 103.69, -4.19, 1.0, 1.0, 1.0},
{18967, "Simple Black Hat", 5, 2, 0.15, 0.01, -0.01, 0.0, 97.09, 87.59, 1.0, 1.0, 1.0},
{18968, "Simple Gray Hat", 5, 2, 0.15, 0.01, -0.01, 0.0, 97.09, 87.59, 1.0, 1.0, 1.0},
{18969, "Simple Orange Hat", 5, 2, 0.15, 0.01, -0.01, 0.0, 97.09, 87.59, 1.0, 1.0, 1.0},
{18970, "Tiger Hat", 5, 2, 0.109999, 0.045999, -0.007, 0.0, 96.29, 89.5, 1.0, 1.0, 1.0},
{18971, "Black & White Cool Hat", 5, 2, 0.109999, 0.045999, -0.007, 0.0, 96.29, 89.5, 1.0, 1.0, 1.0},
{18972, "Black & Orange Cool Hat", 5, 2, 0.109999, 0.045999, -0.007, 0.0, 96.29, 89.5, 1.0, 1.0, 1.0},
{18973, "Black & Green Cool Hat", 5, 2, 0.109999, 0.045999, -0.007, 0.0, 96.29, 89.5, 1.0, 1.0, 1.0},
{19066, "Santa Hat", 3000, 2, 0.126000, 0.008000, 0.0, 0.0, 87.0, 94.190002, 1.0, 1.0, 1.0},
{19067, "Red Hoody Hat", 5, 2, 0.133999, -0.006000, 0.0, -22.199998, 92.500030, 114.199836, 1.0, 1.0, 1.0},
{19068, "Tiger Hoody Hat", 5, 2, 0.133999, -0.006000, 0.0, -22.199998, 92.500030, 114.199836, 1.0, 1.0, 1.0},
{19069, "Black Hoody Hat", 5, 2, 0.133999, -0.006000, 0.0, -22.199998, 92.500030, 114.199836, 1.0, 1.0, 1.0},
{19093, "White Dude Hat", 5, 2, 0.107999, 0.0, -0.008999, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{19095, "Brown Cowboy Hat", 5, 2, 0.18, 0.006999, -0.009999, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{19096, "Black Cowboy Hat", 5, 2, 0.18, 0.006999, -0.009999, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{19097, "Black Cowboy Hat 2", 5, 2, 0.18, 0.006999, -0.009999, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{19098, "Brown Cowboy Hat 2", 5, 2, 0.18, 0.006999, -0.009999, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{19352, "Black Top Hat", 5, 2, 0.143999, 0.015000, 0.0, 0.0, 90.800003, 0.0, 1.0, 1.0, 1.0},
{19487, "White Top Hat", 5, 2, 0.143999, 0.015000, 0.0, 0.0, 90.800003, 0.0, 1.0, 1.0, 1.0},
{18964, "Black Skully Cap", 5, 2, 0.136999, -0.003000, -0.004000, 35.900001, 88.200019, 44.699966, 1.0, 1.0, 1.0},
{18965, "Brown Skully Cap", 5, 2, 0.136999, -0.003000, -0.004000, 35.900001, 88.200019, 44.699966, 1.0, 1.0, 1.0},
{18966, "Funky Skully Cap", 5, 2, 0.136999, -0.003000, -0.004000, 35.900001, 88.200019, 44.699966, 1.0, 1.0, 1.0},
{18921, "Blue Beret", 5, 2, 0.179000, -0.000999, -0.012000, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18922, "Red Beret", 5, 2, 0.179000, -0.000999, -0.012000, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18923, "Dark Blue Beret", 5, 2, 0.179000, -0.000999, -0.012000, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18924, "Army Beret", 5, 2, 0.179000, -0.000999, -0.012000, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18925, "Red Army Beret", 5, 2, 0.179000, -0.000999, -0.012000, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18939, "Dark Blue CapBack", 5, 2, 0.171999, 0.008999, -0.009000, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18940, "Azure CapBack", 5, 2, 0.171999, 0.008999, -0.009000, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18941, "Black CapBack", 5, 2, 0.171999, 0.008999, -0.009000, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18942, "Gray CapBack", 5, 2, 0.171999, 0.008999, -0.009000, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18943, "Green CapBack", 5, 2, 0.171999, 0.008999, -0.009000, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0}
};
new GlassesInfo[][PLAYER_TOYS_INFO] = {
{19006, "Red Glasses", 2, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19007, "Green Glasses", 2, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19008, "Yellow Glasses", 2, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19009, "Azure Glasses", 2, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19010, "Pink Glasses", 2, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19011, "Funky Glasses", 2, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19012, "Gray Glasses", 2, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19013, "Funky Glasses 2", 2, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19014, "Black & White Glasses", 2, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19015, "White Glasses", 2, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19016, "X-Ray Glasses", 2, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19017, "Covered Yellow Glasses", 2, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19018, "Covered Orange Glasses", 2, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19019, "Covered Red Glasses", 2, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19020, "Covered Blue Glasses", 2, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19021, "Covered Green Glasses", 2, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19022, "Cool Black Glasses", 2, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19023, "Cool Azure Glasses", 2, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19024, "Cool Blue Glasses", 2, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19025, "Cool Pink Glasses", 2, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19026, "Cool Red Glasses", 2, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19027, "Cool Orange Glasses", 2, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19028, "Cool Yellow Glasses", 2, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19029, "Cool Yellow Glasses", 2, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19030, "Pink Nerd Glasses", 2, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19031, "Green Nerd Glasses", 2, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19032, "Red Nerd Glasses", 2, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19033, "Black Nerd Glasses", 2, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19034, "Black & White Nerd Glasses", 2, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0},
{19035, "Ocean Nerd Glasses", 2, 2, 0.080999, 0.043999, -0.005, 82.1, 75.1, 7.5, 1.0, 1.0, 1.0}
};
new BandanasInfo[][PLAYER_TOYS_INFO] = {
{18891, "Purple Bandana", 1, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18892, "Red Bandana", 1, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18893, "Red&White Bandana", 1, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18894, "Orange Bandana", 1, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18895, "Skull Bandana", 1, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18896, "Black Bandana", 1, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18897, "Blue Bandana", 1, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18898, "Green Bandana", 1, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18899, "Pink Bandana", 1, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18900, "Funky Bandana", 1, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18901, "Tiger Bandana", 1, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18902, "Yellow Bandana", 1, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18903, "Azure Bandana", 1, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18904, "Dark Blue Bandana", 1, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18905, "Olive Bandana", 1, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18906, "Orange&Yellow Bandana", 1, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18907, "Funky Bandana 2", 1, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18907, "Blue Bandana 2", 1, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18907, "Azure Bandana 2", 1, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18907, "Fire Bandana", 1, 2, 0.156998, 0.004, -0.004, -83.3, -6.7, -89.4999, 1.0, 1.0, 1.0},
{18911, "Skull Bandana Mask", 1, 18, 0.03, 0.079999, 0.0, -20.7001, 87.2, 22.4, 1.0, 1.0, 1.0},
{18912, "Black Bandana Mask", 1, 18, 0.03, 0.079999, 0.0, -20.7001, 87.2, 22.4, 1.0, 1.0, 1.0},
{18913, "Green Bandana Mask", 1, 18, 0.03, 0.079999, 0.0, -20.7001, 87.2, 22.4, 1.0, 1.0, 1.0},
{18914, "Army Bandana Mask", 1, 18, 0.03, 0.079999, 0.0, -20.7001, 87.2, 22.4, 1.0, 1.0, 1.0},
{18915, "Funky Bandana Mask", 1, 18, 0.03, 0.079999, 0.0, -20.7001, 87.2, 22.4, 1.0, 1.0, 1.0},
{18916, "Light Bandana Mask", 1, 18, 0.03, 0.079999, 0.0, -20.7001, 87.2, 22.4, 1.0, 1.0, 1.0},
{18917, "Dark Blue Bandana Mask", 1, 18, 0.03, 0.079999, 0.0, -20.7001, 87.2, 22.4, 1.0, 1.0, 1.0},
{18918, "Gray Bandana Mask", 1, 18, 0.03, 0.079999, 0.0, -20.7001, 87.2, 22.4, 1.0, 1.0, 1.0},
{18919, "White Bandana Mask", 1, 18, 0.03, 0.079999, 0.0, -20.7001, 87.2, 22.4, 1.0, 1.0, 1.0},
{18920, "Colorful Bandana Mask", 1, 18, 0.03, 0.079999, 0.0, -20.7001, 87.2, 22.4, 1.0, 1.0, 1.0}
};
new HeadphonesInfo[][PLAYER_TOYS_INFO] = {
{19421, "White Headphones", 3, 2, 0.036999, -0.028, -0.006999, 86.6, 176.2, 88.4, 1.157, 1.0, 1.0},
{19422, "Black Headphones", 3, 2, 0.036999, -0.028, -0.006999, 86.6, 176.2, 88.4, 1.157, 1.0, 1.0},
{19423, "Gray Headphones", 3, 2, 0.036999, -0.028, -0.006999, 86.6, 176.2, 88.4, 1.157, 1.0, 1.0},
{19424, "Blue Headphones", 3, 2, 0.036999, -0.028, -0.006999, 86.6, 176.2, 88.4, 1.157, 1.0, 1.0}
};

new SportsInfo[][PLAYER_TOYS_INFO] = {
{19036, "White Hockey Mask", 5, 2, 0.096999, 0.043999, -0.006000, 87.499961, 94.899955, 0.0, 1.0, 1.0, 1.0},
{19037, "Red Hockey Mask", 5, 2, 0.096999, 0.043999, -0.006000, 87.499961, 94.899955, 0.0, 1.0, 1.0, 1.0},
{19038, "Green Hockey Mask", 5, 2, 0.096999, 0.043999, -0.006000, 87.499961, 94.899955, 0.0, 1.0, 1.0, 1.0},
{19472, "Gas Mask", 5, 2, -0.005000, 0.142999, -0.008000, 87.499961, 94.899955, 0.0, 1.0, 1.116000, 1.0},
{2919, "Sports Bag", 5, 5, 0.273000, 0.034999, 0.046999, -11.199997, -103.500007, 4.300001, 0.439000, 0.161000, 0.351000},
{3026, "Jansport Backpack", 5, 1, -0.143000, -0.049999, 0.009999, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0},
{18645, "Red&White Motorcycle Helmet", 100, 2, 0.050999, 0.023000, -0.012999, 82.800025, 91.199928, 4.500027, 1.0, 1.0, 1.0},
{18976, "Blue Motorcycle Helmet", 100, 2, 0.087998, 0.039000, -0.006998, 82.800025, 91.199928, 4.500027, 0.970000, 1.179000, 1.0},
{18977, "Red Motorcycle Helmet", 100, 2, 0.050999, 0.023000, -0.012999, 82.800025, 91.199928, 4.500027, 1.0, 1.0, 1.0},
{18978, "White Motorcycle Helmet", 100, 2, 0.050999, 0.023000, -0.012999, 82.800025, 91.199928, 4.500027, 1.0, 1.0, 1.0}
//{18979, "Purple Motorcycle Helmet", 100, 2, 0.050999, 0.023000, -0.012999, 82.800025, 91.199928, 4.500027, 1.0, 1.0, 1.0}
};

new GuitarsInfo[][PLAYER_TOYS_INFO] = {
{19317, "Bass Guitar", 500},
{19318, "Flying Guitar", 500},
{19319, "Warlock Guitar", 500},
{19319, "BoomBox (One Time Use)", 200}
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
	pMaskID,
    pSweeper,
    pGarbage
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
	sBold,
	sColor[16],
	sText[64],
	sObject,
	sOn,
	sSize
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

// Garbage Jobs

enum BIN_INFO
{
	objectID,
	objectModel,
	Float:binX,
	Float:binY,
	Float:binZ,
	Float:binRX,
	Float:binRY,
	Float:binRZ,
	TrashPicked,
	Text3D:binLabel
}
new BinInfo[MAX_TRASHBINS][BIN_INFO];

// Garbage Job

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
282,283,284,288,287,309,310,311,302,303,304,305
};

new LSFDSkins[7] = {
70,274,275,276,277,279,308
};

new NEWSSkins[5] = {
2,170,250,60,150
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

// Farmer job

enum fj
{
	pPaddyUsed[MAX_PADDYS] = 0,
	pPaddyObject[MAX_PADDYS],
	pPaddyProgress[MAX_PADDYS],
	pPaddyFillWater[MAX_PADDYS],
	Float:pPaddyPosX[MAX_PADDYS],
	Float:pPaddyPosY[MAX_PADDYS],
	Float:pPaddyPosZ[MAX_PADDYS],
	Text3D:pPaddyText[MAX_PADDYS],
	/////////////////////////////
	pPaddyHarvestUsed[MAX_PADDYS],
	pPaddyHarvestObject[MAX_PADDYS],
	Float:pPaddyHarvestPosX[MAX_PADDYS],
	Float:pPaddyHarvestPosY[MAX_PADDYS],
	Float:pPaddyHarvestPosZ[MAX_PADDYS],
	Text3D:pPaddyHarvestText[MAX_PADDYS],
	pPaddyWithered[MAX_PADDYS],
	/////////////////////////////
	pHasHireVehicle,
	pVehicleHire,
	pTrailerVehicleHire,
	pPaddyInTrailer,
	Text3D:pTrailerText,
	////////////////////////////
	pPaddyHarvestInVehicle,
	pPaddyHarvestInVehicleObject[10],
	////////////////////////////
	pUpdateTime,
}
new FarmInfo[MAX_PLAYERS][fj];

// Farmer job
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
{400, 20000, 15}, // Landstalker
{401, 6500, 15}, // Bravura
{402, 120000, 15}, // Buffalo
{403, 55000, 15}, // Linerunner
{404, 3500, 15}, // Perenniel
{405, 12000, 15}, // Sentinel
{410, 2500, 15}, // Manana
{412, 7500, 15}, // Voodoo
{413, 6500, 15}, // Pony
{414, 8000, 15}, // Mule
{418, 7000, 15}, // Moonbeam
{419, 6250, 15}, // Esperanto
{420, 9000, 15}, // Taxi
{421, 21000, 15}, // Washington
{422, 2000, 15}, // Bobcat
{423, 13000, 15}, // Mr Whoopee
{426, 24000, 15}, // Premier
{436, 3750, 15}, // Previon
{438, 10000, 15}, // Cabbie
{439, 17200, 15}, // Stallion
{440, 8000, 15}, // Rumpo
{442, 26000, 15}, // Romero
{445, 19000, 15}, // Seasparrow
{447, 150000, 15}, // Admiral
{448, 1500, 15}, // Pizzaboy
{453, 35000, 15}, // Reefer
{454, 120000, 15}, // Tropic
{455, 60000, 15}, // Flatbed
{456, 35000, 15}, // Yankee
{457, 4000, 15}, // Caddy
{458, 12800, 15}, // Solair
{459, 11000, 15}, // Topfun Van (Berkley's RC)
{460, 200000, 15}, // Skimmer
{461, 32000, 15}, // PCJ-600
{462, 1500, 15}, // Faggio
{463, 7550, 15}, // Freeway
{466, 8000, 15}, // Glendale
{467, 8000, 15}, // Oceanic
{468, 86000, 15}, // Sanchez
{471, 10500, 15}, // Quad
{473, 5000, 15}, // Dinghy
{474, 31525, 15}, // Hermes
{475, 38000, 15}, // Sabre
{477, 145000, 15}, // ZR-350
{478, 4000, 15}, // Walton
{479, 9000, 15}, // Regina
{480, 350000, 15}, // Comet
{481, 300, 15}, // BMX
{482, 16000, 15}, // Burrito
{483, 19000, 15}, // Camper
{489, 22000, 15}, // Rancher
{491, 11000, 15}, // Virgo
{492, 13000, 15}, // Greenwood
{496, 32000, 15}, // Blista Compact
{498, 18000, 15}, // Boxville
{499, 9000, 15}, // Benson
{500, 12000, 15}, // Mesa
{506, 250000, 15}, // Super GT
{507, 20000, 15}, // Elegant
{508, 18000, 15}, // Journey
{509, 150, 15}, // Bike
{510, 350, 15}, // Mountain Bike
{515, 120000, 15}, // Roadtrain
{516, 18000, 15}, // Nebula
{517, 10000, 15}, // Majestic
{518, 10000, 15}, // Buccaneer
{524, 65000, 15}, // Cement Truck
{525, 12000, 15}, // Towtruck
{526, 7000, 15}, // Fortune
{527, 4000, 15}, // Cadrona
{529, 13000, 15}, // Willard
{531, 3000, 15}, // Tractor
{532, 8000, 15}, // Combine Harvester
{533, 80000, 15}, // Feltzer
{534, 16000, 15}, // Remington
{535, 35000, 15}, // Slamvan
{536, 12000, 15}, // Blade
{540, 14000, 15}, // Vincent
{542, 6500, 15}, // Clover
{543, 3000, 15}, // Sadler
{545, 80000, 15}, // Hustler
{546, 14000, 15}, // Intruder
{547, 12000, 15}, // Primo
{549, 5500, 15}, // Tampa
{550, 18500, 15}, // Sunrise
{551, 13200, 15}, // Merit
{552, 20000, 15}, // Utility Van
{554, 35000, 15}, // Yosemite
{558, 60000, 15}, // Uranus
{559, 75000, 15}, // Jester
{560, 250000, 15}, // Sultan
{561, 23000, 15}, // Stratum
{562, 350000, 15}, // Elegy
{565, 65000, 15}, // Flash
{566, 27000, 15}, // Tahoma
{567, 25000, 15}, // Savanna
{573, 120000, 15}, // Dune
{576, 17000, 15}, // Tornado
{578, 70000, 15}, // DFT-30
{579, 95000, 15}, // Huntley
{580, 170000, 15}, // Stafford
{581, 23000, 15}, // BF-400
{585, 17000, 15}, // Emperor
{586, 4500, 15}, // Wayfarer
{587, 24000, 15}, // Euros
{588, 12000, 15}, // Hotdog
{589, 18000, 15}, // Club
{600, 7000, 15}, // Picador
{602, 25000, 15}, // Alpha
{603, 35000, 15} // Phoenix
};

enum DonateInfo{
	dName[64],
	dModel,
	dPrice
};

new DonateCarsList[][DonateInfo] = {
{"Sandking", 495, 10}, 
{"Shamal", 519, 10}, 
{"Hotknife", 434, 7}, 
{"Jetmax", 493, 7},
{"FCR-900", 521, 6},
{"Patriot", 470, 5}, 
{"BFInjection", 424, 5},
{"Kart", 571, 3}
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
{1297.4606,-1545.8555,12.9426},
{1295.0675,-1694.4114,12.9478},
{1294.3862,-1839.1895,12.9484},
{1371.4680,-1873.4703,12.9469},
{1510.0603,-1874.7985,12.9463},
{1652.5077,-1875.1733,12.9475},
{1691.2461,-1825.4797,12.9483},
{1807.9633,-1834.6323,12.9457},
{1818.6058,-1924.1084,12.9460},
{2071.0593,-1934.7612,12.9655},
{2084.4807,-1830.5872,12.9477},
{2091.7344,-1763.3029,12.9650},
{2022.1112,-1749.6852,12.9455},
{1837.0204,-1750.7994,12.9472},
{1823.5710,-1629.1495,12.9471},
{1682.4159,-1588.9597,12.9500},
{1660.6559,-1553.0150,12.9372},
{1695.0731,-1550.7819,12.9460},
{1701.7047,-1486.5430,12.9546},
{1670.7263,-1477.3046,12.9471},
{1660.0399,-1453.8605,12.9476},
{1470.7281,-1437.8691,12.9472},
{1431.2706,-1438.1688,12.9472},
{1423.6520,-1405.0533,12.9476},
{1375.8719,-1393.1385,13.0271},
{1337.9740,-1444.3679,12.9478},
{1296.9261,-1542.6743,12.9505}
};

enum DMVEnums{
	Float:dX,
	Float:dY,
	Float:dZ};

new DMV[][DMVEnums] = {
{1296.8298,-1547.6584,13.0915},
{1211.0029,-1569.4219,13.0989},
{1198.3656,-1418.7252,12.9566},
{1131.3479,-1397.1368,13.1626},
{816.0356,-1398.2954,13.1746},
{649.8264,-1397.6053,13.0998},
{629.9062,-1229.9296,17.6874},
{996.8274,-967.1252,40.6335},
{1348.9063,-938.7646,34.3916},
{1345.2866,-1128.1262,23.3784},
{1441.4957,-1163.3024,23.3644},
{1451.0522,-1285.9740,13.0880},
{1535.7874,-1305.1609,15.4427},
{1701.4152,-1303.4293,13.1448},
{1712.2014,-1427.8676,13.0887},
{1832.3657,-1463.2634,13.0804},
{1828.2274,-1548.4032,13.0830},
{1920.7537,-1519.4250,2.9739},
{2178.5044,-1556.0211,1.8686},
{2457.9272,-1616.5782,14.9624},
{2707.1699,-1621.9916,12.9778},
{2725.8774,-1643.9692,12.7156},
{2843.3167,-1659.3517,10.3978},
{2882.8420,-1632.8993,10.5804},
{2907.3638,-1299.7677,10.5807},
{2890.7134,-890.3840,10.5806},
{2893.5513,-634.2943,10.5415},
{2749.5347,-376.1125,24.5200},
{2774.7432,20.5174,33.4076},
{2605.9912,322.9113,26.2721},
{2350.8640,328.0375,32.3692},
{2267.2241,364.3270,31.8373},
{2339.3586,368.6068,26.2375},
{2340.8918,205.7468,26.0423},
{2340.7795,-3.6803,26.0414},
{2307.3752,-26.3713,26.0439},
{2296.9260,29.0191,26.0412},
{2152.8164,44.2787,26.0412},
{2055.5273,43.3143,26.7874},
{1542.1001,115.7402,29.1624},
{1393.3889,206.1922,19.1354},
{1302.7913,246.1913,19.1146},
{1334.8945,344.6351,19.1119},
{1295.7921,378.3364,19.1120},
{1276.1718,348.3602,19.1155},
{1234.7916,350.8802,19.1115},
{1233.4736,271.8934,19.1135},
{1219.3983,219.7619,19.1115},
{1248.8105,188.1589,19.1133},
{1290.5406,-70.7743,35.7304},
{1191.9758,-154.6950,40.1710},
{1256.8862,-396.2111,2.2835},
{1156.3147,-929.1001,42.7418},
{1160.8596,-1025.4797,32.4737},
{1160.1771,-1123.7975,23.6364},
{1325.5596,-1148.2372,23.3536},
{1339.8260,-1373.0444,13.1604},
{1297.6024,-1540.5149,13.0900}

};

enum DMVBigEnums{
	Float:dX,
	Float:dY,
	Float:dZ};

new DMVBig[][DMVEnums] = {
{1296.4161,-1551.2195,13.5604},
{1295.3318,-1692.9694,13.5561},
{1295.6359,-1835.6049,13.5561},
{1076.4648,-1849.9237,13.5645},
{1043.0087,-1805.5330,13.8247},
{937.4553,-1773.1312,13.8165},
{827.8372,-1767.3813,13.5690},
{650.5743,-1732.4752,13.8409},
{352.7096,-1698.2990,6.8527},
{205.9528,-1620.3501,14.5580},
{161.6147,-1565.2676,12.0338},
{302.5842,-1411.8572,14.0984},
{538.7861,-1258.8871,16.6429},
{611.0356,-1223.5264,18.2672},
{630.0502,-1378.1382,13.6970},
{680.0255,-1403.1904,13.5730},
{814.2279,-1408.4410,13.4643},
{1038.1658,-1408.2056,13.3696},
{1058.9707,-1443.3131,13.5335},
{1035.6415,-1552.7078,13.5275},
{1085.5387,-1574.9049,13.5561},
{1215.2990,-1574.3392,13.5637},
{1267.9341,-1574.7733,13.5562},
{1283.0754,-1556.8499,13.7318}
};

//END OF DMV

new DonateCars[][DEALERSHIP_VEHICLES] = {
{0, 0}
};

enum INSURANCE_INFO
{
	insuranceModel,
	insurancePrice
}
new InsurancesPrice[][INSURANCE_INFO] = {
{400, 200}, // Landstalker
{401, 65}, // Bravura
{402, 1200}, // Buffalo
{403, 550}, // Linerunner
{404, 35}, // Perenniel
{405, 120}, // Sentinel
{410, 25}, // Manana
{412, 75}, // Voodoo
{413, 65}, // Pony
{414, 80}, // Mule
{418, 70}, // Moonbeam
{419, 62}, // Esperanto
{420, 90}, // Taxi
{421, 21}, // Washington
{422, 20}, // Bobcat
{423, 130}, // Mr Whoopee
{426, 240}, // Premier
{436, 37}, // Previon
{438, 100}, // Cabbie
{439, 172}, // Stallion
{440, 80}, // Rumpo
{442, 260}, // Romero
{445, 190}, // Seasparrow
{447, 1500}, // Admiral
{488, 15}, // Pizzaboy
{453, 350}, // Reefer
{454, 1200}, // Tropic
{455, 600}, // Flatbed
{456, 350}, // Yankee
{457, 40}, // Caddy
{458, 128}, // Solair
{459, 110}, // Topfun Van (Berkley's RC)
{460, 2000}, // Skimmer
{461, 320}, // PCJ-600
{462, 15}, // Faggio
{463, 75}, // Freeway
{466, 80}, // Glendale
{467, 80}, // Oceanic
{468, 860}, // Sanchez
{471, 105}, // Quad
{473, 50}, // Dinghy
{474, 315}, // Hermes
{475, 380}, // Sabre
{477, 1450}, // ZR-350
{478, 40}, // Walton
{479, 90}, // Regina
{480, 3500}, // Comet
{481, 3}, // BMX
{482, 160}, // Burrito
{483, 190}, // Camper
{489, 220}, // Rancher
{491, 110}, // Virgo
{492, 130}, // Greenwood
{496, 320}, // Blista Compact
{498, 180}, // Boxville
{499, 90}, // Benson
{500, 120}, // Mesa
{506, 2500}, // Super GT
{507, 200}, // Elegant
{508, 180}, // Journey
{509, 1}, // Bike
{510, 3}, // Mountain Bike
{515, 1200}, // Roadtrain
{516, 180}, // Nebula
{517, 100}, // Majestic
{518, 100}, // Buccaneer
{524, 650}, // Cement Truck
{525, 120}, // Towtruck
{526, 70}, // Fortune
{527, 40}, // Cadrona
{529, 130}, // Willard
{531, 30}, // Tractor
{532, 80}, // Combine Harvester
{533, 800}, // Feltzer
{534, 160}, // Remington
{535, 350}, // Slamvan
{536, 120}, // Blade
{540, 140}, // Vincent
{542, 65}, // Clover
{543, 30}, // Sadler
{545, 800}, // Hustler
{546, 140}, // Intruder
{547, 120}, // Primo
{549, 55}, // Tampa
{550, 185}, // Sunrise
{551, 132}, // Merit
{552, 200}, // Utility Van
{554, 350}, // Yosemite
{558, 600}, // Uranus
{559, 750}, // Jester
{560, 2500}, // Sultan
{561, 230}, // Stratum
{562, 3500}, // Elegy
{565, 650}, // Flash
{566, 270}, // Tahoma
{567, 250}, // Savanna
{573, 1200}, // Dune
{576, 170}, // Tornado
{578, 700}, // DFT-30
{579, 950}, // Huntley
{580, 1700}, // Stafford
{581, 230}, // BF-400
{585, 170}, // Emperor
{586, 450}, // Wayfarer
{587, 240}, // Euros
{588, 120}, // Hotdog
{589, 180}, // Club
{600, 70}, // Picador
{602, 250}, // Alpha
{603, 350} // Phoenix
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
	carImpound,
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
{1025, 200},
{1073, 200},
{1074, 200},
{1075, 200},
{1076, 200},
{1078, 200},
{1079, 200},
{1080, 200},
{1081, 200},
{1082, 200},
{1083, 200},
{1084, 200},
{1085, 200},
{1096, 200},
{1097, 200},
{1098, 200}
};
new Spoilers[][COMP_INFO] = {
{1000, 300},
{1001, 300},
{1002, 300},
{1003, 300},
{1014, 300},
{1015, 300},
{1016, 300},
{1023, 300},
{1049, 300},
{1050, 300},
{1058, 300},
{1060, 300},
{1138, 300},
{1139, 300},
{1146, 300},
{1147, 300},
{1158, 300},
{1162, 300},
{1163, 300},
{1164, 300}
};
new Scoops[][COMP_INFO] = {
{1004, 300},
{1005, 300},
{1011, 300},
{1012, 300}
};
new Roofs[][COMP_INFO] = {
{1006, 125},
{1032, 125},
{1033, 125},
{1035, 125},
{1038, 125},
{1053, 125},
{1054, 125},
{1055, 125},
{1061, 125},
{1067, 125},
{1068, 125},
{1088, 125},
{1091, 125},
{1103, 125},
{1128, 125},
{1130, 125},
{1131, 125}
};
new Sideskirts[][COMP_INFO] = {
{1007, 75},
{1017, 75},
{1026, 75},
{1027, 75},
{1030, 75},
{1031, 75},
{1036, 75},
{1039, 75},
{1040, 75},
{1041, 75},
{1042, 75},
{1047, 75},
{1048, 75},
{1051, 75},
{1052, 75},
{1056, 75},
{1057, 75},
{1062, 75},
{1063, 75},
{1069, 75},
{1070, 75},
{1071, 75},
{1072, 75},
{1090, 75},
{1093, 75},
{1094, 75},
{1095, 75},
{1099, 75},
{1100, 75},
{1101, 75},
{1102, 75},
{1106, 75},
{1107, 75},
{1108, 75},
{1118, 75},
{1119, 75},
{1120, 75},
{1121, 75},
{1122, 75},
{1124, 75},
{1133, 75},
{1134, 75},
{1137, 75}
};
new Exhausts[][COMP_INFO] = {
{1018, 50},
{1019, 50},
{1020, 50},
{1021, 50},
{1022, 50},
{1028, 50},
{1029, 50},
{1034, 50},
{1037, 50},
{1043, 50},
{1044, 50},
{1045, 50},
{1046, 50},
{1059, 50},
{1064, 50},
{1065, 50},
{1066, 50},
{1089, 50},
{1092, 50},
{1104, 50},
{1105, 50},
{1113, 50},
{1114, 50},
{1126, 50},
{1127, 50},
{1129, 50},
{1132, 50},
{1135, 50},
{1136, 50},
{1018, 50},
{1018, 50},
{1018, 50},
{1018, 50},
{1018, 50},
{1018, 50}
};
