/*
Navicat MySQL Data Transfer

Source Server         : aaa
Source Server Version : 50624
Source Host           : localhost:3306
Source Database       : wms

Target Server Type    : MYSQL
Target Server Version : 50624
File Encoding         : 65001

Date: 2018-02-02 16:03:31
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for outstorage
-- ----------------------------
DROP TABLE IF EXISTS `outstorage`;
CREATE TABLE `outstorage` (
  `订单号` char(7) DEFAULT NULL,
  `产品名称` varchar(50) DEFAULT NULL,
  `产品编号` char(15) DEFAULT NULL,
  `标签编号` char(15) DEFAULT NULL,
  `出库数量` varchar(7) DEFAULT NULL,
  `出库时间` varchar(50) DEFAULT NULL,
  `仓库` varchar(50) DEFAULT NULL,
  `管理员` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of outstorage
-- ----------------------------
INSERT INTO `outstorage` VALUES ('1002', 'ipad mini', '313', '131', '1', '2018-01-24 20:30:57', '13', '13');
INSERT INTO `outstorage` VALUES ('0099', 'smartain', '1155', '111', '1', '2018-01-24 20:30:59', '11', 'cccc');
INSERT INTO `outstorage` VALUES ('0014', '123', '12', '21', '1', '2018-01-24 20:31:04', '12', '122');
INSERT INTO `outstorage` VALUES ('0012', '123', '12', '21', '2', '2018-01-24 20:31:05', '12', '122');
INSERT INTO `outstorage` VALUES ('0011', '123', '12', '21', '1', '2018-01-24 20:31:09', '12', '122');
INSERT INTO `outstorage` VALUES ('0010', '三星', '2348', '1233', '1', '2018-01-24 20:31:10', '11', 'llj');
INSERT INTO `outstorage` VALUES ('0009', 'vivo', '1115', '1100', '1', '2018-01-24 20:31:11', '1212', 'stt');
INSERT INTO `outstorage` VALUES ('0008', '电视', '0018', '0123', '4', '2018-01-24 20:31:12', '1122', 'stt');
INSERT INTO `outstorage` VALUES ('0003', '华为', '2235', '1232', '1', '2018-01-25 10:07:55', '0002', '小王');
INSERT INTO `outstorage` VALUES ('0004', '华为', '1234', '1232', '1', '2018-01-25 10:07:57', '0002', '小王');
INSERT INTO `outstorage` VALUES ('0002', '华为', '1234', '1232', '3', '2018-01-25 10:26:41', '0002', '小王');
INSERT INTO `outstorage` VALUES ('0003', '华为', '2235', '1232', '2', '2018-01-25 10:26:44', '0002', '小王');
INSERT INTO `outstorage` VALUES ('0004', '华为', '1234', '1232', '2', '2018-01-25 10:26:47', '0002', '小王');
INSERT INTO `outstorage` VALUES ('0002', '华为', '1234', '1232', '3', '2018-01-25 10:28:38', '0002', '小王');
INSERT INTO `outstorage` VALUES ('0004', '华为', '1234', '1232', '3', '2018-01-25 10:28:40', '0002', '小王');
INSERT INTO `outstorage` VALUES ('0001', '华为', '1234', '1232', '1', '2018-01-25 11:05:55', '0003', '小王');
INSERT INTO `outstorage` VALUES ('0001', '华为', '1234', '1232', '1', '2018-01-25 11:06:07', '0003', '小王');
INSERT INTO `outstorage` VALUES ('0002', '华为', '1234', '1232', '2', '2018-01-25 11:07:14', '0002', '小王');
INSERT INTO `outstorage` VALUES ('0001', '华为', '1234', '1232', '2', '2018-01-25 11:12:56', '0003', '小王');
INSERT INTO `outstorage` VALUES ('0001', '华为', '1234', '1232', '2', '2018-01-25 11:14:02', '0003', '小王');
INSERT INTO `outstorage` VALUES ('0001', '华为', '1234', '1232', '2', '2018-01-25 11:14:15', '0003', '小王');
INSERT INTO `outstorage` VALUES ('0001', '华为', '1234', '1232', '2', '2018-01-25 11:14:33', '0003', '小王');
INSERT INTO `outstorage` VALUES ('0001', '华为', '1234', '1232', '2', '2018-01-25 11:15:43', '0003', '小王');
INSERT INTO `outstorage` VALUES ('0001', '华为', '1234', '1232', '4', '2018-01-25 11:16:49', '0003', '小王');
INSERT INTO `outstorage` VALUES ('0002', '华为', '1234', '1232', '3', '2018-01-25 11:17:03', '0002', '小王');
INSERT INTO `outstorage` VALUES ('0004', '华为', '1234', '1232', '5', '2018-01-25 11:17:10', '0002', '小王');
INSERT INTO `outstorage` VALUES ('0002', '华为', '1234', '1232', '6', '2018-01-25 11:17:21', '0002', '小王');
INSERT INTO `outstorage` VALUES ('0003', '华为', '2235', '1232', '3', '2018-01-25 11:17:26', '0002', '小王');
INSERT INTO `outstorage` VALUES ('0002', '华为', '1234', '1232', '3', '2018-01-25 11:17:36', '0002', '小王');
INSERT INTO `outstorage` VALUES ('0003', '华为', '2235', '1232', '3', '2018-01-25 11:17:39', '0002', '小王');
INSERT INTO `outstorage` VALUES ('0001', '华为', '1234', '1232', '2', '2018-01-25 11:18:44', '0003', '小王');
INSERT INTO `outstorage` VALUES ('0002', '华为', '1234', '1232', '2', '2018-01-25 11:18:46', '0002', '小王');
INSERT INTO `outstorage` VALUES ('0001', '华为', '1234', '1232', '2', '2018-01-25 11:19:20', '0003', '小王');
INSERT INTO `outstorage` VALUES ('1234', 'qbb', '415415', '46', '1561', '2018-01-25 11:19:53', '561', '151');
INSERT INTO `outstorage` VALUES ('0002', '华为', '1234', '1232', '3', '2018-01-25 16:11:59', '0002', '小王');
INSERT INTO `outstorage` VALUES ('2018', '笔记本', '1233', '12', '12', '2018-01-25 16:48:45', '5', 'stt1');
INSERT INTO `outstorage` VALUES ('0006', 'Iphone', '1112', '1212', '5', '2018-01-27 14:09:29', '0008', 'bob');

-- ----------------------------
-- Table structure for storage_copy
-- ----------------------------
DROP TABLE IF EXISTS `storage_copy`;
CREATE TABLE `storage_copy` (
  `订单号` char(7) NOT NULL,
  `产品名称` varchar(50) DEFAULT NULL,
  `产品编号` char(15) DEFAULT NULL,
  `标签编号` char(15) DEFAULT NULL,
  `数量` int(7) DEFAULT NULL,
  `仓库` varchar(50) DEFAULT NULL,
  `管理员` varchar(50) DEFAULT NULL,
  `入库时间` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`订单号`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of storage_copy
-- ----------------------------
INSERT INTO `storage_copy` VALUES ('0001', '华为', '1234', '1232', '0', '0003', '小王', '2018-01-03');
INSERT INTO `storage_copy` VALUES ('0002', '华为', '1234', '1232', '20', '0002', '小王', '2018-01-03');
INSERT INTO `storage_copy` VALUES ('0003', '华为', '2235', '1232', '25', '0002', '小王', '2018-01-03');
INSERT INTO `storage_copy` VALUES ('0004', '华为', '1234', '1232', '28', '0002', '小王', '2018-01-03');
INSERT INTO `storage_copy` VALUES ('0005', '小米', '1235', '1234', '22', '0001', '小张', '2018-02-02');
INSERT INTO `storage_copy` VALUES ('0006', 'Iphone', '1112', '1212', '28', '0008', 'bob', '2018-01-09');
INSERT INTO `storage_copy` VALUES ('0007', 'oppo', '1112', '1132', '92', '1322', 'stt2018', '2018-01-03 16:41:53');
INSERT INTO `storage_copy` VALUES ('0008', '电视', '0018', '0123', '1231', '1122', 'stt', '2018-01-03 17:11:46');
INSERT INTO `storage_copy` VALUES ('0009', 'vivo', '1115', '1100', '22', '1212', 'stt', '2018-01-04 21:48:25');
INSERT INTO `storage_copy` VALUES ('0010', '三星', '2348', '1233', '11', '11', 'llj', '2018-01-05 14:36:22');
INSERT INTO `storage_copy` VALUES ('0011', '123', '12', '21', '2', '12', '122', '2018-01-10 21:36:37');
INSERT INTO `storage_copy` VALUES ('0012', '123', '12', '21', '2', '12', '122', '2018-01-10 21:36:51');
INSERT INTO `storage_copy` VALUES ('0014', '123', '12', '21', '2', '12', '122', '2018-01-10 21:37:00');
INSERT INTO `storage_copy` VALUES ('0015', '1212', '121', '2212', '1212', '121', '21212', '2018-01-05 14:36:52');
INSERT INTO `storage_copy` VALUES ('0099', 'smartain', '1155', '111', '11', '11', 'cccc', '2018-01-05 14:37:56');
INSERT INTO `storage_copy` VALUES ('1002', 'ipad mini', '313', '131', '313', '13', '13', '2018-01-03 19:17:56');
INSERT INTO `storage_copy` VALUES ('1111', '1111', '1111', '11', '1', '11', '111', '2018-01-30 16:07:26');
INSERT INTO `storage_copy` VALUES ('12', '2123', '321', '32132', '1321', '32', '132', '2018-01-27 16:54:16');
INSERT INTO `storage_copy` VALUES ('1231', '211', '213', '1231', '313', '131', '23123', '2018-01-25 16:46:41');
INSERT INTO `storage_copy` VALUES ('1234', 'qbb', '415415', '46', '40000', '561', '151', '2018-01-09 18:29:28');
INSERT INTO `storage_copy` VALUES ('2018', '笔记本', '1233', '12', '0', '5', 'stt1', '2018-01-25 16:39:59');
INSERT INTO `storage_copy` VALUES ('8888', '888', '888', '88', '88', '88', '888', '2018-01-25 16:46:22');
INSERT INTO `storage_copy` VALUES ('8889', '8889', '8889', '8889', '8889', '88898', '889', '2018-01-30 16:08:07');
