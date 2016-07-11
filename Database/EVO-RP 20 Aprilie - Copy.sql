/*
Navicat MySQL Data Transfer

Source Server         : local connection
Source Server Version : 100110
Source Host           : localhost:3306
Source Database       : evorp

Target Server Type    : MYSQL
Target Server Version : 100110
File Encoding         : 65001

Date: 2016-04-20 09:42:00
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for ajails
-- ----------------------------
DROP TABLE IF EXISTS `ajails`;
CREATE TABLE `ajails` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `player` varchar(50) NOT NULL DEFAULT 'None_None',
  `victim` varchar(50) NOT NULL DEFAULT 'None_None',
  `minutes` int(10) NOT NULL DEFAULT '0',
  `reason` varchar(100) NOT NULL DEFAULT 'None',
  `data` varchar(50) NOT NULL DEFAULT 'None',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of ajails
-- ----------------------------

-- ----------------------------
-- Table structure for apaylog
-- ----------------------------
DROP TABLE IF EXISTS `apaylog`;
CREATE TABLE `apaylog` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `name` varchar(24) NOT NULL DEFAULT 'None_None',
  `target` varchar(24) NOT NULL DEFAULT 'None_None',
  `amount` int(50) NOT NULL DEFAULT '0',
  `data` varchar(50) NOT NULL DEFAULT 'None',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of apaylog
-- ----------------------------

-- ----------------------------
-- Table structure for apbs
-- ----------------------------
DROP TABLE IF EXISTS `apbs`;
CREATE TABLE `apbs` (
  `id` int(11) NOT NULL,
  `charge` varchar(128) CHARACTER SET latin1 NOT NULL DEFAULT 'None',
  `suspect` varchar(100) CHARACTER SET latin1 NOT NULL DEFAULT 'None',
  `officer` varchar(100) CHARACTER SET latin1 NOT NULL DEFAULT 'None',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of apbs
-- ----------------------------

-- ----------------------------
-- Table structure for ateles
-- ----------------------------
DROP TABLE IF EXISTS `ateles`;
CREATE TABLE `ateles` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `mapname` varchar(255) NOT NULL DEFAULT 'None',
  `posx` float(15,4) NOT NULL DEFAULT '0.0000',
  `posy` float(15,4) NOT NULL DEFAULT '0.0000',
  `posz` float(15,4) NOT NULL DEFAULT '0.0000',
  `interior` int(11) NOT NULL DEFAULT '0',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=44 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of ateles
-- ----------------------------
INSERT INTO `ateles` VALUES ('1', '2 Room house', '-79.9677', '1384.4000', '1078.0000', '10');
INSERT INTO `ateles` VALUES ('2', '2 Room house', '-48.9719', '1458.4301', '1085.0000', '10');
INSERT INTO `ateles` VALUES ('3', '3 Room house', '43.0151', '1439.2700', '1081.0000', '10');
INSERT INTO `ateles` VALUES ('4', '3 Room house & 2 story', '7.6240', '1306.4600', '1082.0000', '10');
INSERT INTO `ateles` VALUES ('5', '4 Room house & 2 story', '82.9526', '1272.7000', '1079.0000', '10');
INSERT INTO `ateles` VALUES ('6', '4 Room house & 2 story', '156.1590', '1410.9000', '1085.0000', '10');
INSERT INTO `ateles` VALUES ('7', '3 Room house', '289.9780', '1502.4800', '1077.0000', '10');
INSERT INTO `ateles` VALUES ('8', '3 Room house', '329.3400', '1513.9100', '1085.0000', '10');
INSERT INTO `ateles` VALUES ('9', '2 Room house', '389.7200', '1505.8000', '1079.0000', '10');
INSERT INTO `ateles` VALUES ('10', '3 Room house', '374.8890', '1378.4600', '1079.0000', '10');
INSERT INTO `ateles` VALUES ('11', '3 Room house', '448.2840', '1355.1500', '1081.0000', '10');
INSERT INTO `ateles` VALUES ('12', '4 Room house & 2 story', '509.6430', '1355.1801', '1076.0000', '10');
INSERT INTO `ateles` VALUES ('13', '3 Room house & strip', '745.1150', '1413.5601', '1101.0000', '10');
INSERT INTO `ateles` VALUES ('14', '2 Room house', '295.1200', '1285.9600', '1077.0000', '10');
INSERT INTO `ateles` VALUES ('15', '2 Room house', '191.2260', '1289.8300', '1081.0000', '10');
INSERT INTO `ateles` VALUES ('16', '2 Room house', '290.7920', '1243.2400', '1082.0000', '10');
INSERT INTO `ateles` VALUES ('17', '2 Room house', '244.1370', '1147.0699', '1080.0000', '10');
INSERT INTO `ateles` VALUES ('18', '3 Room house', '326.2300', '1076.2700', '1081.0000', '10');
INSERT INTO `ateles` VALUES ('19', 'Richman house 5 rooms & 2 bathrooms', '199.0120', '1112.3300', '1082.0000', '10');
INSERT INTO `ateles` VALUES ('20', 'Richman house 5 rooms & 2 bathrooms', '278.1070', '1059.5100', '1082.0000', '10');
INSERT INTO `ateles` VALUES ('21', 'Richman house 5 rooms & 2 bathrooms', '263.0950', '979.6130', '1083.0000', '10');
INSERT INTO `ateles` VALUES ('22', 'Small 2 room house', '2262.5901', '-1121.4000', '1048.0000', '10');
INSERT INTO `ateles` VALUES ('23', 'Small 1 room house', '2284.7200', '-1125.3000', '1050.0000', '10');
INSERT INTO `ateles` VALUES ('24', '3 Room house', '2370.6699', '-1095.6600', '1049.0000', '10');
INSERT INTO `ateles` VALUES ('25', 'Very small 1 house', '2313.3701', '-1229.8600', '1046.0000', '10');
INSERT INTO `ateles` VALUES ('26', 'Small 2 room house', '2244.0200', '-1029.6500', '1047.0000', '10');
INSERT INTO `ateles` VALUES ('27', '3 Room house', '2272.2400', '-1242.7500', '1048.0000', '10');
INSERT INTO `ateles` VALUES ('28', '4 Room house', '2150.0601', '-1217.5400', '1048.0000', '10');
INSERT INTO `ateles` VALUES ('29', '2 Room house', '2364.2500', '-1074.1200', '1047.0000', '10');
INSERT INTO `ateles` VALUES ('30', 'Big richman house', '2373.2800', '-1182.3300', '1052.0000', '10');
INSERT INTO `ateles` VALUES ('31', 'TINY room', '243.4020', '323.1500', '999.0000', '10');
INSERT INTO `ateles` VALUES ('32', 'TINY room', '266.7110', '321.5340', '996.0000', '10');
INSERT INTO `ateles` VALUES ('33', 'TINY room', '361.6970', '304.1140', '996.0000', '10');
INSERT INTO `ateles` VALUES ('34', 'TINY room', '2188.7600', '-1073.5500', '1049.0000', '10');
INSERT INTO `ateles` VALUES ('35', 'TINY 2 room', '2254.7500', '-1112.0900', '1048.0000', '10');
INSERT INTO `ateles` VALUES ('36', 'TINY 2 room', '2297.5100', '-1093.7200', '1049.0000', '10');
INSERT INTO `ateles` VALUES ('38', 'Caravan', '1.6481', '-3.2375', '999.0000', '2');
INSERT INTO `ateles` VALUES ('39', 'Betting shop', '-2154.3401', '618.7920', '1055.0000', '10');
INSERT INTO `ateles` VALUES ('41', 'Impound lot', '-1210.9200', '-1074.8101', '128.0000', '0');
INSERT INTO `ateles` VALUES ('42', 'tet', '1459.3600', '-1763.0699', '3285.0000', '10');
INSERT INTO `ateles` VALUES ('43', 'hospital', '1193.6200', '-1317.3101', '13.0000', '0');

-- ----------------------------
-- Table structure for atms
-- ----------------------------
DROP TABLE IF EXISTS `atms`;
CREATE TABLE `atms` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `posx` float(15,4) NOT NULL DEFAULT '0.0000',
  `posy` float(15,4) NOT NULL DEFAULT '0.0000',
  `posz` float(15,4) NOT NULL DEFAULT '0.0000',
  `interior` int(11) NOT NULL DEFAULT '0',
  `info` varchar(150) NOT NULL DEFAULT 'None',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=6 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of atms
-- ----------------------------
INSERT INTO `atms` VALUES ('1', '2334.9541', '53.1371', '26.4834', '0', 'Palomino Creek');
INSERT INTO `atms` VALUES ('2', '1342.2850', '215.8740', '19.5469', '0', 'ATM-MG-1');
INSERT INTO `atms` VALUES ('3', '1290.3528', '273.2348', '19.5547', '0', 'ATM-MG-2');
INSERT INTO `atms` VALUES ('4', '241.7849', '-180.4356', '1.5781', '0', 'ATM-BB-1');
INSERT INTO `atms` VALUES ('5', '256.5114', '-62.8633', '1.5781', '0', 'ATM-BB-2');

-- ----------------------------
-- Table structure for banks
-- ----------------------------
DROP TABLE IF EXISTS `banks`;
CREATE TABLE `banks` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `posx` float(15,4) NOT NULL DEFAULT '0.0000',
  `posy` float(15,4) NOT NULL DEFAULT '0.0000',
  `posz` float(15,4) NOT NULL DEFAULT '0.0000',
  `interior` int(11) NOT NULL DEFAULT '0',
  `info` varchar(255) NOT NULL DEFAULT 'None',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=8 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of banks
-- ----------------------------
INSERT INTO `banks` VALUES ('7', '2316.6204', '-10.2086', '26.7422', '0', 'OrangeCounty');

-- ----------------------------
-- Table structure for bans
-- ----------------------------
DROP TABLE IF EXISTS `bans`;
CREATE TABLE `bans` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `name` varchar(24) NOT NULL DEFAULT 'None_None',
  `reason` varchar(100) NOT NULL DEFAULT 'None',
  `playerIP` varchar(100) NOT NULL DEFAULT 'None',
  `playerSerial` longtext,
  `admin` text,
  `date` text,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of bans
-- ----------------------------

-- ----------------------------
-- Table structure for business
-- ----------------------------
DROP TABLE IF EXISTS `business`;
CREATE TABLE `business` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `posx` float DEFAULT NULL,
  `posy` float DEFAULT NULL,
  `posz` float DEFAULT NULL,
  `exitx` float DEFAULT NULL,
  `exity` float DEFAULT NULL,
  `exitz` float DEFAULT NULL,
  `name` varchar(255) DEFAULT NULL,
  `info` varchar(255) DEFAULT NULL,
  `entermsg` varchar(255) DEFAULT NULL,
  `owner` varchar(255) DEFAULT NULL,
  `owned` int(11) DEFAULT NULL,
  `locked` int(11) DEFAULT NULL,
  `price` int(64) DEFAULT NULL,
  `levelbuy` int(64) DEFAULT NULL,
  `interior` int(64) DEFAULT NULL,
  `world` int(64) DEFAULT NULL,
  `cash` int(255) DEFAULT NULL,
  `type` int(11) DEFAULT NULL,
  `entrance` int(64) DEFAULT NULL,
  `radio` int(11) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=27 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of business
-- ----------------------------
INSERT INTO `business` VALUES ('1', '2303.58', '-68.7716', '26.4844', '772.112', '-3.89865', '1000.69', 'Business', 'Boxing Club', 'Bine ai venit la Clubul de Box', 'The State', '0', '0', '100000', '3', '5', '0', '0', '8', '0', '0');
INSERT INTO `business` VALUES ('2', '2303.58', '-42.2543', '26.4844', '2843.31', '-1037.75', '843.138', 'BUSINESS', 'Bar/Club', 'HINT: /buydrink pentru a cumpara racoritoare.', 'The State', '0', '1', '200000', '3', '0', '1', '0', '6', '100', '0');
INSERT INTO `business` VALUES ('3', '2332.94', '-17.4976', '26.4844', '-227.028', '1401.23', '27.7698', 'Business', 'Bar/Club', 'HINT: /buydrink pentru a cumpara racoritoare.', 'The State', '0', '0', '130000', '3', '18', '2', '196', '6', '0', '0');
INSERT INTO `business` VALUES ('4', '2334.19', '6.03822', '26.4845', '2333.34', '6.22412', '26.493', 'Business', 'Restaurant', 'HINT: Foloseste /meal pentru a manca ceva.', 'The State', '0', '0', '130000', '3', '0', '3', '0', '1', '0', '0');
INSERT INTO `business` VALUES ('5', '2332.78', '30.8661', '26.6752', '493.496', '-24.9617', '1000.67', 'Business', 'Bar/Club', 'HINT: /buydrink pentru a cumpara racoritoare.', 'The State', '0', '0', '150000', '3', '17', '4', '96', '6', '0', '0');
INSERT INTO `business` VALUES ('6', '2331.81', '75.0023', '26.621', '372.352', '-131.651', '1001.45', 'Business', 'Restaurant', 'HINT: Foloseste /meal pentru a manca ceva.', 'The State', '0', '0', '150000', '3', '5', '5', '0', '1', '0', '0');
INSERT INTO `business` VALUES ('7', '2304.57', '14.2946', '26.4844', '207.738', '-109.02', '1005.27', 'Business', 'Clothes Store', 'HINT: /buyclothes pentru a cumpara accesorii.', 'The State', '0', '0', '130000', '3', '15', '6', '0', '5', '0', '0');
INSERT INTO `business` VALUES ('8', '2242.62', '52.6213', '26.6671', '-27.3123', '-29.2776', '1003.55', 'Business', '24-7 Store', 'HINT: /buy pentru a cumpara din magazin.', 'The State', '0', '0', '250000', '3', '4', '7', '12361', '3', '0', '0');
INSERT INTO `business` VALUES ('9', '1310.9', '330.01', '19.9141', '487.736', '633.457', '1021.29', 'Business', 'Bar/Club', 'HINT: /buydrink pentru a cumpara racoritoare.', 'The State', '0', '0', '200000', '3', '0', '8', '0', '6', '0', '0');
INSERT INTO `business` VALUES ('10', '1288.68', '271.187', '19.5547', '-12807.1', '5787.8', '344.993', 'Inside Track', 'Betting Place', 'Bine ai venit la magazinul de pariuri, poti juca blackjack.', 'The State', '0', '0', '150000', '3', '0', '9', '0', '12', '0', '0');
INSERT INTO `business` VALUES ('11', '1294.68', '235.381', '19.5547', '2425.48', '-2705.33', '1308.99', 'Business', 'Restaurant', 'HINT: Foloseste /meal pentru a manca ceva.', 'The State', '0', '0', '200000', '3', '0', '10', '0', '1', '0', '0');
INSERT INTO `business` VALUES ('12', '1359.64', '205.086', '19.7555', '501.981', '-69.1502', '998.835', 'Business', 'Bar/Club', 'HINT: /buydrink pentru a cumpara racoritoare.', 'The State', '0', '0', '150000', '3', '11', '11', '271', '6', '0', '0');
INSERT INTO `business` VALUES ('13', '1331.63', '219.939', '19.5547', '207.738', '-109.02', '1005.27', 'Business', 'Clothes Store', 'HINT: /buyclothes pentru a cumpara accesorii.', 'The State', '0', '0', '130000', '3', '15', '12', '0', '5', '0', '0');
INSERT INTO `business` VALUES ('14', '1258.08', '204.121', '19.7174', '-26.6916', '-55.7149', '1003.55', 'Business', '24-7 Store', 'HINT: /buy pentru a cumpara din magazin.', 'The State', '0', '0', '200000', '3', '6', '13', '212', '3', '0', '0');
INSERT INTO `business` VALUES ('15', '661.35', '-573.429', '16.3359', '662.638', '-573.321', '16.3359', 'Business', '24-7 Store', 'HINT: /buy pentru a cumpara din magazin.', 'The State', '0', '0', '200000', '3', '0', '14', '1044', '3', '0', '0');
INSERT INTO `business` VALUES ('16', '672.845', '-496.942', '16.3359', '418.655', '-83.6987', '1001.8', 'Business', 'Barber Shop', 'Bine ai venit la Barber Shop, foloseste /haircut.', 'The State', '0', '0', '100000', '3', '3', '15', '0', '13', '0', '0');
INSERT INTO `business` VALUES ('17', '681.579', '-473.67', '16.5363', '681.475', '-451.151', '-25.6168', 'Business', 'Bar/Club', 'HINT: /buydrink pentru a cumpara racoritoare.', 'The State', '0', '0', '150000', '3', '1', '16', '31', '6', '0', '0');
INSERT INTO `business` VALUES ('18', '273.195', '-157.882', '1.74052', '-27.3123', '-29.2776', '1003.55', 'Business', '24-7 Store', 'HINT: /buy pentru a cumpara din magazin.', 'The State', '0', '0', '200000', '3', '4', '17', '2255', '3', '0', '0');
INSERT INTO `business` VALUES ('19', '292.347', '-195.426', '1.57812', '377.099', '-192.44', '1000.64', 'Business', 'Restaurant', 'HINT: Foloseste /meal pentru a manca ceva.', 'The State', '0', '0', '150000', '3', '17', '18', '0', '1', '0', '0');
INSERT INTO `business` VALUES ('20', '203.416', '-202.748', '1.57812', '372.352', '-131.651', '1001.45', 'Business', 'Restaurant', 'HINT: Foloseste /meal pentru a manca ceva.', 'The State', '0', '0', '150000', '3', '5', '19', '0', '1', '0', '0');
INSERT INTO `business` VALUES ('21', '172.109', '-152.608', '1.57524', '-227.028', '1401.23', '27.7698', 'Business', 'Bar/Club', 'HINT: /buydrink pentru a cumpara racoritoare.', 'The State', '0', '0', '150000', '3', '18', '20', '54', '6', '0', '0');
INSERT INTO `business` VALUES ('22', '1383.19', '465.371', '20.1942', '-30.9467', '-89.6096', '1003.55', 'Business', '24-7 Store', 'HINT: /buy pentru a cumpara din magazin.', 'The State', '0', '0', '50000', '3', '18', '21', '77', '3', '0', '0');
INSERT INTO `business` VALUES ('23', '1248.62', '365.063', '19.5547', '-2166.95', '643.83', '1502.25', 'Business', 'Bar/Club', 'HINT: /buydrink pentru a cumpara racoritoare.', 'The State', '0', '0', '200000', '3', '0', '22', '0', '6', '0', '0');
INSERT INTO `business` VALUES ('24', '1356.83', '308.171', '19.7473', '3208.28', '-1237.37', '3030.59', 'Bahamas', 'Bar/Club', 'HINT: /buydrink pentru a cumpara racoritoare.', 'The State', '0', '0', '200000', '3', '0', '23', '0', '6', '0', '0');
INSERT INTO `business` VALUES ('25', '1097.89', '-308.329', '73.9922', '1098.21', '-298.01', '73.9987', 'Business', 'Pay&Spray', 'Bine ai venit in Pay&Spray!', 'The State', '0', '0', '75000', '3', '0', '24', '0', '14', '0', '0');
INSERT INTO `business` VALUES ('26', '719.896', '-467.512', '16.3437', '719.893', '-456.761', '16.3359', 'Business', 'Pay&Spray', 'Bine ai venit in Pay&Spray!', 'The State', '0', '0', '100000', '3', '0', '25', '0', '14', '0', '0');

-- ----------------------------
-- Table structure for cctvs
-- ----------------------------
DROP TABLE IF EXISTS `cctvs`;
CREATE TABLE `cctvs` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `faction` int(255) DEFAULT NULL,
  `posx` float DEFAULT NULL,
  `posy` float DEFAULT NULL,
  `posz` float DEFAULT NULL,
  `posrx` float DEFAULT NULL,
  `posry` float DEFAULT NULL,
  `posrz` float DEFAULT NULL,
  `interior` int(11) DEFAULT NULL,
  `virworld` int(64) DEFAULT NULL,
  `info` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of cctvs
-- ----------------------------

-- ----------------------------
-- Table structure for commandlog
-- ----------------------------
DROP TABLE IF EXISTS `commandlog`;
CREATE TABLE `commandlog` (
  `id` int(100) NOT NULL AUTO_INCREMENT,
  `player` varchar(30) DEFAULT NULL,
  `command` varchar(50) DEFAULT NULL,
  `date` text,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of commandlog
-- ----------------------------

-- ----------------------------
-- Table structure for criminalrecords
-- ----------------------------
DROP TABLE IF EXISTS `criminalrecords`;
CREATE TABLE `criminalrecords` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `userid` int(64) NOT NULL DEFAULT '0',
  `charge` text NOT NULL,
  `date` text NOT NULL,
  `officer` int(64) NOT NULL DEFAULT '0',
  PRIMARY KEY (`id`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of criminalrecords
-- ----------------------------

-- ----------------------------
-- Table structure for dealerships
-- ----------------------------
DROP TABLE IF EXISTS `dealerships`;
CREATE TABLE `dealerships` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `posx` float DEFAULT NULL,
  `posy` float DEFAULT NULL,
  `posz` float DEFAULT NULL,
  `info` varchar(128) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=6 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of dealerships
-- ----------------------------
INSERT INTO `dealerships` VALUES ('5', '637.858', '-500.068', '16.3359', 'Dillimore');

-- ----------------------------
-- Table structure for doors
-- ----------------------------
DROP TABLE IF EXISTS `doors`;
CREATE TABLE `doors` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `info` varchar(255) DEFAULT NULL,
  `posx` float DEFAULT NULL,
  `posy` float DEFAULT NULL,
  `posz` float DEFAULT NULL,
  `exitx` float DEFAULT NULL,
  `exity` float DEFAULT NULL,
  `exitz` float DEFAULT NULL,
  `enterinterior` int(11) DEFAULT NULL,
  `exitinterior` int(11) DEFAULT NULL,
  `virtualworld` int(64) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=46 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of doors
-- ----------------------------
INSERT INTO `doors` VALUES ('1', 'Palomino Bank', '2302.88', '-16.231', '26.4844', '2305.3', '-16.1809', '26.7422', '0', '0', '2');
INSERT INTO `doors` VALUES ('4', 'ORANGE COUNTY~n~~w~SHERIFF DEPARTAMENT', '626.966', '-571.944', '17.9207', '246.442', '107.355', '1003.22', '0', '10', '0');
INSERT INTO `doors` VALUES ('5', '~g~TOWNHALL~n~~w~PALOMINO CREEK', '2263.53', '-77.6638', '26.5391', '916.646', '2381.84', '246.47', '0', '0', '0');
INSERT INTO `doors` VALUES ('6', 'OCFD', '1242.13', '326.727', '19.7555', '3719.19', '-503.887', '3899.8', '0', '0', '0');
INSERT INTO `doors` VALUES ('7', 'LOS SANTOS FIRE DEPARTAMENT', '2488.58', '2397.38', '10.8203', '142.004', '-1990.17', '2001.83', '0', '0', '0');
INSERT INTO `doors` VALUES ('8', 'ORANGE COUNTY~n~~w~SHERIFF DEPARTAMENT', '2282.15', '2423.71', '3.47656', '213.975', '120.829', '999.016', '0', '10', '0');
INSERT INTO `doors` VALUES ('10', 'COURT ROOM', '1222.06', '244.109', '19.5469', '1445.42', '-1465.65', '1616.4', '0', '3', '0');
INSERT INTO `doors` VALUES ('11', 'COMPLEX MARINA', '893.657', '-1635.95', '14.9297', '1758.51', '-2037.42', '1996.68', '0', '0', '0');
INSERT INTO `doors` VALUES ('12', 'LSCF', '1772.04', '-1548.19', '9.90625', '1780.37', '-1576.51', '1734.94', '0', '0', '-1');
INSERT INTO `doors` VALUES ('19', 'SAN NEWS BUILDING', '1373.65', '405.103', '19.9555', '1037.61', '51.5436', '801.036', '0', '0', '0');
INSERT INTO `doors` VALUES ('21', 'Palomino Stereo', '2305.82', '82.393', '26.4787', '827.474', '-1365.3', '-40.2344', '0', '0', '10');
INSERT INTO `doors` VALUES ('22', 'DMV FLY-TEST', '1765.21', '-2278.29', '-2.58567', '1765.38', '-2271.62', '26.796', '0', '0', '0');
INSERT INTO `doors` VALUES ('23', 'Rolling&Smoking', '2002.41', '-1782.28', '13.5537', '300.924', '-336.343', '1015.6', '0', '0', '1');
INSERT INTO `doors` VALUES ('25', '~r~DMV ~w~LOS SANTOS', '1219.19', '-1812.97', '16.5938', '-2029.7', '-119.209', '1035.17', '0', '3', '0');
INSERT INTO `doors` VALUES ('31', 'SANews Tower', '1548.44', '-1363.74', '326.218', '263.225', '1774.64', '701.086', '0', '0', '0');
INSERT INTO `doors` VALUES ('32', 'Palomino Projects', '2334.55', '-48.8702', '26.4844', '2157.26', '-1764.69', '801.086', '0', '0', '0');
INSERT INTO `doors` VALUES ('33', 'MONTGOMERY PROJECTS', '1309.56', '382.142', '19.5625', '1867.38', '-1594.44', '799.321', '0', '0', '0');
INSERT INTO `doors` VALUES ('34', '~b~CHURCH', '2256.81', '-44.6007', '26.8834', '1964.06', '-349.629', '1092.95', '0', '0', '0');
INSERT INTO `doors` VALUES ('37', 'ORANGE COUNTY~n~~w~SHERIFF DEPARTAMENT', '610.894', '-583.495', '18.2109', '214.631', '118.267', '1003.22', '0', '10', '0');
INSERT INTO `doors` VALUES ('39', 'Motel Palomino', '2273.69', '82.7786', '26.4844', '-1887.83', '-2754.04', '2424.28', '0', '0', '0');
INSERT INTO `doors` VALUES ('40', 'Montgomery Projects', '1291.91', '281.468', '19.5614', '2216.24', '-1168.02', '510.606', '0', '0', '0');
INSERT INTO `doors` VALUES ('41', 'SACF', '121.828', '1910.53', '19.9495', '284.338', '-224.609', '349.269', '0', '0', '0');
INSERT INTO `doors` VALUES ('42', 'SACF', '292.236', '-205.06', '349.269', '191.102', '-205.005', '349.279', '0', '0', '0');
INSERT INTO `doors` VALUES ('43', 'SACF', '142.628', '-193.455', '342.92', '144.181', '-193.163', '342.92', '0', '0', '0');
INSERT INTO `doors` VALUES ('44', 'SACF', '221.903', '1922.48', '18.1005', '140.823', '-212.738', '342.92', '0', '0', '0');
INSERT INTO `doors` VALUES ('45', 'Vorbitor', '183.117', '-179.735', '342.92', '304.102', '-210.238', '349.26', '0', '0', '0');

-- ----------------------------
-- Table structure for factiondoors
-- ----------------------------
DROP TABLE IF EXISTS `factiondoors`;
CREATE TABLE `factiondoors` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `faction` int(11) DEFAULT NULL,
  `info` varchar(255) DEFAULT NULL,
  `enterx` float DEFAULT NULL,
  `entery` float DEFAULT NULL,
  `enterz` float DEFAULT NULL,
  `exitx` float DEFAULT NULL,
  `exity` float DEFAULT NULL,
  `exitz` float DEFAULT NULL,
  `enterinterior` int(11) DEFAULT NULL,
  `exitinterior` int(11) DEFAULT NULL,
  `world` int(11) DEFAULT NULL,
  `withvehicle` int(11) DEFAULT NULL,
  `enterangle` float DEFAULT NULL,
  `exitangle` float DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=20 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of factiondoors
-- ----------------------------
INSERT INTO `factiondoors` VALUES ('1', '1', '~b~~h~LSPD~n~~y~Training Field', '306.7', '-159.122', '999.594', '305.061', '-159.173', '999.594', '6', '6', '0', '0', '0', '0');
INSERT INTO `factiondoors` VALUES ('2', '1', '~p~to use: /enter', '299.378', '-168.973', '999.594', '297.601', '-168.971', '999.594', '6', '6', '0', '0', '0', '0');
INSERT INTO `factiondoors` VALUES ('11', '1', 'OCSD~n~~w~ARMOURY', '276.164', '122.08', '1004.62', '316.392', '-170.296', '999.594', '10', '6', null, '0', null, null);
INSERT INTO `factiondoors` VALUES ('12', '2', '~r~SAFD Garage', '1179.29', '-1339.25', '13.8529', '2481.94', '2356.45', '10.5552', '0', '0', null, '1', '270.822', '266.51');
INSERT INTO `factiondoors` VALUES ('14', '1', 'LSCF', '1828.17', '-1538.12', '13.5402', '1819.21', '-1537.25', '13.3923', '0', '0', null, '1', '86.3569', '163.937');
INSERT INTO `factiondoors` VALUES ('16', '3', 'GOV-MANSION', '717.84', '-1276.61', '17.6484', '1299.01', '-796.396', '1084.01', '0', '5', null, '0', null, null);
INSERT INTO `factiondoors` VALUES ('17', '1', '~g~ELEVATOR SASD ~n~~b~(/enter)', '2268.09', '2448.24', '3.53125', '1557.39', '-1675.27', '28.3955', '0', '0', null, '0', null, null);
INSERT INTO `factiondoors` VALUES ('18', '2', '~r~SAFD', '2489.28', '2397.52', '10.8203', '143.074', '-1990.4', '2001.83', '0', '0', null, '0', null, null);
INSERT INTO `factiondoors` VALUES ('19', '1', 'OCSD~n~~w~GARAGE', '621.454', '-606.101', '17.233', '2313.83', '2445.88', '3.27344', '0', '0', null, '1', '91.7189', '264.332');

-- ----------------------------
-- Table structure for factions
-- ----------------------------
DROP TABLE IF EXISTS `factions`;
CREATE TABLE `factions` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `factionid` int(24) DEFAULT NULL,
  `name` varchar(64) DEFAULT NULL,
  `spawnx` float DEFAULT NULL,
  `spawny` float DEFAULT NULL,
  `spawnz` float DEFAULT NULL,
  `spawnint` int(64) DEFAULT NULL,
  `rank1` varchar(100) DEFAULT '',
  `rank2` varchar(100) DEFAULT '',
  `rank3` varchar(100) DEFAULT '',
  `rank4` varchar(100) DEFAULT '',
  `rank5` varchar(100) DEFAULT '',
  `rank6` varchar(100) DEFAULT NULL,
  `rank7` varchar(100) DEFAULT NULL,
  `rank8` varchar(100) DEFAULT NULL,
  `rank9` varchar(100) DEFAULT NULL,
  `rank10` varchar(100) DEFAULT NULL,
  `rank11` varchar(100) DEFAULT NULL,
  `rank12` varchar(100) DEFAULT NULL,
  `rank13` varchar(100) DEFAULT NULL,
  `rank14` varchar(100) DEFAULT NULL,
  `rank15` varchar(100) DEFAULT NULL,
  `rank16` varchar(100) DEFAULT NULL,
  `rank17` varchar(100) DEFAULT NULL,
  `rank18` varchar(100) DEFAULT NULL,
  `rank19` varchar(100) DEFAULT NULL,
  `rank20` varchar(100) DEFAULT NULL,
  `joinrank` int(11) DEFAULT NULL,
  `type` int(11) DEFAULT NULL,
  `rankamount` int(11) DEFAULT NULL,
  `chaton` int(11) DEFAULT NULL,
  `color` int(64) DEFAULT NULL,
  `uniformx` float DEFAULT NULL,
  `uniformy` float DEFAULT NULL,
  `uniformz` float DEFAULT NULL,
  `leaderrank` int(64) DEFAULT NULL,
  `shortname` varchar(24) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=15 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of factions
-- ----------------------------
INSERT INTO `factions` VALUES ('1', '1', 'Orange County Sheriff Department', '614.376', '-586.686', '17.2266', '0', 'Academy Student', 'Suspended Officer', 'Police Officer I', 'Police Officer II', 'Suspended Deputy', 'Academy Student', 'Deputy Guardian', 'Deputy Impounder', 'Deputy Sheriff Generalist', 'Deputy Sheriff I', 'Deputy Sheriff II', 'Corporal', 'Sergeant', 'Staff Sergeant', 'Lieutenant', 'Captain', 'Assistant Sheriff', 'Undersheriff', 'Sheriff', 'OOC', '9', '1', '20', '1', '0', '317.265', '-160.46', '999.594', '19', 'OCSD');
INSERT INTO `factions` VALUES ('2', '2', 'Orange County Fire Authority', '1217.36', '301.407', '19.5547', '0', 'Paramedic', 'Paramedic in Charge', 'Firefighter 1st', 'Firefighter/Paramedic', 'Engineer/Driver', 'Lieutenant', 'Captain', 'Battalion Chief', '1st Deputy Fire Commissioner', 'Fire Commissioner', 'Captain', 'Battalion Chief', 'Division Chief', 'Deputy Commissioner', 'Commissioner', 'None', 'None', 'None', 'None', 'None', '1', '1', '10', '1', '0', '3697.84', '-478.886', '3899.57', '12', 'OCFA');
INSERT INTO `factions` VALUES ('3', '3', 'Orange County Government', '2268.65', '-79.7343', '26.4535', '0', 'County Council', 'County Worker', 'Operational Supervisor', 'Welfare Official', 'Senior Welfare Ofiicial', 'Security Detail', 'Security Detail Supervisor', 'State Lawyer', 'State Judge', 'Deputy Director', 'Director', 'Mayor', 'Chief of Staff', 'Governator', 'None', 'None', 'None', 'None', 'None', 'None', '1', '5', '14', '1', '0', '914.779', '2365.63', '249.892', '14', 'GOV');
INSERT INTO `factions` VALUES ('4', '4', 'SAN ANDREAS NEWTORK', '0', '0', '0', '0', 'Editor', 'Jurnalist', 'Reporter', 'Promoter', 'Team Manager', 'Director General', '', '', '', '', '', '', '', '', '', '', '', '', '', '', '1', '1', '10', '1', '0', '256.007', '1778.28', '701.086', '6', 'SANews');
INSERT INTO `factions` VALUES ('11', '5', 'SLOT LIBER', '0', '0', '0', '0', 'Shestyorka', 'Boevik', 'Brigadier', 'Sovietnik', 'Pakhan', 'Veteran', 'Vice-President', 'President', '', '', '', '', '', '', '', '', '', '', '', '', '1', '2', '8', '1', '0', '0', '0', '0', '5', 'Warlocks MC');
INSERT INTO `factions` VALUES ('12', '6', 'SLOT LIBER', '0', '0', '0', '0', 'Pee-Wee', 'Soldado', 'Chola', 'Gangster', 'Double OG', 'Right Hand', 'Shotcaller', 'Veteran', '', '', '', '', '', '', '', '', '', '', '', '', '1', '2', '8', '1', '0', '0', '0', '0', '7', 'COxCH');
INSERT INTO `factions` VALUES ('13', '7', 'SLOT LIBER', '0', '0', '0', '0', 'Night-Hawk', 'Klokan', 'Klexter', 'Klarogo', 'Kladd', 'Klabee', 'Kligrapp', 'Kludd', 'Klokard', 'Klaliff', 'Terror', 'Exalted Cyclop', '', '', '', '', '', '', '', '', '1', '2', '9', '1', '0', '0', '0', '0', '12', 'KKK');
INSERT INTO `factions` VALUES ('14', '8', 'SLOT LIBER', '0', '0', '0', '0', 'Former', 'Solider', 'Hitman', 'Lieutenant', 'Enforcer', 'OG', 'Shotcaller', '', '', '', '', '', '', '', '', '', '', '', '', '', '1', '2', '7', '1', '0', '0', '0', '0', '7', null);

-- ----------------------------
-- Table structure for foodstands
-- ----------------------------
DROP TABLE IF EXISTS `foodstands`;
CREATE TABLE `foodstands` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `info` varchar(255) DEFAULT NULL,
  `posx` float DEFAULT NULL,
  `posy` float DEFAULT NULL,
  `posz` float DEFAULT NULL,
  `posrx` float DEFAULT NULL,
  `posry` float DEFAULT NULL,
  `posrz` float DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of foodstands
-- ----------------------------

-- ----------------------------
-- Table structure for furnitures
-- ----------------------------
DROP TABLE IF EXISTS `furnitures`;
CREATE TABLE `furnitures` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `model` int(128) DEFAULT NULL,
  `name` varchar(255) CHARACTER SET latin1 DEFAULT NULL,
  `houseid` int(64) DEFAULT NULL,
  `interior` int(11) DEFAULT NULL,
  `virworld` int(11) DEFAULT NULL,
  `marketprice` int(64) DEFAULT NULL,
  `posx` float DEFAULT NULL,
  `posy` float DEFAULT NULL,
  `posz` float DEFAULT NULL,
  `posrx` float DEFAULT NULL,
  `posry` float DEFAULT NULL,
  `posrz` float DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of furnitures
-- ----------------------------

-- ----------------------------
-- Table structure for gates
-- ----------------------------
DROP TABLE IF EXISTS `gates`;
CREATE TABLE `gates` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `model` int(255) DEFAULT NULL,
  `faction` int(64) DEFAULT NULL,
  `posx` float DEFAULT NULL,
  `posy` float DEFAULT NULL,
  `posz` float DEFAULT NULL,
  `posrx` float DEFAULT NULL,
  `posry` float DEFAULT NULL,
  `posrz` float DEFAULT NULL,
  `openspeed` float DEFAULT NULL,
  `movex` float DEFAULT NULL,
  `movey` float DEFAULT NULL,
  `movez` float DEFAULT NULL,
  `moverx` float DEFAULT NULL,
  `movery` float DEFAULT NULL,
  `moverz` float DEFAULT NULL,
  `interior` int(11) DEFAULT NULL,
  `virworld` int(64) DEFAULT NULL,
  `name` varchar(255) DEFAULT NULL,
  `sound` int(64) DEFAULT NULL,
  `soundlength` int(64) DEFAULT NULL,
  `autoclose` int(64) DEFAULT NULL,
  `cloaselength` int(64) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of gates
-- ----------------------------
INSERT INTO `gates` VALUES ('1', '968', '3', '2253.81', '-87.8349', '26.3444', '0', '-91.1', '0', '1', '0', '0', null, '0', '-75', '0', '0', '0', 'PALOMINO-GOV', null, null, null, null);
INSERT INTO `gates` VALUES ('2', '3036', '1', '1056.07', '-344.721', '74.7022', '0', '0', '176.678', '5', '0', '0', null, null, null, null, '0', '0', 'OCSD IMPOUND', null, null, null, null);

-- ----------------------------
-- Table structure for gps
-- ----------------------------
DROP TABLE IF EXISTS `gps`;
CREATE TABLE `gps` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `name` varchar(100) NOT NULL DEFAULT 'None',
  `x` float NOT NULL DEFAULT '0',
  `y` float NOT NULL DEFAULT '0',
  `z` float NOT NULL DEFAULT '0',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=11 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of gps
-- ----------------------------
INSERT INTO `gps` VALUES ('1', 'Primarie Palomino Creek', '2263.74', '-78.9402', '26.5391');
INSERT INTO `gps` VALUES ('2', 'Banca Palomino', '2301.01', '-15.61', '26.4844');
INSERT INTO `gps` VALUES ('3', 'Palomino 24/7', '2243.77', '52.4503', '26.6671');
INSERT INTO `gps` VALUES ('4', '[Job] Trash - Palomino', '2405.82', '82.7489', '26.4739');
INSERT INTO `gps` VALUES ('5', 'Fishing Place', '2102.16', '-104.869', '2.24392');
INSERT INTO `gps` VALUES ('6', 'Skate Park - Blueberry', '106.001', '-198.894', '1.51798');
INSERT INTO `gps` VALUES ('7', '[Job] Fermier - Blueberry Farm', '-112.847', '-9.92078', '3.1094');
INSERT INTO `gps` VALUES ('8', 'Dealership - Dillimore', '638.31', '-499.923', '16.3359');
INSERT INTO `gps` VALUES ('9', 'Binco', '2302.02', '14.3638', '26.4844');
INSERT INTO `gps` VALUES ('10', '[JOB] Trucker', '-50.1101', '-233.43', '6.76462');

-- ----------------------------
-- Table structure for gstations
-- ----------------------------
DROP TABLE IF EXISTS `gstations`;
CREATE TABLE `gstations` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `posx` float DEFAULT NULL,
  `posy` float DEFAULT NULL,
  `posz` float DEFAULT NULL,
  `price` int(255) DEFAULT NULL,
  `info` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of gstations
-- ----------------------------
INSERT INTO `gstations` VALUES ('1', '1382.2', '461.719', '20.1024', '2', 'Gas Station');
INSERT INTO `gstations` VALUES ('2', '658.388', '-570.031', '16.3359', '2', 'Dilimore Gas');
INSERT INTO `gstations` VALUES ('3', '653.188', '-569.782', '16.3359', '2', 'Dilimore Gas');
INSERT INTO `gstations` VALUES ('4', '1380.53', '457.479', '19.9218', '2', 'Dilimore Gas');

-- ----------------------------
-- Table structure for houses
-- ----------------------------
DROP TABLE IF EXISTS `houses`;
CREATE TABLE `houses` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `posx` float DEFAULT NULL,
  `posy` float DEFAULT NULL,
  `posz` float DEFAULT NULL,
  `exitx` float DEFAULT NULL,
  `exity` float DEFAULT NULL,
  `exitz` float DEFAULT NULL,
  `info` varchar(255) DEFAULT NULL,
  `owner` varchar(255) DEFAULT NULL,
  `owned` int(11) DEFAULT NULL,
  `locked` int(11) DEFAULT NULL,
  `price` int(64) DEFAULT NULL,
  `levelbuy` int(64) DEFAULT NULL,
  `rentprice` int(64) DEFAULT NULL,
  `rentable` int(64) DEFAULT NULL,
  `interior` int(64) DEFAULT NULL,
  `world` int(64) DEFAULT NULL,
  `cash` int(255) DEFAULT NULL,
  `furnitures` int(64) DEFAULT NULL,
  `weapons` text,
  `checkx` float DEFAULT NULL,
  `checky` float DEFAULT NULL,
  `checkz` float DEFAULT NULL,
  `radio` int(11) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=651 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of houses
-- ----------------------------
INSERT INTO `houses` VALUES ('1', '252.789', '-92.431', '3.53539', '-48.8713', '1458.55', '1085.61', 'El Corona street', 'Svetomir_Blagoje', '1', '0', '30000', '3', '0', '0', '10', '0', '0', '0', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('2', '252.72', '-121.143', '3.53539', '2364.16', '-1074.57', '1047.77', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '2', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('3', '253.914', '-163.967', '5.07861', '-48.7973', '1458.51', '1085.61', 'El Corona street', 'Raven_Hudson', '1', '0', '30000', '3', '10', '1', '10', '2', '0', '1', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('4', '242.467', '-166.533', '1.57812', '290.804', '1242.85', '1082.68', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '3', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('5', '267.806', '-54.5465', '2.77721', '326.194', '1075.42', '1082.25', 'El Corona street', 'Statul', '0', '1', '30000', '3', '0', '0', '10', '4', '0', '56', '0=0|0=0|0=0|0=0|0=0', '325.783', '1079.24', '1082.25', '0');
INSERT INTO `houses` VALUES ('6', '295.077', '-54.5453', '2.77721', '191.309', '1289.4', '1082.14', 'El Corona street', 'Statul', '0', '1', '30000', '3', '0', '0', '10', '5', '0', '29', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('7', '248.391', '-33.3038', '1.57812', '244.093', '1146.22', '1081.17', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '6', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('8', '252.969', '-22.2816', '1.63391', '-80.0224', '1383.56', '1078.96', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '8', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('10', '286.061', '41.1449', '2.54844', '244.103', '1146', '1081.17', 'El Corona street', 'Jewan_Robwon', '1', '0', '30000', '3', '1', '0', '10', '8', '0', '68', '0=0|0=0|0=0|0=0|0=0', '243.241', '1160.09', '1081.17', '0');
INSERT INTO `houses` VALUES ('11', '308.845', '44.2821', '3.08797', '2364.15', '-1074.37', '1047.77', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '9', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('12', '317.764', '54.6468', '3.375', '295.115', '1285.63', '1078.45', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '10', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('13', '342.688', '62.6106', '3.86269', '2261.43', '-1121.05', '1048.88', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '11', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('14', '316.7', '18.2948', '4.51562', '-79.9714', '1383.67', '1078.96', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '12', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('15', '340.002', '33.6886', '6.40893', '-49.0098', '1458.38', '1085.61', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '13', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('16', '312.722', '-92.3678', '3.53539', '2261.31', '-1121.05', '1048.88', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '14', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('18', '312.728', '-121.214', '3.53539', '290.85', '1242.94', '1082.68', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '16', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('19', '273.171', '-195.443', '1.57045', '244.184', '1146.2', '1081.17', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '15', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('20', '209.084', '-112.611', '1.55078', '329.329', '1513.16', '1085.82', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '17', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('21', '201.537', '-120.233', '1.55145', '-48.7016', '1458.46', '1085.61', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '18', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('22', '189.444', '-120.233', '1.5485', '2364.29', '-1074.42', '1047.77', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '19', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('23', '178.587', '-120.234', '1.54888', '-49.1627', '1458.43', '1085.61', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '20', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('24', '166.361', '-120.233', '1.55485', '-79.9651', '1384.47', '1078.96', 'El Corona street', 'Statul', '0', '1', '30000', '3', '0', '0', '10', '21', '0', '6', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('25', '158.632', '-112.474', '1.55671', '2364.16', '-1074.71', '1047.77', 'El Corona street', 'Statul', '0', '1', '30000', '3', '0', '0', '10', '22', '0', '36', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('26', '158.631', '-102.541', '1.55671', '390.115', '1505.76', '1080.1', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '23', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('27', '166.223', '-94.9724', '1.55492', '-48.7946', '1458.49', '1085.61', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '24', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('28', '201.401', '-94.9745', '1.55495', '-48.5705', '1458.52', '1085.61', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '25', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('29', '206.741', '-112.237', '4.89647', '-48.5627', '1458.39', '1085.61', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '26', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('31', '201.432', '-118.231', '4.89647', '-48.9719', '1458.43', '1085.61', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '27', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('32', '178.186', '-118.231', '4.89647', '2364.02', '-1074.13', '1047.77', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '28', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('33', '166.117', '-118.234', '4.89647', '-79.9506', '1383.77', '1078.96', 'East LS', 'Statul', '0', '1', '30000', '3', '0', '0', '10', '29', '0', '23', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('34', '160.636', '-112.74', '4.89647', '-79.9506', '1383.77', '1078.96', 'East LS', 'Statul', '0', '1', '30000', '3', '0', '0', '10', '30', '0', '27', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('35', '160.635', '-102.663', '4.89647', '-49.0386', '1458.43', '1085.61', 'East LS', 'The State', '0', '0', '30000', '3', '0', '0', '10', '31', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('36', '166.253', '-96.9721', '4.89647', '79.9644', '1384.47', '1078.96', 'East LS', 'The State', '0', '0', '30000', '3', '0', '0', '10', '32', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('37', '178.328', '-96.9724', '4.89647', '390.038', '1505.79', '1080.1', 'East LS', 'The State', '0', '0', '30000', '3', '0', '0', '10', '33', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('38', '189.494', '-96.9728', '4.89647', '390.038', '1505.79', '1080.1', 'East LS', 'Statul', '0', '1', '30000', '3', '0', '0', '10', '34', '0', '18', '0=0|0=0|0=0|0=0|0=0', '385.831', '1489.63', '1080.1', '0');
INSERT INTO `houses` VALUES ('39', '201.475', '-96.9724', '4.89647', '2261.17', '-1121.06', '1048.88', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '35', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('40', '253.682', '-274.446', '1.58358', '2261.17', '-1121.06', '1048.88', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '36', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('43', '261.963', '-269.993', '1.64049', '2261.17', '-1121.06', '1048.88', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '37', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('44', '264.217', '-283.422', '1.57812', '2261.17', '-1121.06', '1048.88', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '38', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('45', '260.308', '-303.32', '1.91837', '-79.9699', '1384.58', '1078.96', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '39', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('46', '253.25', '-289.761', '1.70299', '-49.0387', '1458.43', '1085.61', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '40', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('47', '235.602', '-309.161', '1.57812', '45.0835', '1439.32', '1082.41', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '41', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('48', '226.588', '-302.81', '1.92618', '289.983', '1502.55', '1078.42', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '42', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('49', '242.364', '-298.6', '1.68737', '448.284', '1355.15', '1082.22', 'El Corona street', 'Ally_Connor', '1', '1', '30000', '3', '0', '0', '10', '43', '0', '37', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('50', '241.452', '-282.517', '1.63268', '2370.66', '-1095.73', '1049.62', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '44', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('54', '745.675', '-590.974', '18.0129', '45.489', '1439.43', '1082.41', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '45', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('55', '745.078', '-556.78', '18.0129', '45.489', '1439.43', '1082.41', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '46', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('58', '766.885', '-556.782', '18.0129', '390.092', '1505.91', '1080.09', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '47', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('60', '742.93', '-509.322', '18.0129', '390.092', '1505.91', '1080.09', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '48', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('61', '768.174', '-503.492', '18.0129', '289.888', '1501.96', '1078.42', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '49', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('63', '1283.41', '158.441', '20.7934', '289.888', '1501.96', '1078.42', 'Montgomery Trailer', 'The State', '0', '0', '30000', '3', '0', '0', '10', '50', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('64', '1294.36', '157.491', '20.467', '-79.9933', '1384.06', '1078.96', 'Montgomery Trailer', 'The State', '0', '1', '30000', '3', '0', '0', '10', '51', '0', '26', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('65', '1299.15', '140.403', '20.5389', '244.144', '1145.94', '1081.17', 'Montgomery Trailer', 'The State', '0', '0', '30000', '3', '0', '0', '10', '52', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('66', '1307.56', '153.278', '20.3939', '-49.0386', '1458.43', '1085.61', 'Montgomery Trailer', 'The State', '0', '1', '30000', '3', '0', '0', '10', '53', '0', '24', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('67', '1311.77', '169.624', '20.6311', '244.144', '1145.94', '1081.17', 'Montgomery Trailer', 'The State', '0', '0', '30000', '3', '0', '0', '10', '54', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('68', '1315.86', '180.068', '20.4609', '375.907', '1378.62', '1079.8', 'Montgomery Trailer', 'The State', '0', '1', '30000', '2', '0', '0', '10', '56', '0', '73', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('69', '1303.57', '186.152', '20.5389', '290.171', '1502.3', '1078.42', 'Montgomery Trailer', 'The State', '0', '1', '30000', '1', '0', '0', '10', '56', '0', '36', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('70', '1300.47', '193.087', '20.4609', '329.349', '1513.98', '1085.82', 'Montgomery Trailer', 'The State', '0', '1', '30000', '3', '0', '0', '10', '57', '0', '41', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('71', '1295.25', '174.681', '20.9106', '374.822', '1378.46', '1079.8', 'Montgomery Trailer', 'The State', '0', '1', '30000', '3', '0', '0', '10', '58', '0', '40', '0=0|4=1|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('72', '1243.25', '217.459', '23.0555', '389.72', '1505.8', '1080.1', 'Montgomery ', 'Statul', '0', '1', '30000', '3', '0', '0', '10', '59', '0', '40', '0=0|0=0|0=0|0=0|0=0', '377.805', '1496.11', '1080.09', '0');
INSERT INTO `houses` VALUES ('73', '1264.49', '285.176', '19.5547', '290.12', '1502.24', '1078.42', 'Montgomery ', 'The State', '0', '0', '30000', '3', '0', '0', '10', '60', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('74', '1272.07', '309.338', '19.5547', '2149.96', '-1216.9', '1049.12', 'Montgomery ', 'The State', '0', '0', '30000', '3', '0', '0', '10', '61', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('75', '1281.44', '305.254', '19.5547', '2149.9', '-1217.29', '1049.12', 'Montgomery ', 'The State', '0', '1', '30000', '3', '0', '0', '10', '62', '0', '19', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('76', '1403.07', '333.873', '18.9062', '2149.9', '-1217.29', '1049.12', 'Montgomery ', 'The State', '0', '1', '30000', '3', '0', '0', '10', '63', '0', '39', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('77', '1415.85', '324.587', '18.8438', '244.208', '1146.2', '1081.17', 'Montgomery ', 'The State', '0', '0', '30000', '3', '0', '0', '10', '64', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('78', '1434.91', '334.826', '18.9469', '244.208', '1146.2', '1081.17', 'El Corona street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '65', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('79', '1461.14', '342.481', '18.9531', '289.833', '1502.16', '1078.42', 'Montgomery ', 'The State', '0', '0', '25000', '3', '0', '0', '10', '66', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('80', '1469.68', '351.448', '18.9247', '289.833', '1502.16', '1078.42', 'Montgomery ', 'The State', '0', '0', '25000', '3', '0', '0', '10', '67', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('81', '1488.59', '360.941', '19.412', '289.833', '1502.16', '1078.42', 'Montgomery ', 'The State', '0', '0', '25000', '3', '0', '0', '10', '68', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('82', '1475.36', '372.732', '19.6562', '295.077', '1285.49', '1078.45', 'Montgomery ', 'The State', '0', '0', '25000', '3', '0', '0', '10', '69', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('83', '1465.88', '364.138', '19.2631', '295.077', '1285.49', '1078.45', 'Montgomery ', 'The State', '0', '0', '25000', '3', '0', '0', '10', '70', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('84', '1451.64', '375.763', '19.4005', '329.368', '1513.13', '1085.82', 'Montgomery ', 'The State', '0', '0', '25000', '3', '0', '0', '10', '71', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('85', '1447.35', '361.826', '18.9087', '329.368', '1513.13', '1085.82', 'Montgomery ', 'The State', '0', '0', '25000', '3', '0', '0', '10', '72', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('86', '1428.43', '356.517', '18.875', '329.368', '1513.13', '1085.82', 'Montgomery ', 'The State', '0', '1', '25000', '3', '0', '0', '10', '73', '0', '5', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('87', '1419.59', '389.455', '19.3297', '329.368', '1513.13', '1085.82', 'Montgomery ', 'The State', '0', '0', '25000', '3', '0', '0', '10', '74', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('88', '1413.13', '363.098', '19.1992', '-79.9491', '1383.87', '1078.96', 'Montgomery ', 'The State', '0', '1', '30000', '3', '0', '0', '10', '75', '0', '0', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('89', '1409.32', '346.873', '19.252', '191.1', '1288.84', '1082.14', 'Montgomery ', 'The State', '0', '1', '30000', '3', '0', '0', '10', '77', '0', '75', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('90', '1231.16', '361.906', '19.5547', '375.908', '1378.51', '1079.8', 'Idlewood street', 'Angelo_Caltagirone', '1', '0', '30000', '3', '0', '0', '10', '78', '0', '94', '0=0|0=0|0=0|0=0|0=0', '363.089', '1381.94', '1079.81', '0');
INSERT INTO `houses` VALUES ('91', '1374.97', '475.126', '20.0524', '-79.9491', '1383.87', '1078.96', 'Idlewood street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '78', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('92', '748.131', '257.098', '27.0859', '389.914', '1505.8', '1080.1', 'Idlewood street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '79', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('93', '747.115', '278.244', '27.2188', '2364.25', '-1074.05', '1047.77', 'Idlewood street', 'Agatino_Trentini', '1', '1', '30000', '3', '0', '0', '10', '80', '0', '22', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('94', '723.663', '269.676', '22.4531', '2313.18', '-1229.99', '1047.41', 'Idlewood street', 'Statul', '0', '1', '30000', '3', '0', '0', '10', '81', '0', '0', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('95', '705.404', '292.094', '20.4219', '-79.9491', '1383.87', '1078.96', 'Idlewood street', 'Statul', '0', '1', '30000', '3', '0', '0', '10', '82', '0', '0', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('96', '719.055', '300.687', '20.3766', '2262.01', '-1121.38', '1048.88', 'Idlewood street', 'Statul', '0', '1', '30000', '3', '0', '0', '10', '83', '0', '0', '0=0|0=0|0=0|0=0|0=0', '2261.4', '-1127.37', '1048.88', '0');
INSERT INTO `houses` VALUES ('97', '746.399', '305.004', '20.2344', '-49.0387', '1458.43', '1085.61', 'Idlewood street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '84', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('98', '748.419', '350.894', '20.5858', '-79.7763', '1383.89', '1078.96', 'Idlewood street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '85', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('99', '772.903', '348.366', '20.1527', '-79.9491', '1383.87', '1078.96', 'Idlewood street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '86', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('100', '783.914', '352.59', '19.5938', '-49.0387', '1458.43', '1085.61', 'Idlewood street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '87', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('101', '805.41', '358.363', '19.7621', '43.0151', '1439.27', '1082.41', 'Idlewood street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '88', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('102', '808.071', '372.303', '19.453', '295.173', '1285.65', '1078.45', 'Idlewood street', 'Granville_Bradley', '1', '1', '30000', '3', '0', '0', '10', '89', '0', '-1', '0=0|0=0|0=0|0=0|0=0', '294.869', '1288.21', '1078.45', '0');
INSERT INTO `houses` VALUES ('103', '783.23', '377.647', '21.2967', '-79.7763', '1383.89', '1078.96', 'Idlewood street', 'Statul', '0', '1', '30000', '3', '0', '0', '10', '90', '0', '-1', '0=0|0=0|0=0|0=0|0=0', '-80.0195', '1384.29', '1078.96', '0');
INSERT INTO `houses` VALUES ('104', '758.905', '375.072', '23.3922', '-80.1247', '1383.63', '1078.96', 'Idlewood street', 'Statul', '0', '1', '30000', '3', '0', '0', '10', '91', '0', '17', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('105', '751.725', '375.218', '23.3749', '2262.01', '-1121.38', '1048.88', 'Idlewood street', 'Statul', '0', '1', '30000', '3', '0', '0', '10', '92', '0', '0', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('106', '1297.77', '291.587', '19.5469', '2364.25', '-1074.05', '1047.77', 'Montgomery ', 'The State', '0', '0', '30000', '3', '0', '0', '10', '93', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('107', '1300.76', '298.428', '19.5469', '2313.18', '-1229.99', '1047.41', 'Montgomery ', 'The State', '0', '0', '30000', '3', '0', '0', '10', '94', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('108', '1301.98', '301.251', '19.5469', '-80.1247', '1383.63', '1078.96', 'Montgomery ', 'The State', '0', '0', '30000', '3', '0', '0', '10', '95', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('109', '1566.95', '25.6059', '24.1641', '-49.0387', '1458.43', '1085.61', 'Idlewood street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '96', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('111', '1546.33', '32.2634', '24.1406', '-48.5867', '1458.43', '1085.61', 'Willowfield street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '97', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('112', '1257.34', '241.88', '19.9111', '389.914', '1505.8', '1080.1', 'Idlewood street', 'Statul', '0', '1', '30000', '3', '0', '0', '10', '98', '0', '19', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('113', '1926.96', '170.54', '37.2812', '-48.5867', '1458.43', '1085.61', 'Willowfield street', 'The State', '0', '0', '75000', '3', '0', '0', '10', '99', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('115', '2551.22', '57.2704', '27.6756', '289.961', '1502.29', '1078.42', 'Willowfield street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '100', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('116', '2551.22', '91.7511', '27.6756', '2370.48', '-1095.02', '1049.62', 'Willowfield street', 'Bogdan_Pokrovsky', '1', '0', '25000', '3', '30', '1', '10', '101', '0', '68', '0=0|0=0|0=0|0=0|0=0', '2370.48', '-1095.02', '1049.62', '0');
INSERT INTO `houses` VALUES ('117', '2536.2', '128.988', '27.6835', '2149.97', '-1216.93', '1049.12', 'Willowfield street', 'Statul', '0', '1', '25000', '3', '0', '0', '10', '102', '0', '8', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('118', '2518.42', '128.988', '27.6756', '2149.97', '-1216.93', '1049.12', 'Willowfield street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '103', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('121', '2480.61', '126.995', '27.6756', '2149.97', '-1216.93', '1049.12', 'Willowfield street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '104', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('122', '2458.87', '128.988', '27.6756', '2149.88', '-1217.06', '1049.12', 'Ganton street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '105', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('123', '2443.85', '92.2792', '28.4416', '-79.9563', '1384.47', '1078.96', 'Idlewood street', 'The State', '0', '0', '50000', '3', '0', '0', '10', '106', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('125', '2479.34', '94.5781', '27.6835', '-49.0374', '1458.42', '1085.61', 'Idlewood street', 'The State', '0', '0', '50000', '3', '0', '0', '10', '107', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('127', '2513.96', '94.3949', '27.6835', '42.9482', '1439.27', '1082.41', 'Idlewood street', 'Statul', '0', '1', '50000', '3', '0', '0', '10', '108', '0', '0', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('129', '2518.62', '58.3559', '27.6835', '2313.37', '-1229.86', '1047.41', 'Idlewood street', 'The State', '0', '0', '80000', '3', '0', '0', '10', '110', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('130', '2481.22', '64.4502', '27.6835', '-80.1262', '1384.09', '1078.96', 'Idlewood street', 'The State', '0', '0', '80000', '3', '0', '0', '10', '111', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('131', '2488.44', '11.7629', '28.4416', '290.02', '1502.22', '1078.42', 'Ganton street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '112', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('132', '2509.49', '11.7627', '28.4416', '326.266', '1075.49', '1082.25', 'Ganton street', 'Statul', '0', '1', '40000', '3', '0', '0', '10', '113', '0', '40', '0=0|0=0|0=0|0=0|0=0', '312.78', '1085.2', '1082.25', '0');
INSERT INTO `houses` VALUES ('133', '2549.23', '25.0494', '27.6756', '326.266', '1075.49', '1082.25', 'Ganton street', 'Kayden_Lamar', '1', '1', '40000', '3', '0', '0', '10', '114', '0', '0', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('134', '2551.22', '-5.39092', '27.6756', '329.379', '1513.37', '1085.82', 'Ganton street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '115', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('135', '2513.41', '-28.4027', '28.4416', '45.4904', '1439.39', '1082.41', 'Ganton street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '116', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('136', '2484.46', '-28.4037', '28.4416', '2370.5', '-1095.16', '1049.62', 'Ganton street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '117', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('137', '65.0059', '1005.23', '13.7607', '289.858', '1502.29', '1078.42', 'Ganton street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '118', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('138', '70.3683', '973.812', '15.7709', '-48.6932', '1458.53', '1085.61', 'Ganton street', 'Eric_Ordonez', '1', '0', '40000', '3', '0', '1', '10', '119', '0', '28', '5=1|0=0|0=0|0=0|0=0', '-42.7143', '1454.32', '1085.61', '0');
INSERT INTO `houses` VALUES ('139', '22.856', '968.126', '19.8364', '-48.6932', '1458.53', '1085.61', 'Ganton street', 'Statul', '0', '1', '40000', '3', '0', '0', '10', '120', '0', '7', '0=0|0=0|0=0|0=0|0=0', '-52.106', '1459.65', '1085.61', '0');
INSERT INTO `houses` VALUES ('140', '20.607', '948.827', '20.3168', '375.536', '1378.52', '1079.8', 'Ganton street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '121', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('141', '31.4066', '923.858', '23.6009', '-80.0259', '1383.22', '1078.96', 'Willowfield', 'Carlos_Chilton', '1', '0', '20000', '3', '0', '0', '10', '123', '0', '7', '0=0|0=0|0=0|0=0|0=0', '-74.9531', '1397.73', '1078.96', '0');
INSERT INTO `houses` VALUES ('142', '17.8278', '908.975', '23.9577', '509.633', '1355.54', '1076.79', 'Ganton street', 'Kevin_Alonso', '1', '1', '40000', '3', '1', '1', '10', '123', '0', '0', '0=0|0=0|0=0|0=0|0=0', '509.593', '1367.81', '1080.94', '0');
INSERT INTO `houses` VALUES ('143', '-4.15531', '950.988', '19.7031', '-48.7988', '1458.44', '1085.61', 'Ganton street', 'Montrell_Wright', '1', '0', '40000', '3', '100', '1', '10', '124', '0', '25', '0=0|0=0|0=0|0=0|0=0', '-47.0237', '1455.43', '1085.62', '0');
INSERT INTO `houses` VALUES ('144', '-15.3765', '934.293', '21.1059', '-79.9832', '1384.2', '1078.96', 'Ganton street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '125', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('145', '-37.679', '962.421', '20.0512', '290.084', '1502.23', '1078.42', 'Ganton street', 'Statul', '0', '1', '40000', '3', '0', '0', '10', '126', '0', '44', '0=0|0=0|0=0|0=0|0=0', '290.195', '1501.63', '1078.42', '0');
INSERT INTO `houses` VALUES ('146', '-12.8441', '974.827', '19.7966', '389.653', '1505.8', '1080.1', 'Ganton street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '127', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('147', '-66.9569', '971.52', '19.8865', '375.536', '1378.52', '1079.8', 'Ganton street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '128', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('148', '-92.7075', '970.008', '19.9815', '82.9707', '1272.71', '1079.88', 'Ganton street', 'Johnny_Alonso', '1', '0', '40000', '3', '100', '1', '10', '129', '0', '17', '0=0|0=0|0=0|0=0|0=0', '88.2847', '1280.07', '1079.88', '0');
INSERT INTO `houses` VALUES ('149', '-56.508', '935.257', '21.2074', '2364.26', '-1073.71', '1047.77', 'Ganton street', 'Statul', '0', '1', '40000', '3', '0', '0', '10', '130', '0', '6', '0=0|0=0|0=0|0=0|0=0', '2364.61', '-1068.02', '1047.77', '0');
INSERT INTO `houses` VALUES ('150', '-54.5955', '918.717', '22.3715', '-80.1747', '1384.61', '1078.96', 'Ganton street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '131', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('151', '-52.9108', '894.157', '22.3871', '-49.0692', '1458.52', '1085.61', 'Ganton street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '132', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('152', '-83.0201', '933.128', '20.6929', '448.079', '1355.36', '1082.22', 'Ganton street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '133', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('153', '-86.6739', '915.889', '21.0936', '-79.9832', '1384.2', '1078.96', 'Ganton street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '134', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('154', '-91.9034', '887.159', '21.2543', '389.653', '1505.8', '1080.1', 'Ganton street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '135', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('155', '-121.021', '857.508', '18.5824', '2364.26', '-1073.71', '1047.77', 'Ganton street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '136', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('156', '-123.118', '874.793', '18.7309', '329.607', '1513.46', '1085.82', 'Ganton street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '137', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('157', '-152.523', '881.714', '18.4396', '290.084', '1502.23', '1078.42', 'Ganton street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '138', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('158', '-153.253', '907.111', '19.3012', '82.8588', '1272.38', '1079.89', 'Jefferson street', 'Mark_Barrington', '1', '1', '30000', '3', '0', '0', '10', '139', '0', '30', '0=0|0=0|0=0|0=0|0=0', '84.7137', '1277.34', '1079.88', '0');
INSERT INTO `houses` VALUES ('159', '-151.205', '933.982', '19.7231', '-79.9832', '1384.2', '1078.96', 'Ganton street', 'Marshall_Teller', '1', '1', '40000', '3', '0', '0', '10', '140', '0', '5', '0=0|0=0|0=0|0=0|0=0', '-79.0674', '1384.94', '1078.96', '0');
INSERT INTO `houses` VALUES ('160', '-123.446', '917.711', '19.9567', '390.281', '1505.84', '1080.1', 'Jefferson street', 'Statul', '0', '1', '50000', '3', '0', '0', '10', '141', '0', '98', '0=0|0=0|0=0|0=0|0=0', '376.024', '1496.72', '1080.09', '0');
INSERT INTO `houses` VALUES ('161', '-127.428', '974.476', '19.8516', '390.281', '1505.84', '1080.1', 'Jefferson street', 'Statul', '0', '1', '30000', '3', '0', '0', '10', '142', '0', '1', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('162', '-32.201', '1038.67', '20.9399', '390.281', '1505.84', '1080.1', 'Jefferson street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '143', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('163', '-45.0774', '1081.07', '20.9399', '329.282', '1513.3', '1085.82', 'Jefferson street', 'Lola_Fuentes', '1', '0', '30000', '3', '0', '0', '10', '144', '0', '55', '0=0|0=0|0=0|0=0|0=0', '330.337', '1513.48', '1085.82', '0');
INSERT INTO `houses` VALUES ('164', '1.75347', '1076.04', '20.9399', '329.282', '1513.3', '1085.82', 'Jefferson street', 'Statul', '0', '1', '30000', '3', '0', '0', '10', '145', '0', '0', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('165', '12.7174', '1113.67', '20.9399', '244.315', '1146.12', '1081.17', 'Jefferson street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '146', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('167', '-18.3097', '1115.67', '20.9399', '244.315', '1146.12', '1081.17', 'Jefferson street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '147', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('168', '-35.9868', '1115.67', '20.9399', '244.315', '1146.12', '1081.17', 'Jefferson street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '148', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('169', '-234.289', '1051.94', '19.8671', '390.122', '1505.89', '1080.09', 'Jefferson street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '149', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('170', '-247.87', '1001.08', '20.9399', '390.122', '1505.89', '1080.09', 'Jefferson street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '150', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('171', '672.065', '-646.91', '16.3359', '390.122', '1505.89', '1080.09', 'Jefferson street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '151', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('172', '672.064', '-634.958', '16.3359', '289.987', '1502.17', '1078.42', 'Idlewood street', 'Statul', '0', '1', '20000', '3', '0', '0', '10', '152', '0', '0', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('176', '672.074', '-627.899', '16.3359', '289.987', '1502.17', '1078.42', 'Idlewood street', 'Statul', '0', '1', '20000', '3', '0', '0', '10', '153', '0', '65', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('177', '691.363', '-640.516', '16.3221', '289.987', '1502.17', '1078.42', 'Idlewood street', 'Daryl_Grimes', '1', '1', '20000', '3', '0', '0', '10', '154', '0', '33', '0=0|0=0|0=0|0=0|0=0', '289.406', '1509.44', '1078.42', '0');
INSERT INTO `houses` VALUES ('178', '691.362', '-633.027', '16.3359', '45.5492', '1439.29', '1082.41', 'Idlewood street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '155', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('179', '691.361', '-614.275', '16.3359', '45.5492', '1439.29', '1082.41', 'Idlewood street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '156', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('181', '694.974', '-500.132', '16.3359', '45.5492', '1439.29', '1082.41', 'Idlewood street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '157', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('182', '701.777', '-494.787', '16.3359', '-79.8681', '1383.95', '1078.96', 'Jeffreson street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '158', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('183', '870.279', '-24.8874', '63.9939', '-48.8929', '1458.58', '1085.61', 'Jeffreson street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '159', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('184', '1113.67', '-304.153', '74.5883', '329.307', '1513.75', '1085.82', 'Jeffreson street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '160', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('185', '2203.85', '62.1687', '28.4416', '-48.8929', '1458.58', '1085.61', 'Jeffreson street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '161', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('186', '2203.85', '106.071', '28.4416', '329.307', '1513.75', '1085.82', 'Jeffreson street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '162', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('187', '2236.68', '168.299', '28.1535', '329.229', '1513.08', '1085.82', 'Glenpark street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '163', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('188', '2257.84', '168.331', '28.1536', '-79.8681', '1383.95', '1078.96', 'Jeffreson street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '164', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('189', '2285.8', '161.77', '28.4416', '329.229', '1513.08', '1085.82', 'Glenpark street', 'Artus_Dupont', '1', '1', '40000', '3', '0', '0', '10', '165', '0', '0', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('190', '2269.33', '111.768', '28.4416', '329.229', '1513.08', '1085.82', 'Glenpark street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '166', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('191', '2249.3', '111.766', '28.4416', '2262.05', '-1121.16', '1048.88', 'Jeffreson street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '167', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('192', '2323.85', '116.046', '28.4416', '329.307', '1513.75', '1085.82', 'Jeffreson street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '168', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('193', '2323.85', '136.123', '28.4416', '-48.4137', '1458.5', '1085.61', 'Glenpark street', 'Statul', '0', '1', '40000', '3', '0', '0', '10', '169', '0', '23', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('194', '2323.85', '162.195', '28.4416', '2262.05', '-1121.16', '1048.88', 'Jeffreson street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '170', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('195', '2323.85', '191.137', '28.4416', '-48.4137', '1458.5', '1085.61', 'Glenpark street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '171', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('196', '2363.99', '187.263', '28.4416', '-79.8681', '1383.95', '1078.96', 'Jeffreson street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '172', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('197', '2364', '166.151', '28.4416', '375.303', '1378.61', '1079.8', 'Glenpark street', 'Aldan_Brooks', '1', '0', '40000', '3', '1', '1', '10', '173', '0', '13', '0=0|0=0|0=0|0=0|0=0', '362.062', '1379.52', '1079.8', '0');
INSERT INTO `houses` VALUES ('198', '2364', '141.849', '28.4416', '2364.11', '-1074.13', '1047.77', 'Jeffreson street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '174', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('199', '2363.99', '116.265', '28.4416', '-48.4137', '1458.5', '1085.61', 'Glenpark street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '175', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('200', '2398.6', '111.763', '28.4416', '-48.8929', '1458.58', '1085.61', 'Jeffreson street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '176', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('201', '2373.85', '71.1096', '28.4416', '-48.4137', '1458.5', '1085.61', 'Glenpark street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '177', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('202', '2373.85', '42.1038', '28.4416', '-48.8929', '1458.58', '1085.61', 'East Los Santos street', 'Alexander_Martinez', '1', '0', '20000', '3', '20', '1', '10', '178', '0', '4', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('203', '2373.86', '22.0348', '28.4416', '329.307', '1513.75', '1085.82', 'East Los Santos street', 'Statul', '0', '1', '20000', '3', '0', '0', '10', '179', '0', '51', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('204', '2411.22', '21.8481', '27.6835', '-79.8681', '1383.95', '1078.96', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '180', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('205', '2411.22', '-5.55013', '27.6835', '2364.11', '-1074.13', '1047.77', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '181', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('206', '2413.66', '61.7631', '28.4416', '329.307', '1513.75', '1085.82', 'East Los Santos street', 'Statul', '0', '1', '20000', '3', '0', '0', '10', '182', '0', '26', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('207', '2443.43', '61.7465', '28.4416', '244.137', '1146.07', '1081.17', 'Glenpark street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '183', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('208', '2446.63', '18.7299', '27.6835', '244.137', '1146.07', '1081.17', 'Glenpark street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '184', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('209', '2448.49', '-11.0288', '27.6835', '2262.05', '-1121.16', '1048.88', 'East Los Santos street', 'Statul', '0', '1', '20000', '3', '0', '0', '10', '185', '0', '4', '0=0|0=0|0=0|0=0|0=0', '2262.48', '-1122.28', '1048.88', '0');
INSERT INTO `houses` VALUES ('210', '2438.81', '-54.9604', '28.1535', '244.137', '1146.07', '1081.17', 'Glenpark street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '186', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('211', '2415.41', '-52.2843', '28.1535', '-79.8681', '1383.95', '1078.96', 'East Los Santos street', 'Statul', '0', '1', '20000', '3', '0', '0', '10', '187', '0', '0', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('212', '2392.41', '-54.9636', '28.1536', '509.566', '1354.37', '1076.78', 'Glenpark street', 'Alejandro_Suarez', '1', '0', '40000', '3', '0', '0', '10', '188', '0', '64', '0=0|0=0|0=0|0=0|0=0', '507.921', '1367.33', '1080.94', '0');
INSERT INTO `houses` VALUES ('213', '2367.47', '-49.1134', '28.1535', '289.906', '1501.94', '1078.42', 'Glenpark street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '189', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('214', '2322.23', '-124.961', '28.1536', '-48.8929', '1458.58', '1085.61', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '190', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('215', '2293.8', '-124.958', '28.1535', '289.906', '1501.94', '1078.42', 'Glenpark street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '191', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('216', '2272.35', '-119.135', '28.1535', '82.9381', '1272.3', '1079.89', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '192', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('217', '2245.39', '-122.29', '28.1535', '82.9381', '1272.3', '1079.89', 'Las Colinas street', 'Dominic_Toronto', '1', '0', '25000', '3', '0', '0', '10', '193', '0', '0', '0=0|0=0|0=0|0=0|0=0', '85.7458', '1274.11', '1079.88', '0');
INSERT INTO `houses` VALUES ('218', '2203.11', '-89.3075', '28.1535', '2313.47', '-1230.3', '1047.41', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '194', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('219', '2197.28', '-60.7588', '28.1535', '2313.47', '-1230.3', '1047.41', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '195', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('220', '2245.04', '-1.66933', '28.1536', '2284.87', '-1126.24', '1050.92', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '196', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('221', '2199.95', '-37.2563', '28.1535', '2284.87', '-1126.24', '1050.92', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '197', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('222', '2270.08', '-7.49794', '28.1535', '2284.87', '-1126.24', '1050.92', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '198', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('223', '2316.28', '-70.0873', '26.4844', '2284.87', '-1126.24', '1050.92', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '199', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('224', '2316.28', '-61.8024', '26.4844', '2284.87', '-1126.24', '1050.92', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '200', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('225', '2322.87', '-62.92', '26.4844', '2284.87', '-1126.24', '1050.92', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '201', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('226', '2319.17', '-51.1985', '26.4844', '509.653', '1354.44', '1076.78', 'Las Colinas street', 'Statul', '0', '1', '25000', '3', '0', '0', '10', '202', '0', '50', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('227', '2329.55', '-51.1861', '26.4844', '290.904', '1242.92', '1082.68', 'Jefferson street', 'James_Carson', '1', '1', '30000', '3', '0', '0', '10', '203', '0', '9', '0=0|0=0|0=0|0=0|0=0', '289.993', '1260.18', '1083.4', '0');
INSERT INTO `houses` VALUES ('228', '2314.99', '33.5078', '27.474', '290.904', '1242.92', '1082.68', 'Jefferson street', 'Denzil_McFly', '1', '0', '30000', '3', '0', '0', '10', '204', '0', '1', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('229', '2321.07', '35.1975', '26.4844', '448.365', '1354.23', '1082.22', 'Jefferson street', 'Baxter_Watson', '1', '0', '30000', '3', '100', '0', '10', '205', '0', '16', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('230', '2322.75', '44.9528', '26.6426', '-79.9677', '1384.4', '1078.96', 'Jefferson street', 'Johny_Wilson', '1', '1', '30000', '3', '0', '0', '10', '206', '0', '1', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('231', '2326.74', '63.4533', '26.4922', '448.365', '1354.23', '1082.22', 'Jefferson street', 'Statul', '0', '1', '30000', '3', '0', '0', '10', '207', '0', '14', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('232', '2322.75', '54.8336', '26.6435', '329.32', '1513.12', '1085.82', 'Jefferson street', 'Statul', '0', '1', '30000', '3', '0', '0', '10', '208', '0', '0', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('233', '2263.97', '59.5441', '26.4844', '329.32', '1513.12', '1085.82', 'Jefferson street', 'Dorothy_Trantham', '1', '0', '30000', '3', '1', '0', '10', '209', '0', '24', '0=0|0=0|0=0|0=0|0=0', '329.96', '1514.98', '1085.82', '0');
INSERT INTO `houses` VALUES ('235', '2259.28', '63.3877', '26.4844', '329.32', '1513.12', '1085.82', 'Jefferson street', 'Kunar_William', '1', '1', '30000', '3', '0', '0', '10', '210', '0', '27', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('236', '2275.38', '66.3411', '26.4844', '45.6335', '1439.33', '1082.41', 'Jefferson street', 'Charles_Winderson', '1', '0', '30000', '3', '50', '1', '10', '211', '0', '2', '0=0|0=0|0=0|0=0|0=0', '43.0933', '1439.66', '1082.41', '0');
INSERT INTO `houses` VALUES ('237', '2281.67', '61.1769', '26.4844', '45.6335', '1439.33', '1082.41', 'Market Apartament', 'Anthony_Woods', '1', '1', '30000', '3', '100', '1', '10', '212', '0', '41', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('238', '2284.28', '72.0749', '26.4844', '45.6335', '1439.33', '1082.41', 'Jefferson street', 'Jimmy_Collins', '1', '0', '30000', '3', '0', '1', '10', '213', '0', '18', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('239', '2243.58', '69.6035', '26.4844', '-79.893', '1383.59', '1078.96', 'Jefferson street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '214', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('240', '2238.09', '67.0452', '26.4844', '-79.893', '1383.59', '1078.96', 'Jefferson street', 'Connor_Attaway', '1', '1', '30000', '3', '0', '0', '10', '215', '0', '0', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('241', '1280.05', '283.696', '19.5547', '-79.893', '1383.59', '1078.96', 'Montgomery ', 'The State', '0', '1', '30000', '3', '0', '0', '10', '216', '0', '22', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('242', '1289.21', '304.431', '19.5547', '289.907', '1502.15', '1078.42', 'Montgomery ', 'The State', '0', '1', '30000', '2', '0', '0', '10', '217', '0', '18', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('243', '1234.93', '360.292', '19.5547', '289.907', '1502.15', '1078.42', 'Montgomery ', 'Statul', '0', '1', '30000', '3', '0', '0', '10', '218', '0', '48', '0=0|0=0|0=0|0=0|0=0', '291.711', '1503.44', '1078.43', '0');
INSERT INTO `houses` VALUES ('244', '1266.48', '234.359', '25.0487', '375.491', '1378.64', '1079.8', 'Montgomery ', 'The State', '0', '0', '30000', '3', '0', '0', '10', '219', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('245', '1242.4', '211.457', '19.5547', '375.491', '1378.64', '1079.8', 'Montgomery ', 'Statul', '0', '1', '30000', '3', '0', '0', '10', '220', '0', '1', '0=0|0=0|0=0|0=0|0=0', '365.714', '1379.03', '1079.81', '0');
INSERT INTO `houses` VALUES ('246', '1318.47', '212.963', '19.5547', '375.491', '1378.64', '1079.8', 'Montgomery ', 'The State', '0', '0', '30000', '3', '0', '0', '10', '221', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('247', '1302.15', '217.1', '19.5547', '375.491', '1378.64', '1079.8', 'Montgomery ', 'The State', '0', '0', '30000', '3', '0', '0', '10', '222', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('248', '2233.89', '-1169.63', '510.606', '244.113', '1145.96', '1081.17', 'Montgomery Projects', 'Statul', '0', '1', '20000', '3', '0', '0', '10', '223', '0', '19', '0=0|0=0|0=0|0=0|0=0', '251.464', '1160.72', '1081.17', '0');
INSERT INTO `houses` VALUES ('249', '2214.08', '-1178.75', '510.606', '244.113', '1145.96', '1081.17', 'Montgomery Projects', 'The State', '0', '1', '20000', '3', '0', '0', '10', '224', '0', '0', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('250', '2213.89', '-1183.94', '510.606', '2272.54', '-1242.72', '1048.6', 'Montgomery Projects', 'The State', '0', '1', '20000', '3', '0', '0', '10', '225', '0', '0', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('251', '2215.84', '-1186.42', '510.606', '2272.54', '-1242.72', '1048.6', 'Montgomery Projects', 'Statul', '0', '1', '20000', '3', '0', '0', '10', '226', '0', '54', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('252', '2220.4', '-1186.42', '510.606', '2272.54', '-1242.72', '1048.6', 'Montgomery Projects', 'The State', '0', '1', '20000', '3', '0', '0', '10', '227', '0', '32', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('254', '2224.69', '-1186.23', '510.606', '2313.33', '-1230.44', '1047.41', 'Montgomery Projects', 'The State', '0', '0', '25000', '3', '0', '0', '10', '229', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('255', '2228.63', '-1186.42', '510.606', '45.0461', '1439.55', '1082.41', 'Montgomery Projects', 'Statul', '0', '1', '25000', '3', '0', '0', '10', '230', '0', '0', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('256', '2232.28', '-1186.42', '510.606', '-48.1454', '1458.42', '1085.61', 'Montgomery Projects', 'Statul', '0', '1', '25000', '3', '0', '0', '10', '230', '0', '2', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('257', '2233.89', '-1179.81', '510.606', '2284.84', '-1126.13', '1050.92', 'Montgomery Projects', 'The State', '0', '0', '25000', '3', '0', '0', '10', '232', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('258', '2231.43', '-1169.68', '514.086', '2370.86', '-1095.11', '1049.62', 'Montgomery Projects', 'The State', '0', '0', '25000', '3', '0', '0', '10', '233', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('259', '2231.47', '-1174.48', '514.086', '2284.84', '-1126.13', '1050.92', 'Montgomery Projects', 'The State', '0', '0', '25000', '3', '0', '0', '10', '234', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('260', '2231.47', '-1179.16', '514.086', '2284.84', '-1126.13', '1050.92', 'Montgomery Projects', 'Statul', '0', '1', '25000', '3', '0', '0', '10', '235', '0', '19', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('261', '2231.47', '-1184.27', '514.086', '2243.92', '-1028.82', '1047.77', 'Montgomery Projects', 'Statul', '0', '1', '25000', '3', '0', '0', '10', '236', '0', '15', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('262', '2215.39', '-1178.46', '514.096', '2243.92', '-1028.82', '1047.77', 'Montgomery Projects', 'The State', '0', '0', '25000', '3', '0', '0', '10', '237', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('264', '2215.39', '-1172.68', '514.096', '2243.92', '-1028.82', '1047.77', 'Montgomery Projects', 'The State', '0', '0', '25000', '3', '0', '0', '10', '239', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('265', '-489.703', '-89.1948', '61.1943', '329.354', '1514.23', '1085.82', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '228', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('267', '-473.424', '-88.2552', '60.5152', '2364.25', '-1074.05', '1047.77', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '240', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('268', '-460.382', '-93.1102', '59.8752', '389.653', '1505.8', '1080.1', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '241', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('269', '-468.276', '-80.6035', '60.2752', '329.354', '1514.23', '1085.82', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '242', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('270', '-486.639', '-81.3815', '60.9228', '45.0461', '1439.55', '1082.41', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '243', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('271', '-481.944', '-68.0636', '60.7558', '2254.59', '-1112.23', '1049.13', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '244', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('272', '-484.524', '-54.6014', '60.4799', '2188.69', '-1073.54', '1050.48', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '245', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('273', '-461.681', '-57.0598', '60.1952', '2284.76', '-1126.23', '1050.92', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '246', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('274', '-469.138', '-71.7186', '60.4011', '2284.76', '-1126.23', '1050.92', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '247', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('275', '-442.897', '-88.9655', '59.1243', '2284.76', '-1126.23', '1050.92', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '248', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('276', '2419.23', '-92.1824', '28.9626', '242.919', '323.364', '999.591', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '249', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('277', '2389.69', '-90.8794', '28.4583', '2313.54', '-1230.45', '1047.41', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '250', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('278', '2368.65', '-90.92', '28.4625', '242.919', '323.364', '999.591', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '251', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('279', '-278.837', '1003.07', '20.9399', '2254.59', '-1112.23', '1049.13', 'East Los Santos street', 'Statul', '0', '1', '20000', '3', '0', '0', '10', '252', '0', '7', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('280', '-258.248', '1043.81', '20.9399', '2313.54', '-1230.45', '1047.41', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '253', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('281', '-258.937', '1083.07', '20.9399', '2313.54', '-1230.45', '1047.41', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '254', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('282', '-260.24', '1120', '20.9399', '2188.69', '-1073.54', '1050.48', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '255', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('283', '-258.251', '1151.15', '20.9399', '82.9849', '1272.08', '1079.89', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '256', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('284', '-258.247', '1168.89', '20.9399', '82.9849', '1272.08', '1079.89', 'East Los Santos street', 'Lewis_Monrow', '1', '0', '20000', '3', '0', '0', '10', '257', '0', '94', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('285', '-290.846', '1176.7', '20.9399', '82.9849', '1272.08', '1079.89', 'East Los Santos street', 'Nestor_Duenas', '1', '0', '20000', '3', '0', '0', '10', '258', '0', '98', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('286', '-324.352', '1165.67', '20.9399', '82.9849', '1272.08', '1079.89', 'East Los Santos street', 'Franklin_Monrow', '1', '0', '20000', '3', '1', '0', '10', '259', '0', '53', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('287', '-369.771', '1169.56', '20.2719', '266.304', '321.237', '997.21', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '260', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('288', '-360.846', '1141.79', '20.9399', '2188.64', '-1073.45', '1050.48', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '261', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('289', '-362.837', '1110.69', '20.9399', '2254.76', '-1112.36', '1049.13', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '262', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('290', '-328.247', '1118.87', '20.9399', '2284.81', '-1126.2', '1050.92', 'Las Colinas street', 'George_James', '1', '1', '25000', '3', '0', '0', '10', '263', '0', '31', '0=0|0=0|0=0|0=0|0=0', '2283.64', '-1123.58', '1050.92', '0');
INSERT INTO `houses` VALUES ('291', '-298.209', '1115.67', '20.9399', '243.318', '323.361', '999.591', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '264', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('292', '300.12', '1141.2', '9.13748', '2284.81', '-1126.2', '1050.92', 'Las Colinas street', 'George_Grimes', '1', '1', '25000', '3', '0', '0', '10', '265', '0', '5', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('293', '397.283', '1157.64', '8.34806', '2254.75', '-1112.02', '1049.13', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '266', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('294', '510.631', '1115.68', '14.938', '2284.81', '-1126.2', '1050.92', 'Las Colinas street', 'Statul', '0', '1', '25000', '3', '0', '0', '10', '267', '0', '1', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('295', '500.843', '1116.34', '15.0356', '2284.81', '-1126.2', '1050.92', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '268', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('296', '710.459', '1208.05', '13.8481', '2189.17', '-1073.56', '1050.48', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '269', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('297', '709.907', '1194.73', '13.3964', '2189.17', '-1073.56', '1050.48', 'Las Colinas street', 'Statul', '0', '1', '25000', '2', '0', '0', '10', '270', '0', '49', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('298', '755.796', '1958.77', '5.4608', '2189.17', '-1073.56', '1050.48', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '271', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('299', '778.023', '1937.59', '5.57799', '2189.17', '-1073.56', '1050.48', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '272', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('300', '784.206', '1954.35', '5.70743', '2254.9', '-1112.62', '1049.13', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '273', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('301', '753.718', '1973.3', '5.69962', '2254.9', '-1112.62', '1049.13', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '274', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('303', '790.026', '1973.93', '5.73868', '45.7828', '1439.35', '1082.41', 'Las Colinas', 'The State', '0', '0', '25000', '3', '0', '0', '10', '275', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('304', '766.891', '1989.78', '5.44518', '2150.07', '-1217.25', '1049.12', 'Las Colinas', 'The State', '0', '0', '25000', '3', '0', '0', '10', '276', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('305', '793.45', '1991.8', '5.79337', '290.721', '1243.01', '1082.68', 'Las Colinas', 'The State', '0', '0', '25000', '3', '0', '0', '10', '277', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('306', '767.653', '2007.61', '6.06681', '448.284', '1355.15', '1082.22', 'Las Colinas', 'Statul', '0', '1', '25000', '1', '0', '0', '10', '278', '0', '6', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('307', '-1.23614', '1394.73', '9.17188', '2150.07', '-1217.25', '1049.12', 'Las Colinas', 'The State', '0', '0', '25000', '3', '0', '0', '10', '279', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('308', '-20.7385', '1388.19', '9.28111', '7.70612', '1305.83', '1082.83', 'East Beach street', 'Statul', '0', '1', '50000', '3', '0', '0', '10', '280', '0', '24', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('310', '-29.3224', '1363.39', '9.28111', '448.284', '1355.15', '1082.22', 'Las Colinas', 'Timo_Maradiaga', '1', '1', '25000', '3', '0', '0', '10', '281', '0', '19', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('311', '-21.3923', '1348.12', '9.17188', '7.73688', '1305.81', '1082.83', 'East Beach street', 'Agoston_Blogarka', '1', '0', '50000', '3', '0', '0', '10', '282', '0', '19', '0=0|0=0|0=0|0=0|0=0', '7.79662', '1305.99', '1082.83', '0');
INSERT INTO `houses` VALUES ('312', '4.59722', '1344.31', '9.28111', '289.968', '1502.01', '1078.42', 'Las Colinas', 'The State', '0', '0', '25000', '3', '0', '0', '10', '283', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('313', '4.77005', '1380.6', '9.28111', '7.73688', '1305.81', '1082.83', 'East Beach street', 'The State', '0', '0', '50000', '3', '0', '0', '10', '284', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('314', '21.398', '1344.14', '9.28111', '7.73688', '1305.81', '1082.83', 'East Beach street', 'Statul', '0', '1', '50000', '3', '0', '0', '10', '285', '0', '0', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('315', '26.7649', '1361.89', '9.17188', '2150.07', '-1217.25', '1049.12', 'Las Colinas', 'The State', '0', '0', '25000', '3', '0', '0', '10', '286', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('316', '-1051.71', '1550.05', '33.4376', '290.721', '1243.01', '1082.68', 'Las Colinas', 'The State', '0', '0', '25000', '3', '0', '0', '10', '287', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('317', '-939.484', '1425.31', '30.434', '289.978', '1502.48', '1078.42', 'Las Colinas', 'The State', '0', '0', '25000', '3', '0', '0', '10', '288', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('318', '-906.455', '1514.64', '26.3168', '2370.67', '-1095.73', '1049.62', 'Las Colinas', 'The State', '0', '0', '25000', '3', '0', '0', '10', '289', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('319', '-886.417', '1514.09', '26.0311', '45.2578', '1439.38', '1082.41', 'Las Colinas', 'Jewel_Louie', '1', '0', '25000', '3', '0', '0', '10', '290', '0', '98', '0=0|0=0|0=0|0=0|0=0', '35.026', '1445.43', '1082.41', '0');
INSERT INTO `houses` VALUES ('320', '-905.454', '1528.57', '26.078', '329.51', '1513.24', '1085.82', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '291', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('321', '-881.802', '1531.69', '26.0624', '289.978', '1502.48', '1078.42', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '292', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('322', '-905.577', '1542.8', '26.0624', '448.284', '1355.15', '1082.22', 'Las Colinas street', 'Thomas_Spancer', '1', '1', '25000', '3', '20', '1', '10', '293', '0', '44', '0=0|0=0|0=0|0=0|0=0', '436.851', '1362.45', '1082.22', '0');
INSERT INTO `houses` VALUES ('323', '-879.645', '1538.68', '26.0311', '2150.07', '-1217.25', '1049.12', 'Las Colinas street', 'Statul', '0', '1', '25000', '3', '0', '0', '10', '294', '0', '0', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('324', '-883.946', '1552.72', '26.0624', '290.721', '1243.01', '1082.68', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '295', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('325', '-881.443', '1562.66', '26.2186', '45.2578', '1439.38', '1082.41', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '296', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('326', '-830.63', '1589.01', '26.9999', '2284.8', '-1126', '1050.92', 'Market street', 'The State', '0', '0', '75000', '3', '0', '0', '10', '297', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('327', '-766.355', '1613.57', '27.2733', '2284.8', '-1126', '1050.92', 'Market street', 'The State', '0', '0', '75000', '3', '0', '0', '10', '298', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('328', '-742.965', '1432.58', '16.116', '2284.8', '-1126', '1050.92', 'Market street', 'The State', '0', '0', '75000', '3', '0', '0', '10', '299', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('329', '-715.514', '1438.8', '18.8871', '2284.8', '-1126', '1050.92', 'Market street', 'The State', '0', '0', '75000', '3', '0', '0', '10', '300', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('330', '-690.07', '1444.32', '17.809', '448.111', '1353.72', '1082.22', 'Los santos', 'Brian_Wiliam', '1', '1', '30000', '1', '0', '0', '10', '301', '0', '60', '0=0|0=0|0=0|0=0|0=0', '449.321', '1357.15', '1082.22', '0');
INSERT INTO `houses` VALUES ('331', '2292.67', '226.897', '23.3447', '2260.99', '-1121.14', '1048.88', 'Market street', 'The State', '0', '0', '75000', '3', '0', '0', '10', '302', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('332', '2279.84', '229.152', '20.7246', '2243.95', '-1028.92', '1047.77', 'Market street', 'The State', '0', '0', '75000', '3', '0', '0', '10', '303', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('333', '2278.83', '237.249', '20.8568', '2243.95', '-1028.92', '1047.77', 'Market street', 'The State', '0', '0', '75000', '3', '0', '0', '10', '304', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('334', '2279.13', '261.272', '20.1675', '156.118', '1410.28', '1086.43', 'Temple street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '305', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('336', '2290.31', '261.867', '21.4633', '156.118', '1410.28', '1086.43', 'Temple street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '307', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('337', '2300.77', '263.628', '22.526', '82.9679', '1272.38', '1079.89', 'Maria Beach street', 'Statul', '0', '1', '250000', '3', '0', '0', '10', '306', '0', '22', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('338', '1189.12', '-1018.1', '32.5469', '2313.35', '-1230.49', '1047.41', 'Temple street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '308', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('339', '305.331', '-1770.22', '4.53827', '448.312', '1354.36', '1082.22', 'Maria Beach street', 'The State', '0', '0', '75000', '3', '0', '0', '10', '309', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('340', '1196.18', '-1017.23', '32.5469', '2313.35', '-1230.49', '1047.41', 'Temple street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '310', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('341', '1188.22', '-1011.89', '36.2267', '2313.35', '-1230.49', '1047.41', 'Temple street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '311', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('342', '295.31', '-1764.12', '4.86803', '290.01', '1502.16', '1078.42', 'Maria Beach street', 'The State', '0', '0', '75000', '3', '0', '0', '10', '312', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('343', '1188.51', '-1011.88', '32.5469', '290.831', '1242.89', '1082.68', 'Temple street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '313', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('344', '1195.47', '-1010.86', '36.2267', '290.831', '1242.89', '1082.68', 'Temple street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '314', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('345', '1195.55', '-1010.87', '32.553', '290.831', '1242.89', '1082.68', 'Temple street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '315', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('346', '1189.24', '-1018.01', '36.2344', '2313.35', '-1230.49', '1047.41', 'Temple street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '316', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('347', '1196.2', '-1017.1', '36.2344', '2313.35', '-1230.49', '1047.41', 'Temple street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '317', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('348', '280.966', '-1767.08', '4.54688', '509.489', '1354.74', '1076.78', 'Maria Beach street', 'Statul', '0', '1', '75000', '3', '0', '0', '10', '318', '0', '30', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('349', '206.884', '-1768.88', '4.36903', '7.99419', '1305.75', '1082.83', 'Maria Beach street', 'The State', '0', '0', '75000', '3', '0', '0', '10', '319', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('350', '192.871', '-1769.4', '4.32848', '389.72', '1505.8', '1080.1', 'Maria Beach street', 'The State', '0', '0', '75000', '3', '0', '0', '10', '320', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('351', '1234.41', '-1016.23', '32.6067', '242.774', '323.158', '999.591', 'Temple street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '321', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('352', '1227.47', '-1017.17', '32.6016', '242.774', '323.158', '999.591', 'Temple street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '322', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('354', '1226.64', '-1011.06', '32.6016', '242.774', '323.158', '999.591', 'Temple street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '324', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('355', '1233.65', '-1010.07', '32.6016', '242.774', '323.158', '999.591', 'Temple street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '325', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('356', '2535.65', '-1526.35', '24.3006', '2272.11', '-1242.74', '1048.6', 'East LS', 'The State', '0', '0', '40000', '3', '0', '0', '10', '323', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('357', '1226.42', '-1010.86', '36.3283', '242.774', '323.158', '999.591', 'Temple street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '326', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('359', '1227.61', '-1017.18', '36.3359', '242.774', '323.158', '999.591', 'Temple street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '328', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('360', '1234.22', '-1016.34', '36.3359', '242.774', '323.158', '999.591', 'Temple street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '329', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('361', '168.144', '-1769.39', '4.47181', '7.99419', '1305.75', '1082.83', 'Maria Beach street', 'The State', '0', '0', '75000', '3', '0', '0', '10', '327', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('362', '1421.79', '-886.115', '50.6821', '290.053', '1502.25', '1078.42', 'Mulholland street', 'The State', '0', '0', '125000', '3', '0', '0', '10', '330', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('363', '1468.63', '-906.013', '54.8359', '290.053', '1502.25', '1078.42', 'Mulholland street', 'The State', '0', '0', '125000', '3', '0', '0', '10', '106', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('364', '1540.47', '-851.323', '64.3361', '290.053', '1502.25', '1078.42', 'Mulholland street', 'Kevin_Taylor', '1', '1', '125000', '3', '10', '1', '10', '332', '0', '13', '0=0|0=0|0=0|0=0|0=0', '296.725', '1503.77', '1078.42', '0');
INSERT INTO `houses` VALUES ('365', '1535.03', '-800.176', '72.8495', '290.053', '1502.25', '1078.42', 'Mulholland street', 'The State', '0', '0', '125000', '3', '0', '0', '10', '333', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('366', '1527.79', '-772.55', '80.5781', '290.053', '1502.25', '1078.42', 'Mulholland street', 'The State', '0', '0', '125000', '3', '0', '0', '10', '334', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('367', '1497.01', '-688.099', '95.5633', '2373.45', '-1183.86', '1053.21', 'Molholland street', 'Luca_Mackay', '1', '0', '125000', '3', '0', '0', '10', '335', '0', '13', '0=0|0=0|0=0|0=0|0=0', '2372.48', '-1170.6', '1053.81', '0');
INSERT INTO `houses` VALUES ('368', '1112.64', '-742.038', '100.133', '448.193', '1354.15', '1082.22', 'Mulholland street', 'Feliciano_Trotti', '1', '0', '125000', '3', '0', '0', '10', '336', '0', '17', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('369', '653.596', '-1714.03', '14.7648', '509.602', '1354.3', '1076.78', 'Santa Maria street', 'Bertoldo_Montalvo', '1', '1', '65000', '3', '0', '0', '10', '337', '0', '0', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('370', '652.474', '-1693.96', '14.5547', '509.602', '1354.3', '1076.78', 'Santa Maria street', 'The State', '0', '0', '65000', '3', '0', '0', '10', '338', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('371', '657.229', '-1652.66', '15.4062', '509.602', '1354.3', '1076.78', 'Santa Maria street', 'The State', '0', '0', '65000', '3', '0', '0', '10', '339', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('372', '656.14', '-1635.87', '15.8617', '509.602', '1354.3', '1076.78', 'Santa Maria street', 'The State', '0', '0', '65000', '3', '0', '0', '10', '340', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('373', '653.244', '-1619.83', '15', '83.0311', '1272.16', '1079.89', 'Santa Maria street', 'The State', '0', '0', '65000', '3', '0', '0', '10', '341', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('374', '692.929', '-1602.78', '15.0469', '83.0311', '1272.16', '1079.89', 'Santa Maria street', 'The State', '0', '0', '65000', '3', '0', '0', '10', '342', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('375', '766.924', '-1605.84', '13.8039', '156.009', '1409.98', '1086.43', 'Santa Maria street', 'The State', '0', '0', '65000', '3', '0', '0', '10', '343', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('376', '768.08', '-1655.82', '5.60938', '263.303', '978.366', '1083.69', 'Santa Maria street', 'The State', '0', '0', '65000', '3', '0', '0', '10', '344', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('377', '769.229', '-1696.5', '5.15542', '263.303', '978.366', '1083.69', 'Santa Maria street', 'Alessio_Accardi', '1', '0', '65000', '3', '0', '0', '10', '345', '0', '1', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('378', '769.018', '-1726.23', '13.4321', '263.303', '978.366', '1083.69', 'Santa Maria street', 'The State', '0', '0', '65000', '3', '0', '0', '10', '346', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('379', '769.227', '-1745.79', '13.0773', '263.303', '978.366', '1083.69', 'Santa Maria street', 'The State', '0', '0', '65000', '3', '0', '0', '10', '347', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('380', '791.482', '-1753.21', '13.4607', '199.095', '1111.01', '1083.21', 'Santa Maria street', 'The State', '0', '0', '65000', '3', '0', '0', '10', '348', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('381', '797.236', '-1729.3', '13.5469', '199.095', '1111.01', '1083.21', 'Santa Maria street', 'The State', '0', '0', '65000', '3', '0', '0', '10', '349', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('382', '793.975', '-1707.48', '14.0382', '199.095', '1111.01', '1083.21', 'Santa Maria street', 'The State', '0', '0', '65000', '3', '0', '0', '10', '350', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('383', '794.895', '-1691.97', '14.4633', '199.095', '1111.01', '1083.21', 'Santa Maria street', 'The State', '0', '0', '65000', '3', '0', '0', '10', '351', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('384', '790.87', '-1661.36', '13.4843', '156.025', '1410.32', '1086.43', 'Santa Maria street', 'The State', '0', '0', '65000', '3', '0', '0', '10', '352', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('385', '697.279', '-1626.98', '3.74917', '156.025', '1410.32', '1086.43', 'Santa Maria street', 'The State', '0', '0', '65000', '3', '0', '0', '10', '353', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('386', '693.756', '-1645.83', '4.09375', '156.025', '1410.32', '1086.43', 'Santa Maria street', 'The State', '0', '0', '65000', '3', '0', '0', '10', '354', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('387', '694.824', '-1690.74', '4.34612', '156.025', '1410.32', '1086.43', 'Santa Maria street', 'The State', '0', '0', '65000', '3', '0', '0', '10', '355', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('388', '693.545', '-1705.87', '3.81948', '156.025', '1410.32', '1086.43', 'Santa Maria street', 'The State', '0', '0', '65000', '3', '0', '0', '10', '356', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('389', '980.43', '-677.299', '121.976', '156.214', '1410.03', '1086.43', 'Red County hill', 'Sherwin_Harris', '1', '1', '30000', '3', '0', '0', '10', '357', '0', '51', '0=0|0=0|0=0|0=0|0=0', '155.358', '1419.4', '1089.61', '0');
INSERT INTO `houses` VALUES ('390', '1093.93', '-807.136', '107.419', '199.013', '1112.33', '1083.21', 'Mulholland street', 'Statul', '0', '1', '125000', '3', '0', '0', '10', '358', '0', '71', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('391', '1034.88', '-813.159', '101.852', '2149.86', '-1217.37', '1049.12', 'Mulholland street', 'The State', '0', '0', '125000', '3', '0', '0', '10', '359', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('392', '989.873', '-828.615', '95.4686', '745.306', '1412.62', '1102.42', 'Mulholland street', 'The State', '0', '0', '125000', '3', '0', '0', '10', '360', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('393', '937.916', '-848.692', '93.5772', '198.983', '1112.56', '1083.21', 'Mulholland street', 'The State', '0', '0', '125000', '3', '0', '0', '10', '361', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('394', '923.905', '-853.402', '93.4565', '745.306', '1412.62', '1102.42', 'Mulholland street', 'The State', '0', '0', '125000', '3', '0', '0', '10', '362', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('395', '910.433', '-817.524', '103.126', '198.983', '1112.56', '1083.21', 'Mulholland street', 'The State', '0', '0', '125000', '3', '0', '0', '10', '363', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('396', '835.965', '-894.862', '68.7689', '2370.9', '-1095.45', '1049.62', 'Mulholland street', 'Himawari_ShengLi', '1', '0', '125000', '3', '100', '1', '10', '364', '0', '66', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('397', '827.757', '-858.004', '70.3308', '448.324', '1354.07', '1082.22', 'Mulholland street', 'Juan_Cortes', '1', '1', '125000', '3', '0', '0', '10', '365', '200', '45', '0=0|0=0|0=0|0=0|0=0', '453.488', '1363.64', '1082.22', '0');
INSERT INTO `houses` VALUES ('398', '1016.93', '-763.359', '112.563', '745.306', '1412.62', '1102.42', 'Mulholland street', 'The State', '0', '0', '125000', '3', '0', '0', '10', '366', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('399', '977.404', '-771.718', '112.203', '2149.86', '-1217.37', '1049.12', 'Mulholland street', 'The State', '0', '0', '125000', '3', '0', '0', '10', '367', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('400', '785.928', '-828.588', '70.2896', '198.983', '1112.56', '1083.21', 'Mulholland street', 'The State', '0', '0', '125000', '3', '0', '0', '10', '368', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('401', '848.01', '-745.529', '94.9693', '199.013', '1112.33', '1083.21', 'Mulholland street', 'The State', '0', '0', '125000', '3', '0', '0', '10', '369', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('402', '891.26', '-783.128', '101.314', '2370.59', '-1095.64', '1049.62', 'Mulholland street', 'The State', '0', '0', '125000', '3', '0', '0', '10', '370', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('403', '897.92', '-677.118', '116.89', '2370.9', '-1095.45', '1049.62', 'Mulholland street', 'The State', '0', '0', '125000', '3', '0', '0', '10', '371', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('404', '946.366', '-710.66', '122.62', '2149.86', '-1217.37', '1049.12', 'Mulholland street', 'Statul', '0', '1', '125000', '3', '0', '0', '10', '372', '0', '52', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('405', '1045.14', '-642.944', '120.117', '198.983', '1112.56', '1083.21', 'Mulholland street', 'The State', '0', '0', '125000', '3', '0', '0', '10', '373', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('406', '1094.96', '-647.914', '113.648', '745.306', '1412.62', '1102.42', 'Mulholland street', 'The State', '0', '0', '125000', '3', '0', '0', '10', '374', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('407', '1331.75', '-632.916', '109.135', '263.165', '978.003', '1083.69', 'Mulholland street', 'Samuel_Brusco', '1', '0', '125000', '3', '1', '0', '10', '374', '0', '56', '0=0|0=0|0=0|0=0|0=0', '266.546', '990.318', '1083.69', '0');
INSERT INTO `houses` VALUES ('408', '1442.65', '-628.835', '95.7186', '198.983', '1112.56', '1083.21', 'Mulholland street', 'Amber_Queen', '1', '0', '125000', '3', '0', '0', '10', '376', '0', '63', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('409', '2355.59', '-1038.72', '54.3358', '1.55887', '-3.15909', '999.428', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '2', '377', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('410', '2351.03', '-1039.9', '54.3358', '1.55887', '-3.15909', '999.428', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '2', '378', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('411', '2362.69', '-1046.59', '54.1484', '1.55887', '-3.15909', '999.428', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '2', '379', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('412', '2373.16', '-1051.72', '54.1315', '1.55887', '-3.15909', '999.428', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '2', '380', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('413', '2355.8', '-1058.8', '54.078', '1.55887', '-3.15909', '999.428', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '2', '381', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('414', '2347.97', '-1047.31', '53.8525', '1.55887', '-3.15909', '999.428', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '2', '382', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('415', '2370.21', '-1034.89', '54.4106', '1.7119', '-3.0225', '999.428', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '2', '383', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('416', '2122.08', '-970.307', '58.2074', '1.79633', '-3.20144', '999.428', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '2', '384', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('417', '2131.95', '-974.007', '59.7856', '1.79633', '-3.20144', '999.428', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '2', '385', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('418', '2330.23', '-1060.91', '52.4686', '1.55887', '-3.15909', '999.428', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '2', '386', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('419', '2325.44', '-1060.76', '52.3516', '1.55887', '-3.15909', '999.428', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '2', '387', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('420', '2142.7', '-978.118', '61.3793', '1.79633', '-3.20144', '999.428', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '2', '388', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('421', '2154.1', '-979.947', '63.2934', '1.79633', '-3.20144', '999.428', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '2', '389', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('422', '2319.59', '-1053.3', '52.3582', '1.55887', '-3.15909', '999.428', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '2', '390', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('423', '2335.09', '-1045.9', '52.5529', '1.55887', '-3.15909', '999.428', 'Las Colinas street', 'The State', '0', '0', '25000', '3', '0', '0', '2', '391', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('424', '2787.06', '-1926.14', '13.5469', '-79.9141', '1383.94', '1078.96', 'Playa Del Seville street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '392', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('425', '2787.07', '-1952.55', '13.5469', '-49.0384', '1458.43', '1085.61', 'Playa Del Seville street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '393', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('426', '2751.49', '-1962.85', '13.5469', '329.058', '1513.33', '1085.82', 'Playa Del Seville street', 'Statul', '0', '1', '30000', '3', '0', '0', '10', '394', '0', '0', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('427', '2751.5', '-1936.45', '13.5394', '329.29', '1513.1', '1085.82', 'Playa Del Seville street', 'The State', '0', '0', '30000', '3', '0', '0', '10', '395', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('428', '2695.38', '-2020.55', '14.0223', '2364.24', '-1074.07', '1047.77', 'Wilowfiled street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '396', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('429', '2673.28', '-2020.29', '14.1682', '-79.9141', '1383.94', '1078.96', 'Wilowfiled street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '397', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('430', '2650.7', '-2021.78', '14.1766', '-49.0384', '1458.43', '1085.61', 'Wilowfiled street', 'Statul', '0', '1', '25000', '3', '0', '0', '10', '398', '0', '0', '0=0|0=0|0=0|0=0|0=0', '-49.9378', '1453.05', '1085.61', '0');
INSERT INTO `houses` VALUES ('431', '2635.59', '-2012.89', '14.1443', '191.226', '1289.83', '1082.14', 'Wilowfiled street', 'Statul', '0', '1', '25000', '3', '0', '0', '10', '399', '0', '0', '0=0|0=0|0=0|0=0|0=0', '196.539', '1288.53', '1082.14', '0');
INSERT INTO `houses` VALUES ('432', '2637.04', '-1991.73', '14.324', '-79.9752', '1383.63', '1078.96', 'Wilowfiled street', 'Statul', '0', '1', '25000', '3', '0', '0', '10', '400', '0', '0', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('433', '2652.75', '-1989.43', '13.9988', '329.058', '1513.33', '1085.82', 'Wilowfiled street', 'Statul', '0', '1', '25000', '3', '0', '0', '10', '401', '0', '32', '0=0|0=0|0=0|0=0|0=0', '323.444', '1521.88', '1086.33', '0');
INSERT INTO `houses` VALUES ('434', '2672.73', '-1989.47', '14.324', '-49.0384', '1458.43', '1085.61', 'Wilowfiled street', 'Statul', '0', '1', '25000', '3', '0', '0', '10', '402', '0', '0', '0=0|0=0|0=0|0=0|0=0', '-52.1893', '1456.95', '1085.61', '0');
INSERT INTO `houses` VALUES ('435', '2696.38', '-1990.36', '14.2229', '-79.9141', '1383.94', '1078.96', 'Wilowfiled street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '403', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('436', '725.693', '-1440.45', '13.5391', '2149.85', '-1217.71', '1049.12', 'Marina street', 'Nerpod_Whiteland', '1', '0', '75000', '3', '0', '1', '10', '404', '0', '74', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('442', '725.636', '-1451.04', '17.6953', '2272.55', '-1242.62', '1048.6', 'Marina street', 'The State', '0', '0', '75000', '3', '0', '0', '10', '405', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('443', '2707.31', '-1238.07', '59.6749', '2297.93', '-1093.84', '1048.87', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '406', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('444', '2707.37', '-1233.49', '61.0855', '2254.71', '-1112.66', '1049.13', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '407', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('445', '2707.31', '-1229.27', '62.301', '2188.51', '-1073.32', '1050.48', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '408', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('446', '2707.31', '-1224.68', '63.5868', '265.764', '321.782', '997.143', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '409', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('447', '2707.31', '-1220.48', '64.8803', '2297.93', '-1093.84', '1048.87', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '410', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('448', '2707.31', '-1216.3', '66.2291', '2254.71', '-1112.66', '1049.13', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '411', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('449', '2707.31', '-1211.73', '67.6187', '2188.51', '-1073.32', '1050.48', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '412', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('450', '2707.31', '-1207.54', '68.752', '242.758', '323.021', '999.591', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '413', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('451', '2707.31', '-1203.1', '69.6862', '265.764', '321.782', '997.143', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '414', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('452', '2707.31', '-1200.11', '70.4606', '2254.71', '-1112.66', '1049.13', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '415', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('453', '2700.21', '-1200.19', '68.9706', '2297.93', '-1093.84', '1048.87', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '416', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('454', '2700.21', '-1203.09', '68.1962', '2188.51', '-1073.32', '1050.48', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '417', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('455', '2700.2', '-1207.61', '67.2616', '2254.71', '-1112.66', '1049.13', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '418', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('456', '2700.21', '-1211.81', '66.1282', '2297.93', '-1093.84', '1048.87', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '419', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('457', '2700.21', '-1216.36', '64.7388', '265.764', '321.782', '997.143', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '420', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('458', '2750.39', '-1238.59', '61.5245', '2188.51', '-1073.32', '1050.48', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '421', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('459', '2750.39', '-1222.48', '64.6016', '2254.71', '-1112.66', '1049.13', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '422', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('460', '2750.39', '-1205.29', '67.4844', '242.881', '323.065', '999.591', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '423', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('461', '2756.43', '-1182.81', '69.4035', '509.645', '1353.89', '1076.78', 'Los Flores street', 'Andrew_Lucas', '1', '0', '25000', '1', '0', '0', '10', '424', '0', '9', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('462', '1341.32', '-1675.13', '17.7157', '191.31', '1288.8', '1082.14', 'Los Santos', 'Jesen_McCleave', '1', '1', '20000', '3', '0', '0', '10', '424', '0', '50', '0=0|0=0|0=0|0=0|0=0', '200.199', '1288.7', '1082.14', '0');
INSERT INTO `houses` VALUES ('463', '2690.54', '-1238', '57.5103', '2188.51', '-1073.32', '1050.48', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '426', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('464', '2690.54', '-1233.48', '58.9079', '2297.93', '-1093.84', '1048.87', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '427', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('465', '2690.54', '-1229.23', '60.1368', '265.764', '321.782', '997.143', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '428', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('466', '2690.54', '-1224.68', '61.4226', '266.327', '321.823', '997.143', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '429', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('467', '2690.54', '-1220.53', '62.7158', '2297.93', '-1093.84', '1048.87', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '430', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('468', '2690.54', '-1216.3', '64.0651', '2188.51', '-1073.32', '1050.48', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '431', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('469', '2690.54', '-1211.82', '65.4547', '2254.71', '-1112.66', '1049.13', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '432', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('470', '2690.54', '-1207.56', '66.5882', '266.327', '321.823', '997.143', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '433', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('471', '2690.55', '-1203.09', '67.5232', '2188.51', '-1073.32', '1050.48', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '434', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('472', '2690.54', '-1200', '68.2964', '2297.93', '-1093.84', '1048.87', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '435', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('473', '2683.44', '-1200.11', '66.8062', '265.764', '321.782', '997.143', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '436', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('474', '2683.44', '-1203.05', '66.0321', '2254.71', '-1112.66', '1049.13', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '437', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('475', '2683.44', '-1207.57', '65.0975', '2188.51', '-1073.32', '1050.48', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '438', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('477', '2683.44', '-1216.25', '62.5746', '2297.93', '-1093.84', '1048.87', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '439', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('478', '2683.44', '-1220.54', '61.2248', '265.764', '321.782', '997.143', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '440', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('479', '2683.44', '-1224.82', '59.9323', '2188.51', '-1073.32', '1050.48', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '441', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('482', '2683.33', '-1238.09', '55.9975', '2254.71', '-1112.66', '1049.13', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '442', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('483', '2683.42', '-1233.6', '57.4135', '2297.93', '-1093.84', '1048.87', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '443', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('486', '2670.28', '-1207.6', '64.801', '265.764', '321.782', '997.143', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '444', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('487', '2670.28', '-1211.76', '63.667', '2188.51', '-1073.32', '1050.48', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '445', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('488', '2670.31', '-1202.99', '65.7338', '2297.93', '-1093.84', '1048.87', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '446', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('489', '2670.28', '-1216.34', '62.2645', '2254.71', '-1112.66', '1049.13', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '447', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('490', '2670.28', '-1200.06', '66.4935', '265.764', '321.782', '997.143', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '448', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('491', '2670.28', '-1220.53', '60.9202', '242.758', '323.021', '999.591', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '449', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('492', '2670.28', '-1224.78', '59.6268', '2297.93', '-1093.84', '1048.87', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '450', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('493', '2683.44', '-1211.8', '63.9642', '2188.51', '-1073.32', '1050.48', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '451', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('494', '2670.44', '-1233.53', '57.1231', '2254.71', '-1112.66', '1049.13', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '452', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('495', '2670.28', '-1238.04', '55.7299', '2297.93', '-1093.84', '1048.87', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '453', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('496', '2670.28', '-1229.24', '58.3544', '242.758', '323.021', '999.591', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '454', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('497', '2663.18', '-1200.09', '66.4672', '242.758', '323.021', '999.591', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '455', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('498', '2663.18', '-1203.07', '65.6854', '2254.71', '-1112.66', '1049.13', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '456', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('499', '2663.18', '-1207.58', '64.7609', '242.758', '323.021', '999.591', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '457', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('500', '2663.18', '-1211.81', '63.6238', '2297.93', '-1093.84', '1048.87', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '458', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('501', '2663.18', '-1216.27', '62.2237', '2188.51', '-1073.32', '1050.48', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '459', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('502', '2663.18', '-1220.56', '60.8748', '265.764', '321.782', '997.143', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '460', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('503', '2663.18', '-1224.69', '59.5865', '2297.93', '-1093.84', '1048.87', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '461', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('504', '2663.18', '-1229.24', '58.3', '2254.71', '-1112.66', '1049.13', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '462', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('505', '2663.18', '-1233.52', '57.0715', '2188.51', '-1073.32', '1050.48', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '463', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('506', '2663.18', '-1238', '55.6738', '2297.93', '-1093.84', '1048.87', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '464', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('507', '2622.21', '-1238.08', '51.2682', '242.758', '323.021', '999.591', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '465', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('508', '2622.21', '-1233.54', '52.6654', '2188.51', '-1073.32', '1050.48', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '466', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('509', '2622.21', '-1229.24', '53.8947', '242.881', '323.065', '999.591', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '467', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('510', '2622.21', '-1224.67', '55.1801', '2297.93', '-1093.84', '1048.87', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '468', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('511', '2622.22', '-1220.64', '56.4753', '266.327', '321.823', '997.143', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '469', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('512', '2622.21', '-1216.39', '57.8229', '242.758', '323.021', '999.591', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '470', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('513', '2622.21', '-1211.8', '59.2119', '2297.93', '-1093.84', '1048.87', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '471', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('514', '2622.22', '-1207.56', '60.3463', '2188.51', '-1073.32', '1050.48', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '472', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('515', '2622.21', '-1203.06', '61.2799', '2254.71', '-1112.66', '1049.13', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '473', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('516', '2622.21', '-1200.09', '62.0545', '2297.93', '-1093.84', '1048.87', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '474', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('517', '2615.11', '-1200.07', '60.7812', '2188.51', '-1073.32', '1050.48', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '475', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('518', '2615.11', '-1203.06', '60', '2254.71', '-1112.66', '1049.13', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '476', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('519', '2615.11', '-1207.6', '59.0703', '242.881', '323.065', '999.591', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '477', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('520', '2615.11', '-1211.8', '57.9375', '2297.93', '-1093.84', '1048.87', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '478', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('521', '2615.11', '-1216.25', '56.5391', '2254.79', '-1112.6', '1049.13', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '479', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('522', '2615.11', '-1220.53', '55.1875', '2188.51', '-1073.32', '1050.48', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '480', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('523', '2615.11', '-1224.67', '53.8984', '2297.93', '-1093.84', '1048.87', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '481', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('524', '2615.11', '-1229.24', '52.6094', '2254.79', '-1112.6', '1049.13', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '482', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('525', '2615.11', '-1233.71', '51.3828', '242.758', '323.021', '999.591', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '483', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('526', '2615.11', '-1238.02', '49.9844', '2297.93', '-1093.84', '1048.87', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '484', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('527', '2608.15', '-1237.98', '50.2054', '2188.51', '-1073.32', '1050.48', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '485', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('528', '2608.15', '-1233.52', '51.6026', '2254.79', '-1112.6', '1049.13', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '486', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('529', '2608.15', '-1224.74', '54.1178', '2297.93', '-1093.84', '1048.87', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '487', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('530', '2608.15', '-1229.24', '52.8321', '242.758', '323.021', '999.591', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '488', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('531', '2608.15', '-1220.55', '55.411', '2188.51', '-1073.32', '1050.48', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '489', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('532', '2608.15', '-1216.32', '56.7607', '2297.93', '-1093.84', '1048.87', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '490', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('533', '2608.15', '-1211.84', '58.1497', '242.758', '323.021', '999.591', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '491', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('534', '2608.15', '-1207.64', '59.2832', '2254.79', '-1112.6', '1049.13', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '492', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('535', '2608.15', '-1203.1', '60.2181', '2297.93', '-1093.84', '1048.87', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '493', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('536', '2608.15', '-1200.02', '60.9918', '2188.51', '-1073.32', '1050.48', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '494', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('537', '2594.5', '-1200.03', '59.3578', '2254.79', '-1112.6', '1049.13', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '495', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('538', '2594.5', '-1203.12', '58.576', '2297.93', '-1093.84', '1048.87', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '496', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('539', '2601.05', '-1200.03', '59.5019', '242.758', '323.021', '999.591', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '497', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('540', '2601.05', '-1203.01', '58.7274', '2188.51', '-1073.32', '1050.48', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '498', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('541', '2594.5', '-1207.57', '57.6515', '2297.93', '-1093.84', '1048.87', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '499', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('542', '2683.44', '-1229.31', '58.6469', '2254.79', '-1112.6', '1049.13', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '500', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('543', '2594.5', '-1211.77', '56.5144', '265.764', '321.782', '997.143', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '501', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('544', '2601.05', '-1207.59', '57.7933', '2297.93', '-1093.84', '1048.87', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '502', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('545', '2594.5', '-1216.32', '55.1144', '242.758', '323.021', '999.591', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '503', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('546', '2601.05', '-1211.81', '56.6595', '2188.51', '-1073.32', '1050.48', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '504', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('547', '2594.5', '-1220.59', '53.7654', '2297.93', '-1093.84', '1048.87', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '505', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('548', '2601.05', '-1216.28', '55.2703', '2254.79', '-1112.6', '1049.13', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '506', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('549', '2601.05', '-1220.62', '53.9205', '265.764', '321.782', '997.143', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '507', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('550', '2594.5', '-1224.76', '52.4771', '2297.93', '-1093.84', '1048.87', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '508', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('551', '2601.05', '-1224.78', '52.6274', '242.758', '323.021', '999.591', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '509', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('552', '2594.5', '-1229.26', '51.1906', '2188.51', '-1073.32', '1050.48', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '510', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('553', '2601.05', '-1229.21', '51.3421', '2254.79', '-1112.6', '1049.13', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '511', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('554', '2594.5', '-1233.52', '49.9621', '2297.93', '-1093.84', '1048.87', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '512', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('555', '2601.05', '-1233.55', '50.1127', '2188.51', '-1073.32', '1050.48', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '513', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('556', '2594.5', '-1238.06', '48.5644', '2254.79', '-1112.6', '1049.13', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '514', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('557', '2601.05', '-1238.03', '48.7149', '2297.93', '-1093.84', '1048.87', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '515', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('558', '2587.4', '-1238.06', '48.5644', '2254.79', '-1112.6', '1049.13', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '516', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('559', '2587.4', '-1233.53', '49.9621', '265.764', '321.782', '997.143', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '517', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('560', '2587.4', '-1229.25', '51.1906', '2297.93', '-1093.84', '1048.87', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '518', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('561', '2587.4', '-1224.72', '52.4771', '242.653', '323.404', '999.591', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '519', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('562', '2587.4', '-1220.58', '53.7654', '2188.51', '-1073.32', '1050.48', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '520', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('563', '2587.4', '-1216.34', '55.1144', '964.341', '2159.87', '1011.03', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '2', '521', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('564', '2587.39', '-1211.8', '56.5144', '242.596', '323.44', '999.591', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '522', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('565', '2587.39', '-1203.06', '58.576', '2297.93', '-1093.84', '1048.87', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '523', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('566', '2587.4', '-1207.65', '57.6515', '2254.79', '-1112.6', '1049.13', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '524', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('567', '2587.4', '-1200.12', '59.3578', '2297.93', '-1093.84', '1048.87', 'Los Flores street', 'The State', '0', '0', '25000', '3', '0', '0', '10', '525', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('568', '2476.36', '-1398.81', '29.3131', '2188.51', '-1073.32', '1050.48', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '526', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('569', '2473.08', '-1398.81', '29.3131', '265.764', '321.782', '997.143', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '527', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('570', '2468.3', '-1398.81', '29.3131', '2297.93', '-1093.84', '1048.87', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '528', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('571', '2468.3', '-1410.34', '29.3131', '2254.75', '-1112.02', '1049.13', 'East Los Santos street', 'Statul', '0', '1', '20000', '3', '0', '0', '10', '529', '0', '0', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('572', '2473.15', '-1410.34', '29.3131', '2188.51', '-1073.32', '1050.48', 'East Los Santos street', 'Statul', '0', '1', '20000', '3', '0', '0', '10', '530', '0', '0', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('573', '2476.34', '-1410.34', '29.3131', '2254.75', '-1111.79', '1049.13', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '531', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('574', '2487.32', '-1398.81', '29.3131', '2188.69', '-1073.57', '1050.48', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '532', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('575', '2492.18', '-1398.81', '29.3131', '2254.66', '-1112.17', '1049.13', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '533', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('576', '2495.42', '-1398.81', '29.3131', '2297.93', '-1093.84', '1048.87', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '534', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('577', '2495.38', '-1410.34', '29.3131', '2254.75', '-1111.79', '1049.13', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '535', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('578', '2468.33', '-1431.68', '29.3131', '242.788', '322.966', '999.591', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '536', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('579', '2473.15', '-1431.68', '29.3131', '265.917', '321.537', '997.143', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '537', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('580', '2476.34', '-1431.68', '29.3131', '2297.93', '-1093.84', '1048.87', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '538', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('581', '2487.33', '-1431.68', '29.0162', '2254.75', '-1111.79', '1049.13', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '539', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('582', '2492.16', '-1431.68', '29.0162', '2188.69', '-1073.57', '1050.48', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '540', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('583', '2495.39', '-1431.68', '29.0162', '265.917', '321.537', '997.143', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '541', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('584', '2495.38', '-1424.58', '29.0162', '2297.93', '-1093.84', '1048.87', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '542', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('585', '2492.2', '-1424.58', '29.0162', '2188.69', '-1073.57', '1050.48', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '543', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('586', '2487.28', '-1424.58', '29.0162', '2297.93', '-1093.84', '1048.87', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '544', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('587', '2476.36', '-1424.58', '29.3131', '2297.93', '-1093.84', '1048.87', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '545', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('588', '2473.14', '-1424.58', '29.3131', '2188.69', '-1073.57', '1050.48', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '546', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('589', '2468.31', '-1424.58', '29.3131', '265.917', '321.537', '997.143', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '547', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('590', '2468.33', '-1417.44', '29.3131', '2297.93', '-1093.84', '1048.87', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '548', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('591', '2473.14', '-1417.44', '29.3131', '2254.75', '-1111.79', '1049.13', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '549', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('592', '2476.35', '-1417.44', '29.3131', '2188.69', '-1073.57', '1050.48', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '550', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('593', '2487.3', '-1417.44', '29.3131', '265.917', '321.537', '997.143', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '551', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('594', '2492.19', '-1417.44', '29.3131', '2297.93', '-1093.84', '1048.87', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '552', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('596', '2495.39', '-1417.44', '29.3131', '2254.75', '-1111.79', '1049.13', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '553', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('597', '2487.33', '-1410.34', '29.3131', '242.788', '322.966', '999.591', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '554', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('598', '2492.18', '-1410.34', '29.3131', '2297.93', '-1093.84', '1048.87', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '555', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('599', '2579.66', '-1033.2', '69.5798', '-48.1451', '1458.45', '1085.61', 'East Los Santos street', 'Cletus_Cromwell', '1', '0', '20000', '3', '10', '1', '10', '555', '0', '43', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('600', '2473.14', '-1391.71', '29.3131', '2254.75', '-1111.79', '1049.13', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '557', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('601', '2468.29', '-1391.71', '29.3131', '2297.93', '-1093.84', '1048.87', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '558', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('602', '2468.29', '-1383.37', '29.3131', '265.917', '321.537', '997.143', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '559', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('603', '2473.16', '-1383.37', '29.3131', '2188.69', '-1073.57', '1050.48', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '560', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('604', '2165.12', '-1775.79', '801.086', '2254.75', '-1111.79', '1049.13', 'Idlewood Projects', 'The State', '0', '0', '25000', '3', '0', '0', '10', '561', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('605', '2165.26', '-1780.3', '801.086', '2189.07', '-1073.55', '1050.48', 'Idlewood Projects', 'The State', '0', '0', '25000', '3', '0', '0', '10', '562', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('606', '2155.82', '-1775.62', '801.086', '265.917', '321.537', '997.143', 'Idlewood Projects', 'The State', '0', '0', '25000', '3', '0', '0', '10', '563', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('607', '2155.86', '-1780.22', '801.086', '2297.93', '-1093.84', '1048.87', 'Idlewood Projects', 'Statul', '0', '1', '25000', '3', '0', '0', '10', '564', '0', '0', '0=0|0=0|0=0|0=0|0=0', '2296.51', '-1092.62', '1048.87', '0');
INSERT INTO `houses` VALUES ('608', '2157.56', '-1781.95', '801.086', '2189.07', '-1073.55', '1050.48', 'Idlewood Projects', 'The State', '0', '0', '25000', '3', '0', '0', '10', '565', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('609', '2492.18', '-1383.37', '29.3131', '242.788', '322.966', '999.591', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '566', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('610', '2487.36', '-1383.37', '29.3131', '2297.93', '-1093.84', '1048.87', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '567', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('611', '1872.76', '-1585.98', '799.321', '242.788', '322.966', '999.591', 'Montgomery Projects', 'The State', '0', '0', '25000', '3', '0', '0', '10', '568', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('612', '1875.91', '-1579.36', '799.321', '2189.07', '-1073.55', '1050.48', 'Montgomery Projects', 'The State', '0', '0', '25000', '3', '0', '0', '10', '569', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('613', '1870.83', '-1585.95', '802.749', '2297.93', '-1093.84', '1048.87', 'Montgomery Projects', 'Statul', '0', '1', '25000', '3', '0', '0', '10', '570', '0', '15', '0=0|0=0|0=0|0=0|0=0', '2295.4', '-1092.86', '1048.87', '0');
INSERT INTO `houses` VALUES ('614', '1877.87', '-1583.61', '802.749', '242.788', '322.966', '999.591', 'Montgomery Projects', 'Statul', '0', '1', '25000', '3', '0', '0', '10', '571', '0', '0', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('615', '1875.25', '-1586.08', '802.749', '265.917', '321.537', '997.143', 'Montgomery Projects', 'The State', '0', '0', '25000', '3', '0', '0', '10', '572', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('616', '1875.99', '-1584.47', '799.321', '243.257', '322.972', '999.591', 'Montgomery Projects', 'The State', '0', '0', '25000', '3', '0', '0', '10', '573', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('617', '2476.34', '-1376.27', '29.3131', '2189.07', '-1073.55', '1050.48', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '574', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('618', '2473.19', '-1376.27', '29.3131', '2297.93', '-1093.84', '1048.87', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '575', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('619', '2468.28', '-1376.27', '29.3131', '2254.75', '-1111.79', '1049.13', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '576', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('620', '1871.5', '-1577.91', '799.321', '243.257', '322.972', '999.591', 'Montgomery Projects', 'The State', '0', '0', '25000', '3', '0', '0', '10', '577', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('621', '1866.64', '-1577.98', '799.321', '2297.93', '-1093.84', '1048.87', 'Montgomery Projects', 'The State', '0', '0', '25000', '3', '0', '0', '10', '578', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('622', '1875.96', '-1577.9', '802.749', '2254.75', '-1111.79', '1049.13', 'Montgomery Projects', 'The State', '0', '1', '25000', '3', '0', '0', '10', '579', '0', '7', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('623', '2476.33', '-1359.1', '29.3131', '265.917', '321.537', '997.143', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '580', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('624', '1870.64', '-1577.7', '802.749', '2284.78', '-1126.49', '1050.92', 'Montgomery Projects', 'The State', '0', '1', '25000', '1', '0', '0', '10', '580', '0', '19', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('625', '2468.29', '-1359.1', '29.3131', '2297.93', '-1093.84', '1048.87', 'East Los Santos street', 'The State', '0', '0', '20000', '3', '0', '0', '10', '582', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('626', '818.244', '-509.318', '18.0129', '289.767', '1502.04', '1078.42', 'Dillimore', 'Statul', '0', '1', '40000', '3', '0', '0', '10', '583', '0', '20', '0=0|0=0|0=0|0=0|0=0', '289.652', '1502.48', '1078.42', '0');
INSERT INTO `houses` VALUES ('627', '795.237', '-506.148', '18.0129', '-48.9746', '1458.69', '1085.61', 'Dillimore', 'Damian_Sifuentes', '1', '0', '40000', '3', '0', '0', '10', '584', '0', '53', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('628', '776.717', '-503.483', '18.0129', '374.889', '1378.46', '1079.8', 'Dillimore', 'The State', '0', '0', '40000', '3', '0', '0', '10', '585', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('629', '1248.79', '-871.027', '46.6329', '289.767', '1502.04', '1078.42', 'LS', 'The State', '0', '0', '30000', '3', '0', '0', '10', '586', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('630', '1245.56', '-902.827', '46.5939', '2272.82', '-1242.61', '1048.6', 'Los Santos', 'Statul', '0', '1', '25000', '1', '0', '0', '10', '587', '0', '4', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('632', '1241.32', '-872.166', '46.6329', '290.89', '1242.41', '1082.68', 'ls', 'The State', '0', '0', '30000', '3', '0', '0', '10', '589', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('633', '1445.4', '-1313.82', '13.5412', '46.0741', '1439.5', '1082.42', 'Los Santos', 'Jimmy_Ojeda', '1', '0', '20000', '1', '0', '0', '10', '588', '0', '9', '0=0|0=0|0=0|0=0|0=0', '36.1589', '1447.19', '1082.41', '0');
INSERT INTO `houses` VALUES ('634', '2233.29', '-1159.76', '25.8906', '2149.99', '-1219.17', '1049.12', 'Los Santos', 'Statul', '0', '1', '25000', '1', '0', '0', '10', '591', '0', '0', '0=0|0=0|0=0|0=0|0=0', '2149.5', '-1222.36', '1049.12', '0');
INSERT INTO `houses` VALUES ('635', '2282.3', '-1641.21', '15.8898', '-80.1617', '1384.59', '1078.96', 'Ganton street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '592', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('636', '2257.16', '-1643.95', '15.8082', '-49.1778', '1458.64', '1085.61', 'Ganton street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '593', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('637', '2244.44', '-1637.61', '16.2379', '-49.1778', '1458.64', '1085.61', 'Ganton street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '594', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('638', '2307.02', '-1679.2', '14.3316', '-80.1617', '1384.59', '1078.96', 'Ganton street', 'The State', '0', '0', '40000', '3', '0', '0', '10', '595', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('640', '691.58', '-1275.85', '13.5607', '1260.65', '-785.442', '1091.91', 'GOV Mansion', 'The State', '0', '0', '1000000000', '9999', '0', '0', '5', '596', '0', '0', '0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('644', '2148.53', '-1320.08', '26.0738', '199.02', '1110.65', '1083.21', 'Jefferson street', 'Denis_Bolton', '1', '0', '30000', '3', '0', '1', '10', '597', '0', '16', '0=0|0=0|0=0|0=0|0=0', '198.969', '1110.99', '1083.21', '0');
INSERT INTO `houses` VALUES ('646', '254.389', '-1367.14', '53.1094', '2373.46', '-1184.07', '1053.21', 'Richman', 'Statul', '0', '1', '500000', '5', '0', '0', '10', '598', '0', '26', '0=0|0=0|0=0|0=0|0=0', '2373.04', '-1183.44', '1053.21', '0');
INSERT INTO `houses` VALUES ('647', '2156.14', '-1767.6', '801.086', '-79.9297', '1383.29', '1078.96', 'Idlewood Projects', 'Statul', '0', '1', '25000', '3', '0', '0', '10', '110', '0', '0', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('648', '2156.03', '-1771.81', '801.086', '-48.3771', '1458.46', '1085.61', 'Idlewood Projects', 'Statul', '0', '1', '25000', '3', '0', '0', '10', '599', '0', '0', '0=0|0=0|0=0|0=0|0=0', '0', '0', '0', '0');
INSERT INTO `houses` VALUES ('649', '2164.98', '-1771.55', '801.086', '390.253', '1505.97', '1080.09', 'Idlewood Projects', 'Kentzy_Greywood', '1', '1', '25000', '3', '1', '0', '10', '600', '0', '38', '0=0|0=0|0=0|0=0|0=0', '376.705', '1501.69', '1080.09', '0');
INSERT INTO `houses` VALUES ('650', '-144.638', '-49.9074', '3.11719', '1.64591', '-3.0592', '999.428', 'Blueberry Acres', 'The State', '0', '0', '15000', '3', '0', '0', '2', '600', '0', null, null, '0', '0', '0', '0');

-- ----------------------------
-- Table structure for infos
-- ----------------------------
DROP TABLE IF EXISTS `infos`;
CREATE TABLE `infos` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `posx` float DEFAULT NULL,
  `posy` float DEFAULT NULL,
  `posz` float DEFAULT NULL,
  `virworld` int(64) DEFAULT NULL,
  `labeltext` varchar(255) DEFAULT NULL,
  `labeltext2` varchar(255) DEFAULT NULL,
  `otherinfo` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of infos
-- ----------------------------
INSERT INTO `infos` VALUES ('1', '1317.22', '-822.6', '1099.53', '-1', 'BANCA LOS SANTOS', '/bankhelp', '/bankcmds');
INSERT INTO `infos` VALUES ('2', '1490.42', '1305.64', '1093.3', '0', 'DMV', '/dmv', '/dmv');

-- ----------------------------
-- Table structure for jobs
-- ----------------------------
DROP TABLE IF EXISTS `jobs`;
CREATE TABLE `jobs` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `jobid` int(24) DEFAULT NULL,
  `name` varchar(24) DEFAULT NULL,
  `posx` float DEFAULT NULL,
  `posy` float DEFAULT NULL,
  `posz` float DEFAULT NULL,
  `ranks` int(24) DEFAULT NULL,
  `highrank` int(24) DEFAULT NULL,
  `rank1` varchar(100) DEFAULT NULL,
  `rank2` varchar(100) DEFAULT NULL,
  `rank3` varchar(100) DEFAULT NULL,
  `rank4` varchar(100) DEFAULT NULL,
  `rank5` varchar(100) DEFAULT NULL,
  `rank6` varchar(100) DEFAULT NULL,
  `rank7` varchar(100) DEFAULT NULL,
  `rank8` varchar(100) DEFAULT NULL,
  `rank9` varchar(100) DEFAULT NULL,
  `rank10` varchar(100) DEFAULT NULL,
  `sidejob` int(11) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=16 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of jobs
-- ----------------------------
INSERT INTO `jobs` VALUES ('4', '3', 'TAXI', '922.029', '2380.6', '246.462', '1', '1', null, null, null, null, null, null, null, null, null, null, '1');
INSERT INTO `jobs` VALUES ('11', '2', 'MECHANIC', '207.819', '-233.287', '1.557', '1', '1', null, null, null, null, null, null, null, null, null, null, '1');
INSERT INTO `jobs` VALUES ('12', '1', 'TRUCKER', '-50.518', '-233.583', '6.76462', '4', '4', 'Incepator', 'Avansat', 'Expert', 'Veteran', 'NULL', 'NULL', 'NULL', 'NULL', 'NULL', 'NULL', '0');
INSERT INTO `jobs` VALUES ('14', '4', 'GARBAGE', '2405.87', '82.1507', '26.4739', '1', '1', null, null, null, null, null, null, null, null, null, null, '0');
INSERT INTO `jobs` VALUES ('15', '7', 'FERMIER', '-112.472', '-10.4426', '3.1094', '1', '1', null, null, null, null, null, null, null, null, null, null, '0');

-- ----------------------------
-- Table structure for kicks
-- ----------------------------
DROP TABLE IF EXISTS `kicks`;
CREATE TABLE `kicks` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `player` varchar(255) DEFAULT NULL,
  `victim` varchar(255) DEFAULT NULL,
  `reason` varchar(255) DEFAULT NULL,
  `data` varchar(255) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of kicks
-- ----------------------------

-- ----------------------------
-- Table structure for labels
-- ----------------------------
DROP TABLE IF EXISTS `labels`;
CREATE TABLE `labels` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `posx` float DEFAULT NULL,
  `posy` float DEFAULT NULL,
  `posz` float DEFAULT NULL,
  `color` int(11) DEFAULT NULL,
  `virworld` int(64) DEFAULT NULL,
  `labeltext` varchar(255) DEFAULT NULL,
  `gametext` int(11) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=86 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of labels
-- ----------------------------
INSERT INTO `labels` VALUES ('1', '1128.99', '-1488.91', '22.769', '-65281', '0', '/ad | /cad - $1,000', '0');
INSERT INTO `labels` VALUES ('2', '1096.21', '-1440', '15.7981', '-65281', '0', '/buy - Clothing.', '0');
INSERT INTO `labels` VALUES ('3', '1109.19', '-1529.53', '15.7981', '-65281', '0', '/buy - Sports Items.', '0');
INSERT INTO `labels` VALUES ('4', '1093.72', '-1506.08', '15.7981', '-65281', '0', '/buy - Guitars/BoomBox', '0');
INSERT INTO `labels` VALUES ('6', '207.576', '-100.983', '1005.26', '-65281', '-1', 'Binco - /buyclothes', '0');
INSERT INTO `labels` VALUES ('8', '312.282', '-165.577', '999.601', '-1', '0', '/armoury', '0');
INSERT INTO `labels` VALUES ('16', '221.558', '114.693', '999.016', '-65281', '0', '/arrest', '0');
INSERT INTO `labels` VALUES ('17', '262.026', '109.144', '1004.62', '-1', '0', '~w~To use: ~y~/cctv', '1');
INSERT INTO `labels` VALUES ('18', '362.303', '173.57', '1008.38', '-1', '0', '~w~City Hall Desk~n~~y~Commands: /fine', '1');
INSERT INTO `labels` VALUES ('21', '-392.188', '-1439.18', '26.339', '-1', '0', '~w~Drug Dealer~n~~y~/drugmenu', '1');
INSERT INTO `labels` VALUES ('24', '216.244', '-99.9483', '1005.26', '-1', '0', '/buy-Accesorii', '1');
INSERT INTO `labels` VALUES ('26', '-2650.41', '1414.29', '945.536', '-1', '0', '/armoury', '0');
INSERT INTO `labels` VALUES ('30', '367.262', '215.725', '1008.38', '-1', '0', '/armoury', '0');
INSERT INTO `labels` VALUES ('43', '150.665', '-177.3', '1.57812', '-1', '0', '/makeweapon', '1');
INSERT INTO `labels` VALUES ('55', '2427.94', '-2455.71', '13.6285', '-1', '0', '~w~/buycomp ~n~~y~ CUMPARA COMPONENTE', '1');
INSERT INTO `labels` VALUES ('57', '138.331', '1677.47', '999.136', '-1', '0', '/exitplane', '0');
INSERT INTO `labels` VALUES ('58', '375.614', '-118.804', '1001.5', '-1', '2', '/meal', '0');
INSERT INTO `labels` VALUES ('61', '-2032.66', '-117.247', '1035.17', '-1', '0', '~r~Departament of Motor and Vehicles~n~~w~/dmv', '1');
INSERT INTO `labels` VALUES ('62', '421.687', '-77.857', '1001.8', '-1', '21', '/haricut', '0');
INSERT INTO `labels` VALUES ('63', '327.233', '306.729', '999.148', '-1', '0', '/uniform', '0');
INSERT INTO `labels` VALUES ('64', '327.233', '307.786', '999.148', '-1', '0', '/duty', '0');
INSERT INTO `labels` VALUES ('66', '257.15', '1776.88', '701.086', '-1', '0', '/duty', '0');
INSERT INTO `labels` VALUES ('67', '915.771', '2370.46', '246.462', '-1', '0', '~o~ORANGE COUNTY~n~~w~TOWN HALL~n~~r~/fine', '1');
INSERT INTO `labels` VALUES ('68', '1053.92', '-343.399', '73.9922', '-1', '0', 'OCSD IMPOUND', '0');
INSERT INTO `labels` VALUES ('70', '2102.99', '-103.408', '2.29095', '-1', '0', 'Fishing Place (/fish)', '0');
INSERT INTO `labels` VALUES ('71', '2322.34', '-37.6393', '26.4844', '-1', '0', '/unloadfish', '1');
INSERT INTO `labels` VALUES ('78', '920.057', '2368.62', '246.462', '-2139094785', '0', '/dmv', '1');
INSERT INTO `labels` VALUES ('81', '2409.34', '82.038', '26.473', '-1', '0', '/takeuniform', '0');
INSERT INTO `labels` VALUES ('82', '2316.62', '-9.92382', '26.7422', '-1', '2', '/bankhelp', '0');
INSERT INTO `labels` VALUES ('83', '200.014', '-252.948', '1.38', '-1', '0', '/buycomp', '1');
INSERT INTO `labels` VALUES ('84', '915.01', '2365.95', '246.462', '-1', '0', '/duty~n~/armoury', '1');
INSERT INTO `labels` VALUES ('85', '916.438', '2375.89', '246.462', '-1', '0', '/ad /cad', '0');

-- ----------------------------
-- Table structure for movedoors
-- ----------------------------
DROP TABLE IF EXISTS `movedoors`;
CREATE TABLE `movedoors` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `model` int(150) NOT NULL DEFAULT '0',
  `faction` int(10) NOT NULL DEFAULT '0',
  `posx` float NOT NULL DEFAULT '0',
  `posy` float NOT NULL DEFAULT '0',
  `posz` float NOT NULL DEFAULT '0',
  `posrx` float NOT NULL DEFAULT '0',
  `posry` float NOT NULL DEFAULT '0',
  `posrz` float NOT NULL DEFAULT '0',
  `interior` int(11) NOT NULL DEFAULT '0',
  `virworld` int(64) NOT NULL DEFAULT '0',
  `name` varchar(255) NOT NULL DEFAULT 'None',
  `openspeed` float NOT NULL DEFAULT '0',
  `movex` float NOT NULL DEFAULT '0',
  `movey` float NOT NULL DEFAULT '0',
  `movez` float NOT NULL DEFAULT '0',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=21 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of movedoors
-- ----------------------------
INSERT INTO `movedoors` VALUES ('1', '977', '1', '239.63', '118.581', '1003.23', '0', '0', '-79', '10', '0', 'LSPD', '2', '0', '1.99', '0');
INSERT INTO `movedoors` VALUES ('2', '977', '1', '253.181', '110.08', '1003.23', '0', '0', '-79', '10', '0', 'LSPD', '2', '0', '1.99', '0');
INSERT INTO `movedoors` VALUES ('4', '1495', '2', '-2652.95', '1409.08', '944.535', '0', '0', '89.9', '0', '0', 'LSFD', '1.8', '0', '1.3', '0');
INSERT INTO `movedoors` VALUES ('5', '1495', '2', '-2657.75', '1405.54', '944.535', '0', '0', '89.9', '0', '0', 'LSFD', '1.8', '0', '1.3', '0');
INSERT INTO `movedoors` VALUES ('6', '1495', '2', '-2652.9', '1396.43', '944.535', '0', '0', '90', '0', '0', 'LSFD', '1.8', '0', '1.3', '0');
INSERT INTO `movedoors` VALUES ('7', '1495', '2', '-2652.09', '1400.01', '944.535', '0', '0', '0', '0', '0', 'LSFD', '1.8', '1.3', '0', '0');
INSERT INTO `movedoors` VALUES ('8', '1495', '2', '-2660.03', '1407.65', '944.535', '0', '0', '0', '0', '0', 'LSFD', '1.8', '1.3', '0', '0');
INSERT INTO `movedoors` VALUES ('9', '1495', '2', '-2652.93', '1380.74', '944.536', '0', '0', '89.8', '0', '0', 'LSFD', '1.8', '0', '1.3', '0');
INSERT INTO `movedoors` VALUES ('10', '1495', '1', '1582.6', '-1637.95', '12.3705', '0', '0', '-1.2', '0', '0', 'LSPD', '2', '1.3', '0', '0');
INSERT INTO `movedoors` VALUES ('13', '1495', '2', '145.112', '-1993.46', '2000.83', '0', '0', '0', '0', '0', 'LSFD-DUTY', '5', '1.3', '0', '0');
INSERT INTO `movedoors` VALUES ('14', '1495', '2', '163.192', '-1962', '2000.84', '0', '0', '179.9', '0', '0', 'LSFD-RECEPTIE', '5', '-1.3', '0', '0');
INSERT INTO `movedoors` VALUES ('18', '977', '1', '216.822', '116.511', '999.022', '0', '0', '11.2', '10', '0', 'LSPD-Inside-Arrest', '2', '1', '0', '0');
INSERT INTO `movedoors` VALUES ('19', '2928', '1', '2799.75', '-2405.3', '14.5608', '0', '0', '0', '0', '0', 'IMPOUND-LEFT', '5', '0', '0', '2.5');
INSERT INTO `movedoors` VALUES ('20', '2928', '1', '2799.7', '-2430.06', '14.5625', '0', '0', '0', '0', '0', 'IMPOUND-RIGHT', '5', '0', '0', '2.5');

-- ----------------------------
-- Table structure for objects
-- ----------------------------
DROP TABLE IF EXISTS `objects`;
CREATE TABLE `objects` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `model` int(255) DEFAULT NULL,
  `posx` float DEFAULT NULL,
  `posy` float DEFAULT NULL,
  `posz` float DEFAULT NULL,
  `posrx` float DEFAULT NULL,
  `posry` float DEFAULT NULL,
  `posrz` float DEFAULT NULL,
  `interior` int(11) DEFAULT NULL,
  `virworld` int(64) DEFAULT NULL,
  `objectname` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of objects
-- ----------------------------

-- ----------------------------
-- Table structure for ownedvehicles
-- ----------------------------
DROP TABLE IF EXISTS `ownedvehicles`;
CREATE TABLE `ownedvehicles` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `model` int(64) DEFAULT NULL,
  `color1` int(64) DEFAULT '1',
  `color2` int(64) DEFAULT '1',
  `parkx` float DEFAULT NULL,
  `parky` float DEFAULT NULL,
  `parkz` float DEFAULT NULL,
  `parka` float DEFAULT NULL,
  `plate` varchar(255) DEFAULT NULL,
  `owner` varchar(64) DEFAULT NULL,
  `owned` int(11) DEFAULT NULL,
  `slot` int(11) DEFAULT NULL,
  `alarm` int(11) DEFAULT '0',
  `lock` int(11) DEFAULT '0',
  `immob` int(11) DEFAULT '0',
  `insurances` int(64) DEFAULT '2',
  `destroys` int(11) DEFAULT '0',
  `gps` int(11) DEFAULT '0',
  `fuel` int(64) DEFAULT '50',
  `registered` int(11) DEFAULT '1',
  `broken` int(11) DEFAULT '0',
  `weapons` text,
  `comp0` int(64) DEFAULT '0',
  `comp1` int(64) DEFAULT '0',
  `comp2` int(64) DEFAULT '0',
  `comp3` int(64) DEFAULT '0',
  `comp4` int(64) DEFAULT '0',
  `comp5` int(64) DEFAULT '0',
  `comp6` int(64) DEFAULT '0',
  `comp7` int(64) DEFAULT '0',
  `comp8` int(64) DEFAULT '0',
  `comp9` int(64) DEFAULT '0',
  `comp10` int(64) DEFAULT '0',
  `comp11` int(64) DEFAULT '0',
  `comp12` int(64) DEFAULT '0',
  `comp13` int(64) DEFAULT '0',
  `paintjob` int(64) DEFAULT '3',
  `radio` int(11) DEFAULT '0',
  `tickets` text,
  `dupkey` int(64) DEFAULT NULL,
  `comps` int(64) DEFAULT '0',
  `drugs` text,
  `faction` int(64) DEFAULT '0',
  `radardetector` int(11) DEFAULT NULL,
  `panels` int(11) DEFAULT NULL,
  `doors` int(11) DEFAULT NULL,
  `lights` int(11) DEFAULT NULL,
  `tires` int(11) DEFAULT NULL,
  `health` float(11,0) NOT NULL DEFAULT '1000',
  `impound` int(11) DEFAULT '0',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of ownedvehicles
-- ----------------------------

-- ----------------------------
-- Table structure for parkmeters
-- ----------------------------
DROP TABLE IF EXISTS `parkmeters`;
CREATE TABLE `parkmeters` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `posx` float DEFAULT NULL,
  `posy` float DEFAULT NULL,
  `posz` float DEFAULT NULL,
  `posrx` float DEFAULT NULL,
  `posry` float DEFAULT NULL,
  `posrz` float DEFAULT NULL,
  `name` varchar(255) DEFAULT NULL,
  `minutes` int(255) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of parkmeters
-- ----------------------------

-- ----------------------------
-- Table structure for plants
-- ----------------------------
DROP TABLE IF EXISTS `plants`;
CREATE TABLE `plants` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `planter` varchar(24) DEFAULT NULL,
  `growtime` int(24) DEFAULT NULL,
  `posx` float DEFAULT NULL,
  `posy` float DEFAULT NULL,
  `posz` float DEFAULT NULL,
  `made` int(64) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of plants
-- ----------------------------

-- ----------------------------
-- Table structure for playercharges
-- ----------------------------
DROP TABLE IF EXISTS `playercharges`;
CREATE TABLE `playercharges` (
  `id` int(11) NOT NULL,
  `player` char(128) NOT NULL,
  `charge` text NOT NULL,
  `officer` text NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of playercharges
-- ----------------------------

-- ----------------------------
-- Table structure for playertoys
-- ----------------------------
DROP TABLE IF EXISTS `playertoys`;
CREATE TABLE `playertoys` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `pid` int(255) DEFAULT NULL,
  `name` varchar(128) DEFAULT NULL,
  `model` int(11) DEFAULT NULL,
  `bone` int(11) DEFAULT NULL,
  `offestx` float DEFAULT NULL,
  `offesty` float DEFAULT NULL,
  `offestz` float DEFAULT NULL,
  `rotx` float DEFAULT NULL,
  `roty` float DEFAULT NULL,
  `rotz` float DEFAULT NULL,
  `scalex` float DEFAULT NULL,
  `scaley` float DEFAULT NULL,
  `scalez` float DEFAULT NULL,
  `player` text NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of playertoys
-- ----------------------------

-- ----------------------------
-- Table structure for player_notes
-- ----------------------------
DROP TABLE IF EXISTS `player_notes`;
CREATE TABLE `player_notes` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `pid` int(64) DEFAULT NULL,
  `note` text,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of player_notes
-- ----------------------------

-- ----------------------------
-- Table structure for radios
-- ----------------------------
DROP TABLE IF EXISTS `radios`;
CREATE TABLE `radios` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `channelid` int(64) DEFAULT NULL,
  `owner` varchar(64) DEFAULT NULL,
  `pass` varchar(64) DEFAULT NULL,
  `protected` int(11) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of radios
-- ----------------------------

-- ----------------------------
-- Table structure for smslog
-- ----------------------------
DROP TABLE IF EXISTS `smslog`;
CREATE TABLE `smslog` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `name` varchar(255) DEFAULT NULL,
  `fromnumber` int(255) DEFAULT NULL,
  `info` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of smslog
-- ----------------------------

-- ----------------------------
-- Table structure for spraytags
-- ----------------------------
DROP TABLE IF EXISTS `spraytags`;
CREATE TABLE `spraytags` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `text` text,
  `x` float DEFAULT NULL,
  `y` float DEFAULT NULL,
  `z` float DEFAULT NULL,
  `rx` float DEFAULT NULL,
  `ry` float DEFAULT NULL,
  `rz` float DEFAULT NULL,
  `owner` text,
  `size` int(11) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of spraytags
-- ----------------------------

-- ----------------------------
-- Table structure for trashbins
-- ----------------------------
DROP TABLE IF EXISTS `trashbins`;
CREATE TABLE `trashbins` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `model` int(11) DEFAULT NULL,
  `posx` float DEFAULT NULL,
  `posy` float DEFAULT NULL,
  `posz` float DEFAULT NULL,
  `rotx` float DEFAULT NULL,
  `roty` float DEFAULT NULL,
  `rotz` float DEFAULT NULL,
  `picked` int(11) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=50 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of trashbins
-- ----------------------------
INSERT INTO `trashbins` VALUES ('1', '1409', '2543.71', '64.1558', '25.5393', '0', '0', '90', '0');
INSERT INTO `trashbins` VALUES ('2', '1409', '2543.5', '89.2161', '25.5393', '0', '0', '90', '0');
INSERT INTO `trashbins` VALUES ('3', '1409', '2511.54', '121.105', '25.5393', '0', '0', '180', '0');
INSERT INTO `trashbins` VALUES ('4', '1409', '2473.64', '121.351', '25.5393', '0', '0', '180', '0');
INSERT INTO `trashbins` VALUES ('5', '1409', '2454.32', '92.9575', '25.5393', '0', '0', '-90', '0');
INSERT INTO `trashbins` VALUES ('6', '1409', '2473.48', '61.2659', '25.5393', '0', '0', '90', '0');
INSERT INTO `trashbins` VALUES ('7', '1409', '2498.34', '101.974', '25.5393', '0', '0', '0', '0');
INSERT INTO `trashbins` VALUES ('8', '1409', '2445.38', '51.2127', '25.5393', '0', '0', '180', '0');
INSERT INTO `trashbins` VALUES ('9', '1409', '2418.61', '51.4756', '25.5393', '0', '0', '180', '0');
INSERT INTO `trashbins` VALUES ('10', '1409', '2490.17', '1.37411', '25.5393', '0', '0', '180', '0');
INSERT INTO `trashbins` VALUES ('11', '1409', '2507.53', '1.41624', '25.5393', '0', '0', '180', '0');
INSERT INTO `trashbins` VALUES ('12', '1409', '2543.62', '18.7241', '25.5393', '0', '0', '90', '0');
INSERT INTO `trashbins` VALUES ('13', '1409', '2543.66', '-0.84608', '25.5393', '0', '0', '90', '0');
INSERT INTO `trashbins` VALUES ('14', '1409', '2511.23', '-17.8219', '25.5393', '0', '0', '0', '0');
INSERT INTO `trashbins` VALUES ('15', '1409', '2486.04', '-17.8655', '25.5393', '0', '0', '0', '0');
INSERT INTO `trashbins` VALUES ('16', '1409', '2450.69', '-18.6244', '25.5393', '0', '0', '180', '0');
INSERT INTO `trashbins` VALUES ('17', '1409', '2431.28', '-37.8908', '25.5393', '0', '0', '0', '0');
INSERT INTO `trashbins` VALUES ('18', '1409', '2401.18', '-38.002', '25.5393', '0', '0', '0', '0');
INSERT INTO `trashbins` VALUES ('19', '1409', '2363.53', '-38.0499', '25.5393', '0', '0', '0', '0');
INSERT INTO `trashbins` VALUES ('20', '1409', '2454.04', '25.4782', '25.5393', '0', '0', '-90', '0');
INSERT INTO `trashbins` VALUES ('21', '1409', '2384.2', '-5.87065', '25.5393', '0', '0', '-90', '0');
INSERT INTO `trashbins` VALUES ('22', '1409', '2384.24', '22.0204', '25.5393', '0', '0', '-90', '0');
INSERT INTO `trashbins` VALUES ('23', '1409', '2384.26', '65.8509', '25.5393', '0', '0', '-90', '0');
INSERT INTO `trashbins` VALUES ('24', '1409', '2399.96', '101.324', '25.5393', '0', '0', '180', '0');
INSERT INTO `trashbins` VALUES ('25', '1409', '2334.39', '116.896', '25.5393', '0', '0', '-90', '0');
INSERT INTO `trashbins` VALUES ('26', '1409', '2334.49', '139.101', '25.5393', '0', '0', '-90', '0');
INSERT INTO `trashbins` VALUES ('27', '1409', '2334.51', '160.917', '25.5393', '0', '0', '-90', '0');
INSERT INTO `trashbins` VALUES ('28', '1409', '2334.25', '192.613', '25.5393', '0', '0', '-90', '0');
INSERT INTO `trashbins` VALUES ('29', '1409', '2353.62', '189.726', '25.5393', '0', '0', '90', '0');
INSERT INTO `trashbins` VALUES ('30', '1409', '2353.45', '167.898', '25.5393', '0', '0', '90', '0');
INSERT INTO `trashbins` VALUES ('31', '1409', '2353.48', '139.047', '25.5393', '0', '0', '90', '0');
INSERT INTO `trashbins` VALUES ('32', '1409', '2353.39', '117.849', '25.5393', '0', '0', '90', '0');
INSERT INTO `trashbins` VALUES ('33', '1409', '2317.86', '-107.965', '25.5393', '0', '0', '0', '0');
INSERT INTO `trashbins` VALUES ('34', '1409', '2267.74', '-108.679', '25.5393', '0', '0', '0', '0');
INSERT INTO `trashbins` VALUES ('35', '1409', '2243.8', '-107.972', '25.5393', '0', '0', '0', '0');
INSERT INTO `trashbins` VALUES ('36', '1409', '2403.65', '19.2896', '25.5393', '0', '0', '90', '0');
INSERT INTO `trashbins` VALUES ('37', '1409', '2403.61', '-2.12723', '25.5393', '0', '0', '90', '0');
INSERT INTO `trashbins` VALUES ('38', '1409', '2214.33', '-90.4415', '25.5393', '0', '0', '-90', '0');
INSERT INTO `trashbins` VALUES ('39', '1409', '2214.24', '-62.0019', '25.5393', '0', '0', '-90', '0');
INSERT INTO `trashbins` VALUES ('40', '1409', '2214.3', '-36.6569', '25.5393', '0', '0', '-90', '0');
INSERT INTO `trashbins` VALUES ('41', '1409', '2251.76', '-18.7325', '25.5393', '0', '0', '0', '0');
INSERT INTO `trashbins` VALUES ('42', '1409', '2269.36', '-18.8389', '25.5393', '0', '0', '0', '0');
INSERT INTO `trashbins` VALUES ('43', '1409', '2267.2', '101.331', '25.5393', '0', '0', '0', '0');
INSERT INTO `trashbins` VALUES ('44', '1409', '2251.22', '101.28', '25.5393', '0', '0', '0', '0');
INSERT INTO `trashbins` VALUES ('45', '1409', '2261.74', '151.243', '25.5393', '0', '0', '0', '0');
INSERT INTO `trashbins` VALUES ('46', '1409', '2283.79', '151.243', '25.5393', '0', '0', '0', '0');
INSERT INTO `trashbins` VALUES ('47', '1409', '2240.51', '151.338', '25.5393', '0', '0', '0', '0');
INSERT INTO `trashbins` VALUES ('48', '1409', '2214.34', '107.48', '25.5393', '0', '0', '90', '0');
INSERT INTO `trashbins` VALUES ('49', '1409', '2214.35', '72.549', '25.5393', '0', '0', '90', '0');

-- ----------------------------
-- Table structure for ucp_news
-- ----------------------------
DROP TABLE IF EXISTS `ucp_news`;
CREATE TABLE `ucp_news` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `newst` text,
  `title` text,
  `autor` text,
  `date` text,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of ucp_news
-- ----------------------------

-- ----------------------------
-- Table structure for ucp_register
-- ----------------------------
DROP TABLE IF EXISTS `ucp_register`;
CREATE TABLE `ucp_register` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `name` text,
  `pass` text,
  `secret` text,
  `rp` text,
  `mg` text,
  `pg` text,
  `anterior` text,
  `regulament` text,
  `exemplu` text,
  `experienta` text,
  `email` text,
  `admin` text,
  `verificat` int(1) NOT NULL DEFAULT '0',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of ucp_register
-- ----------------------------

-- ----------------------------
-- Table structure for users
-- ----------------------------
DROP TABLE IF EXISTS `users`;
CREATE TABLE `users` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `name` varchar(24) NOT NULL DEFAULT 'None',
  `password` varchar(40) NOT NULL DEFAULT 'None',
  `secret` varchar(255) NOT NULL DEFAULT 'None',
  `registered` int(11) NOT NULL DEFAULT '0',
  `cash` int(255) NOT NULL DEFAULT '0',
  `bank` int(255) NOT NULL DEFAULT '0',
  `skin` int(11) NOT NULL DEFAULT '100',
  `sex` int(11) NOT NULL DEFAULT '0',
  `age` int(11) NOT NULL DEFAULT '0',
  `origin` varchar(255) NOT NULL DEFAULT 'Romania',
  `level` int(20) NOT NULL DEFAULT '1',
  `exp` int(20) NOT NULL DEFAULT '1' COMMENT '0',
  `hours` int(20) NOT NULL DEFAULT '0',
  `admin` int(11) NOT NULL DEFAULT '0',
  `helper` int(11) NOT NULL DEFAULT '0',
  `int` int(11) NOT NULL DEFAULT '0',
  `world` int(11) NOT NULL DEFAULT '0',
  `jailed` int(11) NOT NULL DEFAULT '0',
  `jailtime` int(255) NOT NULL DEFAULT '0',
  `banned` int(11) NOT NULL DEFAULT '0',
  `warns` int(11) NOT NULL DEFAULT '0',
  `donate` int(11) NOT NULL DEFAULT '0',
  `carlic` int(11) NOT NULL DEFAULT '0',
  `weplic` int(11) NOT NULL DEFAULT '0',
  `flylic` int(11) NOT NULL DEFAULT '0',
  `posx` float NOT NULL DEFAULT '0',
  `posy` float NOT NULL DEFAULT '0',
  `posz` float NOT NULL DEFAULT '0',
  `posa` float NOT NULL DEFAULT '0',
  `died` int(11) NOT NULL DEFAULT '0',
  `fightstyle` int(11) NOT NULL DEFAULT '0',
  `pen` int(11) NOT NULL DEFAULT '0',
  `attributes` varchar(255) NOT NULL DEFAULT 'None',
  `paycheck` int(255) NOT NULL DEFAULT '0',
  `paycheckmoney` int(255) NOT NULL DEFAULT '0',
  `upgrade` int(64) NOT NULL DEFAULT '0',
  `paydaytime` int(64) NOT NULL DEFAULT '0',
  `spawnhealth` float NOT NULL DEFAULT '0',
  `cellphone` int(11) NOT NULL DEFAULT '0',
  `number` int(255) NOT NULL DEFAULT '0',
  `savings` int(255) NOT NULL DEFAULT '0',
  `housekey` int(64) NOT NULL DEFAULT '0',
  `melee` int(64) NOT NULL DEFAULT '0',
  `wep1` int(64) NOT NULL DEFAULT '0',
  `wep2` int(64) NOT NULL DEFAULT '0',
  `ammo1` int(64) NOT NULL DEFAULT '0',
  `ammo2` int(64) NOT NULL DEFAULT '0',
  `radio` int(11) NOT NULL DEFAULT '0',
  `crashed` tinyint(4) NOT NULL DEFAULT '0',
  `mask` int(11) NOT NULL DEFAULT '0',
  `accenton` int(11) NOT NULL DEFAULT '0',
  `accent` varchar(128) NOT NULL DEFAULT 'None',
  `bmx` int(11) NOT NULL DEFAULT '0',
  `carkey` int(255) NOT NULL DEFAULT '0',
  `playervehs` text,
  `vehicles` int(11) NOT NULL DEFAULT '0',
  `vehslot` int(11) NOT NULL DEFAULT '0',
  `sparekey` int(255) NOT NULL DEFAULT '0',
  `lighter` int(11) NOT NULL DEFAULT '0',
  `cigars` int(64) NOT NULL DEFAULT '0',
  `bizkey` int(64) NOT NULL DEFAULT '0',
  `workon` int(64) NOT NULL DEFAULT '0',
  `walk` int(64) NOT NULL DEFAULT '0',
  `armour` float NOT NULL DEFAULT '0',
  `hasarmour` int(11) NOT NULL DEFAULT '0',
  `faction` int(64) NOT NULL DEFAULT '0',
  `rank` int(64) NOT NULL DEFAULT '0',
  `badgenumber` int(255) NOT NULL DEFAULT '0',
  `drivewarns` int(64) NOT NULL DEFAULT '0',
  `jailtime2` int(11) NOT NULL DEFAULT '0',
  `arrested` int(64) NOT NULL DEFAULT '0',
  `chat` int(64) NOT NULL DEFAULT '0',
  `swat` int(11) NOT NULL DEFAULT '0',
  `tickets` text,
  `job` int(24) NOT NULL DEFAULT '0',
  `jobrank` int(24) NOT NULL DEFAULT '0',
  `career` int(64) NOT NULL DEFAULT '0',
  `sidejob` int(24) NOT NULL DEFAULT '0',
  `spawntype` int(24) NOT NULL DEFAULT '0',
  `prisoned` int(24) NOT NULL DEFAULT '0',
  `drugs` text,
  `seeds` int(64) NOT NULL DEFAULT '0',
  `soda` int(64) NOT NULL DEFAULT '0',
  `powder` int(64) NOT NULL DEFAULT '0',
  `alcohol` int(64) NOT NULL DEFAULT '0',
  `contacts` text,
  `channels` text,
  `authed` text,
  `slot` int(11) NOT NULL DEFAULT '0',
  `playerIP` varchar(100) NOT NULL DEFAULT 'None',
  `playerSerial` varchar(256) NOT NULL DEFAULT 'None',
  `SweeperDone` int(11) NOT NULL DEFAULT '0',
  `CourierDone` int(11) NOT NULL DEFAULT '0',
  `taxilic` int(11) NOT NULL DEFAULT '0',
  `weaponmats` int(11) NOT NULL DEFAULT '0',
  `rentapartament` int(11) NOT NULL DEFAULT '0',
  `apartament` int(11) NOT NULL DEFAULT '0',
  `complex` int(11) NOT NULL DEFAULT '0',
  `apcomplex` int(11) NOT NULL DEFAULT '0',
  `fname` int(11) NOT NULL DEFAULT '0',
  `forumname` varchar(64) NOT NULL DEFAULT 'INVALID',
  `card` int(11) NOT NULL DEFAULT '0',
  `pincard` int(11) NOT NULL DEFAULT '0',
  `namechanges` int(11) NOT NULL DEFAULT '0',
  `phonechanges` int(11) NOT NULL DEFAULT '0',
  `sexchanges` int(11) NOT NULL DEFAULT '0',
  `ckchanges` int(11) NOT NULL DEFAULT '0',
  `justregister` int(11) NOT NULL DEFAULT '0',
  `bikelic` int(11) NOT NULL DEFAULT '0',
  `biglic` int(11) NOT NULL DEFAULT '0',
  `fishingrod` int(11) NOT NULL DEFAULT '0',
  `haircut` int(11) NOT NULL DEFAULT '0',
  `wanted` text COMMENT 'Fara acuzatii',
  `maskid` int(11) NOT NULL DEFAULT '0',
  `email` text,
  `isOnline` int(1) NOT NULL DEFAULT '0',
  `garbage` int(11) NOT NULL DEFAULT '0',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of users
-- ----------------------------

-- ----------------------------
-- Table structure for vehicles
-- ----------------------------
DROP TABLE IF EXISTS `vehicles`;
CREATE TABLE `vehicles` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `model` int(64) DEFAULT NULL,
  `color1` int(64) DEFAULT NULL,
  `color2` int(64) DEFAULT NULL,
  `posx` float DEFAULT NULL,
  `posy` float DEFAULT NULL,
  `posz` float DEFAULT NULL,
  `posa` float DEFAULT NULL,
  `type` int(64) DEFAULT NULL,
  `faction` int(64) DEFAULT NULL,
  `plate` varchar(255) DEFAULT NULL,
  `info` varchar(255) DEFAULT NULL,
  `siren` int(11) NOT NULL DEFAULT '0',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=118 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of vehicles
-- ----------------------------
INSERT INTO `vehicles` VALUES ('1', '405', '6', '6', '2256.27', '-85.6928', '26.3285', '89.5386', '13', '3', 'OC-GOV', 'OC-GOV', '1');
INSERT INTO `vehicles` VALUES ('2', '405', '6', '6', '2256.19', '-82.8607', '26.3285', '90.4825', '13', '3', 'OC-GOV', 'OC-GOV', '1');
INSERT INTO `vehicles` VALUES ('4', '421', '6', '6', '2248.21', '-68.3678', '26.2536', '179.802', '13', '3', 'OC-GOV', 'OC-GOV', '1');
INSERT INTO `vehicles` VALUES ('5', '490', '6', '6', '2255.19', '-67.5661', '26.5812', '180.138', '13', '3', 'OC-GOV', 'OC-GOV', '1');
INSERT INTO `vehicles` VALUES ('7', '400', '6', '6', '2251.63', '-67.3764', '26.3836', '180.384', '13', '3', 'OC-GOV', 'OC-GOV', '1');
INSERT INTO `vehicles` VALUES ('8', '598', '6', '1', '2316.71', '2431.2', '3.01821', '359.03', '5', '1', 'OCSD', 'OCSD', '1');
INSERT INTO `vehicles` VALUES ('9', '598', '6', '1', '2312.07', '2430.82', '3.01856', '358.805', '5', '1', 'OCSD', 'OCSD', '1');
INSERT INTO `vehicles` VALUES ('10', '598', '6', '1', '2307.79', '2430.98', '3.01886', '358.908', '5', '1', 'OCSD', 'OCSD', '1');
INSERT INTO `vehicles` VALUES ('11', '598', '6', '1', '2303.24', '2431.08', '3.02037', '358.529', '5', '1', 'OCSD', 'OCSD', '1');
INSERT INTO `vehicles` VALUES ('12', '598', '6', '1', '2299.02', '2431.15', '3.01853', '359.364', '5', '1', 'OCSD', 'OCSD', '1');
INSERT INTO `vehicles` VALUES ('13', '599', '6', '1', '2294.81', '2431.27', '3.46298', '357.751', '5', '1', 'OCSD', 'OCSD', '1');
INSERT INTO `vehicles` VALUES ('14', '599', '6', '1', '2290.44', '2431.01', '3.46334', '357.646', '5', '1', 'OCSD', 'OCSD', '1');
INSERT INTO `vehicles` VALUES ('15', '597', '6', '1', '2285.83', '2431.28', '3.04454', '359.683', '5', '1', 'OCSD', 'OCSD', '1');
INSERT INTO `vehicles` VALUES ('16', '596', '6', '1', '2297.99', '2451.71', '2.86907', '269.427', '5', '1', 'OCSD', 'OCSD', '1');
INSERT INTO `vehicles` VALUES ('18', '561', '6', '1', '2297.9', '2456.19', '3.27344', '271.628', '5', '1', 'OCSD', 'OCSD', '1');
INSERT INTO `vehicles` VALUES ('19', '558', '6', '1', '2297.75', '2460.36', '3.27344', '268.761', '5', '1', 'OCSD', 'OCSD', '1');
INSERT INTO `vehicles` VALUES ('21', '490', '6', '1', '2298.47', '2464.39', '3.27344', '270.641', '5', '1', 'OCSD', 'OCSD', '1');
INSERT INTO `vehicles` VALUES ('22', '405', '32', '22', '2314.33', '2455.61', '3.27344', '91.099', '5', '1', 'MA66262', 'OCSD', '1');
INSERT INTO `vehicles` VALUES ('23', '413', '22', '99', '2314.9', '2460.25', '3.27344', '89.5323', '5', '1', 'LZ88421', 'OCSD', '1');
INSERT INTO `vehicles` VALUES ('24', '478', '73', '24', '2315.06', '2465.15', '3.27344', '89.5324', '5', '1', 'GA62321', 'OCSD', '1');
INSERT INTO `vehicles` VALUES ('25', '525', '6', '1', '2315.49', '2470.03', '3.27344', '89.1956', '5', '1', 'OCSD', 'OCSD', '1');
INSERT INTO `vehicles` VALUES ('26', '528', '6', '1', '2314.83', '2475.21', '3.27344', '90.7391', '5', '1', 'OCSD', 'OCSD', '1');
INSERT INTO `vehicles` VALUES ('27', '427', '6', '1', '2314.44', '2479.98', '3.27344', '91.0291', '5', '1', 'OCSD', 'OCSD', '1');
INSERT INTO `vehicles` VALUES ('28', '601', '6', '1', '2314.37', '2484.99', '3.27344', '91.3425', '5', '1', 'OCSD', 'OCSD', '1');
INSERT INTO `vehicles` VALUES ('29', '431', '6', '1', '637.392', '-610.659', '16.4322', '89.0913', '5', '1', 'OCSD', 'OCSD', '1');
INSERT INTO `vehicles` VALUES ('30', '497', '6', '1', '614.94', '-575.353', '26.1432', '265.931', '5', '1', 'OCSD', 'OCSD', '1');
INSERT INTO `vehicles` VALUES ('31', '531', '0', '0', '-97.0791', '40.4317', '3.11719', '72.8245', '16', '0', 'FARM', 'FARM', '0');
INSERT INTO `vehicles` VALUES ('32', '531', '0', '0', '-98.4276', '36.0164', '3.11719', '65.8608', '16', '0', 'FARM', 'FARM', '0');
INSERT INTO `vehicles` VALUES ('33', '531', '0', '0', '-100.054', '32.1137', '3.11719', '70.636', '16', '0', 'FARM', 'FARM', '0');
INSERT INTO `vehicles` VALUES ('34', '531', '0', '0', '-102.182', '27.0735', '3.1094', '66.9884', '16', '0', 'FARM', 'FARM', '0');
INSERT INTO `vehicles` VALUES ('35', '478', '0', '0', '-98.4691', '-21.1726', '3.1094', '71.3653', '16', '0', 'FARM', 'FARM', '0');
INSERT INTO `vehicles` VALUES ('36', '478', '0', '0', '-99.5118', '-25.6245', '3.11719', '70.3704', '16', '0', 'FARM', 'FARM', '0');
INSERT INTO `vehicles` VALUES ('37', '478', '0', '0', '-102.654', '-28.8827', '3.11719', '71.8954', '16', '0', 'FARM', 'FARM', '0');
INSERT INTO `vehicles` VALUES ('38', '478', '0', '0', '-111.975', '-41.1142', '3.11719', '344.349', '16', '0', 'FARM', 'FARM', '0');
INSERT INTO `vehicles` VALUES ('39', '532', '0', '0', '-155.72', '-87.2487', '3.1094', '336.722', '16', '0', 'FARM', 'FARM', '0');
INSERT INTO `vehicles` VALUES ('40', '532', '0', '0', '-136.043', '-76.4947', '3.11719', '348.66', '16', '0', 'FARM', 'FARM', '0');
INSERT INTO `vehicles` VALUES ('41', '532', '0', '0', '-148.28', '-59.793', '3.11719', '259.391', '16', '0', 'FARM', 'FARM', '0');
INSERT INTO `vehicles` VALUES ('42', '408', '6', '6', '2413.82', '84.994', '27.0172', '90.2785', '15', '0', 'GARBAGE', 'GARBAGE', '0');
INSERT INTO `vehicles` VALUES ('43', '408', '6', '6', '2413.9', '88.75', '27.0222', '89.7885', '15', '0', 'GARBAGE', 'GARBAGE', '0');
INSERT INTO `vehicles` VALUES ('44', '408', '6', '6', '2414.01', '92.386', '27.0151', '88.1022', '15', '0', 'GARBAGE', 'GARBAGE', '0');
INSERT INTO `vehicles` VALUES ('45', '408', '6', '6', '2414.39', '96.1347', '27.0209', '87.8815', '15', '0', 'GARBAGE', 'GARBAGE', '0');
INSERT INTO `vehicles` VALUES ('46', '408', '6', '6', '2414.45', '99.5951', '27.0216', '88.1741', '15', '0', 'GARBAGE', 'GARBAGE', '0');
INSERT INTO `vehicles` VALUES ('47', '401', '43', '22', '2281.05', '-68.4397', '26.4535', '181.147', '2', '0', 'RENT', 'RENT', '0');
INSERT INTO `vehicles` VALUES ('48', '401', '23', '52', '2278.08', '-68.395', '26.4535', '179.893', '2', '0', 'RENT', 'RENT', '0');
INSERT INTO `vehicles` VALUES ('49', '401', '66', '52', '2274.74', '-68.3299', '26.4535', '178.304', '2', '0', 'RENT', 'RENT', '0');
INSERT INTO `vehicles` VALUES ('50', '479', '53', '22', '219.908', '-140.337', '1.57812', '181.322', '1', '0', 'RENT', 'RENT', '0');
INSERT INTO `vehicles` VALUES ('51', '479', '53', '22', '215.841', '-141.221', '1.57812', '179.664', '1', '0', 'RENT', 'RENT', '0');
INSERT INTO `vehicles` VALUES ('52', '479', '50', '22', '1372.21', '197.934', '19.5547', '338.435', '1', '0', 'RENT', 'RENT', '0');
INSERT INTO `vehicles` VALUES ('53', '479', '50', '22', '1348.36', '205.451', '19.5547', '334.117', '1', '0', 'RENT', 'RENT', '0');
INSERT INTO `vehicles` VALUES ('54', '479', '50', '22', '1347.7', '346.292', '20.0783', '66.8888', '1', '0', 'RENT', 'RENT', '0');
INSERT INTO `vehicles` VALUES ('55', '479', '50', '22', '1345.33', '342.859', '19.9774', '66.2255', '1', '0', 'RENT', 'RENT', '0');
INSERT INTO `vehicles` VALUES ('56', '479', '40', '25', '2262.86', '23.6139', '26.4555', '2.14885', '1', '0', 'RENT', 'RENT', '0');
INSERT INTO `vehicles` VALUES ('57', '479', '40', '25', '2258.01', '23.7533', '26.4547', '2.14885', '1', '0', 'RENT', 'RENT', '0');
INSERT INTO `vehicles` VALUES ('58', '479', '40', '25', '2218.63', '-106.184', '26.4844', '268.604', '1', '0', 'RENT', 'RENT', '0');
INSERT INTO `vehicles` VALUES ('59', '462', '32', '22', '2272.48', '-68.1413', '26.4535', '179.86', '2', '0', 'DMV', 'DMV', '0');
INSERT INTO `vehicles` VALUES ('65', '407', '6', '1', '1231.27', '298.704', '19.8104', '156.274', '7', '2', 'OCFA', 'OCFA', '1');
INSERT INTO `vehicles` VALUES ('66', '497', '6', '1', '1231.79', '320.888', '24.7578', '152.31', '7', '2', 'OCFA', 'OCFA', '1');
INSERT INTO `vehicles` VALUES ('67', '544', '6', '1', '1227.5', '299.612', '19.7972', '153.886', '7', '2', 'OCFA', 'OCFA', '1');
INSERT INTO `vehicles` VALUES ('69', '599', '6', '1', '1221.63', '304.585', '19.7809', '155.917', '7', '2', 'OCFA', 'OCFA', '1');
INSERT INTO `vehicles` VALUES ('70', '525', '6', '1', '1218.78', '306.453', '19.4828', '156.008', '7', '2', 'OCFA', 'OCFA', '1');
INSERT INTO `vehicles` VALUES ('71', '416', '6', '1', '1224.72', '302.287', '19.7343', '156.201', '7', '2', 'OCFA', 'OCFA', '1');
INSERT INTO `vehicles` VALUES ('72', '408', '1', '1', '2427.52', '111.695', '26.4689', '2.65808', '15', '0', 'TRASH', 'TRASH', '0');
INSERT INTO `vehicles` VALUES ('73', '408', '1', '1', '2432.09', '111.851', '26.4689', '0.99995', '15', '0', 'TRASH', 'TRASH', '0');
INSERT INTO `vehicles` VALUES ('74', '408', '1', '1', '2436.79', '111.59', '26.4778', '0.667932', '15', '0', 'TRASH', 'TRASH', '0');
INSERT INTO `vehicles` VALUES ('75', '408', '1', '1', '2442.13', '112.172', '26.4779', '0', '15', '0', 'TRASH', 'TRASH', '0');
INSERT INTO `vehicles` VALUES ('76', '573', '6', '1', '1208.2', '269.499', '20.205', '336.07', '7', '2', 'OCFA', 'OCFA', '1');
INSERT INTO `vehicles` VALUES ('77', '552', '6', '1', '1204.26', '261.129', '19.2509', '334.883', '7', '2', 'OCFA', 'OCFA', '1');
INSERT INTO `vehicles` VALUES ('79', '422', '6', '1', '-54.2465', '-215.15', '5.41425', '173.964', '8', '0', 'TRUCKER', 'TRUCKER', '0');
INSERT INTO `vehicles` VALUES ('80', '422', '6', '1', '-50.1058', '-215.557', '5.41567', '175.172', '8', '0', 'TRUCKER', 'TRUCKER', '0');
INSERT INTO `vehicles` VALUES ('81', '422', '6', '1', '-46.0656', '-215.924', '5.41446', '174.92', '8', '0', 'TRUCKER', 'TRUCKER', '0');
INSERT INTO `vehicles` VALUES ('82', '422', '6', '1', '-42.1968', '-216.566', '5.41359', '174.76', '8', '0', 'TRUCKER', 'TRUCKER', '0');
INSERT INTO `vehicles` VALUES ('83', '543', '6', '1', '-38.3752', '-217.01', '5.24952', '174.515', '8', '0', 'TRUCKER', 'TRUCKER', '0');
INSERT INTO `vehicles` VALUES ('84', '543', '6', '1', '-34.5357', '-217.436', '5.25353', '175.271', '8', '0', 'TRUCKER', 'TRUCKER', '0');
INSERT INTO `vehicles` VALUES ('85', '543', '6', '1', '-30.5275', '-217.857', '5.2471', '175.61', '8', '0', 'TRUCKER', 'TRUCKER', '0');
INSERT INTO `vehicles` VALUES ('86', '543', '6', '1', '-26.5332', '-218.167', '5.25087', '175.803', '8', '0', 'TRUCKER', 'TRUCKER', '0');
INSERT INTO `vehicles` VALUES ('89', '554', '6', '1', '-22.7747', '-218.759', '5.42969', '171.839', '8', '0', 'TRUCKER', 'TRUCKER', '0');
INSERT INTO `vehicles` VALUES ('91', '609', '6', '1', '-57.0835', '-226.214', '5.49841', '270.154', '8', '0', 'TRUCKER', 'TRUCKER', '0');
INSERT INTO `vehicles` VALUES ('92', '609', '6', '1', '-57.0313', '-222.571', '5.49801', '270.689', '8', '0', 'TRUCKER', 'TRUCKER', '0');
INSERT INTO `vehicles` VALUES ('93', '609', '6', '1', '-56.8921', '-222.041', '5.42969', '268.638', '0', '0', 'TRUCKER', 'TRUCKER', '0');
INSERT INTO `vehicles` VALUES ('94', '456', '6', '1', '10.9044', '-220.224', '5.60464', '90.2411', '8', '0', 'TRUCKER', 'TRUCKER', '0');
INSERT INTO `vehicles` VALUES ('95', '456', '6', '1', '10.6915', '-224.154', '5.60296', '86.4639', '8', '0', 'TRUCKER', 'TRUCKER', '0');
INSERT INTO `vehicles` VALUES ('97', '456', '6', '1', '11.1727', '-228.597', '5.60329', '90.2557', '8', '0', 'TRUCKER', 'TRUCKER', '0');
INSERT INTO `vehicles` VALUES ('98', '403', '6', '1', '12.2037', '-232.562', '6.03675', '89.0203', '8', '0', 'TRUCKER', 'TRUCKER', '0');
INSERT INTO `vehicles` VALUES ('99', '403', '6', '1', '11.9685', '-236.632', '6.03603', '90.6153', '8', '0', 'TRUCKER', 'TRUCKER', '0');
INSERT INTO `vehicles` VALUES ('100', '403', '6', '1', '11.8927', '-240.683', '6.03584', '89.8366', '8', '0', 'TRUCKER', 'TRUCKER', '0');
INSERT INTO `vehicles` VALUES ('101', '584', '6', '1', '11.5007', '-245.366', '8.79107', '90.5922', '8', '0', 'TRUCKER', 'TRUCKER', '0');
INSERT INTO `vehicles` VALUES ('102', '584', '6', '1', '11.6215', '-248.959', '8.78935', '92.7856', '8', '0', 'TRUCKER', 'TRUCKER', '0');
INSERT INTO `vehicles` VALUES ('103', '584', '6', '1', '11.7877', '-253.023', '8.79206', '84.6623', '8', '0', 'TRUCKER', 'TRUCKER', '0');
INSERT INTO `vehicles` VALUES ('104', '584', '6', '1', '12.1259', '-257.356', '5.42969', '89.049', '8', '0', 'TRUCKER', 'TRUCKER', '0');
INSERT INTO `vehicles` VALUES ('105', '456', '42', '23', '2288.77', '-63.225', '26.4844', '180.044', '2', '0', 'DMV', 'DMV', '0');
INSERT INTO `vehicles` VALUES ('107', '610', '0', '0', '-99.7439', '26.1046', '3.11719', '66.4411', '0', '0', 'FARM', 'FARM', '0');
INSERT INTO `vehicles` VALUES ('108', '610', '0', '0', '-96.8084', '31.0862', '3.11719', '77.8492', '0', '0', 'FARM', 'FARM', '0');
INSERT INTO `vehicles` VALUES ('109', '610', '0', '0', '-95.1936', '35.6318', '3.11719', '66.906', '0', '0', 'FARM', 'FARM', '0');
INSERT INTO `vehicles` VALUES ('110', '610', '0', '0', '-93.4681', '39.4798', '3.11719', '68.8957', '0', '0', 'FARM', 'FARM', '0');
INSERT INTO `vehicles` VALUES ('111', '486', '6', '1', '2041.02', '48.5353', '28.5214', '89.2468', '13', '3', 'GOV', 'GOV', '0');
INSERT INTO `vehicles` VALUES ('112', '524', '6', '1', '2025.81', '47.8092', '29.8533', '91.1033', '13', '3', 'GOV', 'GOV', '0');
INSERT INTO `vehicles` VALUES ('113', '552', '6', '1', '2012.35', '47.4875', '30.6704', '90.79', '13', '3', 'GOV', 'GOV', '0');
INSERT INTO `vehicles` VALUES ('115', '582', '1', '6', '1398.36', '398.527', '19.8146', '246.682', '14', '0', 'News', 'News', '0');
INSERT INTO `vehicles` VALUES ('116', '582', '1', '6', '1400.12', '402.114', '19.8123', '247.217', '14', '0', 'News', 'News', '0');
INSERT INTO `vehicles` VALUES ('117', '582', '1', '6', '1403.87', '404.89', '19.7578', '31.5789', '14', '0', 'News', 'News', '0');

-- ----------------------------
-- Table structure for weapondmg
-- ----------------------------
DROP TABLE IF EXISTS `weapondmg`;
CREATE TABLE `weapondmg` (
  `id` int(11) NOT NULL,
  `damage` int(64) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of weapondmg
-- ----------------------------
INSERT INTO `weapondmg` VALUES ('1', '20');
INSERT INTO `weapondmg` VALUES ('2', '20');
INSERT INTO `weapondmg` VALUES ('3', '15');
INSERT INTO `weapondmg` VALUES ('4', '35');
INSERT INTO `weapondmg` VALUES ('5', '5');
INSERT INTO `weapondmg` VALUES ('6', '20');
INSERT INTO `weapondmg` VALUES ('7', '20');
INSERT INTO `weapondmg` VALUES ('8', '33');
INSERT INTO `weapondmg` VALUES ('9', '100');
INSERT INTO `weapondmg` VALUES ('10', '5');
INSERT INTO `weapondmg` VALUES ('11', '5');
INSERT INTO `weapondmg` VALUES ('12', '5');
INSERT INTO `weapondmg` VALUES ('13', '5');
INSERT INTO `weapondmg` VALUES ('14', '5');
INSERT INTO `weapondmg` VALUES ('15', '20');
INSERT INTO `weapondmg` VALUES ('16', '200');
INSERT INTO `weapondmg` VALUES ('17', '200');
INSERT INTO `weapondmg` VALUES ('18', '0');
INSERT INTO `weapondmg` VALUES ('19', '0');
INSERT INTO `weapondmg` VALUES ('20', '0');
INSERT INTO `weapondmg` VALUES ('21', '0');
INSERT INTO `weapondmg` VALUES ('22', '25');
INSERT INTO `weapondmg` VALUES ('23', '25');
INSERT INTO `weapondmg` VALUES ('24', '10');
INSERT INTO `weapondmg` VALUES ('25', '20');
INSERT INTO `weapondmg` VALUES ('26', '20');
INSERT INTO `weapondmg` VALUES ('27', '20');
INSERT INTO `weapondmg` VALUES ('28', '10');
INSERT INTO `weapondmg` VALUES ('29', '15');
INSERT INTO `weapondmg` VALUES ('30', '20');
INSERT INTO `weapondmg` VALUES ('31', '25');
INSERT INTO `weapondmg` VALUES ('32', '25');
INSERT INTO `weapondmg` VALUES ('33', '90');
INSERT INTO `weapondmg` VALUES ('34', '100');
INSERT INTO `weapondmg` VALUES ('35', '0');
INSERT INTO `weapondmg` VALUES ('36', '0');
INSERT INTO `weapondmg` VALUES ('37', '0');
INSERT INTO `weapondmg` VALUES ('38', '100');
INSERT INTO `weapondmg` VALUES ('39', '0');
INSERT INTO `weapondmg` VALUES ('40', '0');
INSERT INTO `weapondmg` VALUES ('41', '5');
INSERT INTO `weapondmg` VALUES ('42', '0');
INSERT INTO `weapondmg` VALUES ('43', '0');
INSERT INTO `weapondmg` VALUES ('44', '0');
INSERT INTO `weapondmg` VALUES ('45', '0');
INSERT INTO `weapondmg` VALUES ('46', '0');
