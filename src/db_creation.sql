SET FOREIGN_KEY_CHECKS = 0;
DROP SCHEMA IF EXISTS `propman` ;
CREATE SCHEMA IF NOT EXISTS `propman` ;

-- ----------------------------------------------------------------------------
-- Table propman.apartment
-- ----------------------------------------------------------------------------
CREATE TABLE IF NOT EXISTS `propman`.`apartment` (
  `apartmentid` INT NOT NULL AUTO_INCREMENT,
  `apartmentbuilding` VARCHAR(5) NOT NULL,
  `apartmentfloor` VARCHAR(1) NOT NULL,
  `apartmentdir` VARCHAR(1) NOT NULL,
  `apartmentkey` VARCHAR(3) NOT NULL,
  `apartmentisactive` TINYINT(1) NOT NULL,
  PRIMARY KEY (`apartmentid`))
ENGINE = InnoDB
DEFAULT CHARACTER SET = utf8mb4
COLLATE = utf8mb4_0900_ai_ci;

-- ----------------------------------------------------------------------------
-- Table propman.building
-- ----------------------------------------------------------------------------
CREATE TABLE IF NOT EXISTS `propman`.`building` (
  `buildingid` INT NOT NULL AUTO_INCREMENT,
  `buildingstreetnum` VARCHAR(6) NOT NULL,
  `buildingstreetname` VARCHAR(45) NOT NULL,
  `buildingcity` VARCHAR(45) NOT NULL,
  `buildingstate` VARCHAR(2) NOT NULL,
  `buildingzip` VARCHAR(6) NOT NULL,
  `buildingisactive` TINYINT NOT NULL,
  PRIMARY KEY (`buildingid`))
ENGINE = InnoDB
DEFAULT CHARACTER SET = utf8mb4
COLLATE = utf8mb4_0900_ai_ci;

-- ----------------------------------------------------------------------------
-- Table propman.params
-- ----------------------------------------------------------------------------
CREATE TABLE IF NOT EXISTS `propman`.`params` (
  `paramstype` VARCHAR(10) NOT NULL,
  `paramsval` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`paramstype`, `paramsval`))
ENGINE = InnoDB
DEFAULT CHARACTER SET = utf8mb4
COLLATE = utf8mb4_0900_ai_ci;

-- ----------------------------------------------------------------------------
-- Table propman.nextofkin
-- ----------------------------------------------------------------------------
CREATE TABLE IF NOT EXISTS `propman`.`nextofkin` (
  `nextofkinid` INT NOT NULL AUTO_INCREMENT,
  `nextofkinoccupantid` VARCHAR(5) NOT NULL,
  `nextofkinfirstname` VARCHAR(45) NOT NULL,
  `nextofkinlastname` VARCHAR(45) NOT NULL,
  `nextofkinphone` VARCHAR(10) NOT NULL,
  `nextofkinrelationship` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`nextofkinid`))
ENGINE = InnoDB
DEFAULT CHARACTER SET = utf8mb4
COLLATE = utf8mb4_0900_ai_ci;

-- ----------------------------------------------------------------------------
-- Table propman.note
-- ----------------------------------------------------------------------------
CREATE TABLE IF NOT EXISTS `propman`.`note` (
  `noteid` INT NOT NULL AUTO_INCREMENT,
  `noteoccupantid` VARCHAR(5) NOT NULL,
  `note` LONGTEXT NOT NULL,
  PRIMARY KEY (`noteid`))
ENGINE = InnoDB
DEFAULT CHARACTER SET = utf8mb4
COLLATE = utf8mb4_0900_ai_ci;

-- ----------------------------------------------------------------------------
-- Table propman.occupancyhistory
-- ----------------------------------------------------------------------------
CREATE TABLE IF NOT EXISTS `propman`.`occupancyhistory` (
  `occpancyhistoryid` INT NOT NULL AUTO_INCREMENT,
  `occupancyhistoryoccupantid` VARCHAR(5) NOT NULL,
  `occupancyhistoryaptid` VARCHAR(5) NOT NULL,
  `occupancyhistorymoveindate` DATETIME NOT NULL,
  `occupancyhistorymoveoutdate` DATETIME NULL DEFAULT NULL,
  PRIMARY KEY (`occpancyhistoryid`))
ENGINE = InnoDB
DEFAULT CHARACTER SET = utf8mb4
COLLATE = utf8mb4_0900_ai_ci;

-- ----------------------------------------------------------------------------
-- Table propman.occupant
-- ----------------------------------------------------------------------------
CREATE TABLE IF NOT EXISTS `propman`.`occupant` (
  `occupantid` INT NOT NULL AUTO_INCREMENT,
  `occupantaptid` VARCHAR(5) NOT NULL,
  `occupantfirstname` VARCHAR(45) NOT NULL,
  `occupantlastname` VARCHAR(45) NOT NULL,
  `occupantemployer` VARCHAR(45) NOT NULL,
  `occupantemployerphone` VARCHAR(10) NOT NULL,
  `occupantemployername` VARCHAR(45) NOT NULL,
  `occupantmoveindate` DATETIME NOT NULL,
  `occupantdeposit` DECIMAL(10,0) NOT NULL,
  `occupantrentamount` DECIMAL(10,0) NOT NULL,
  `occupantweeklyduedate` VARCHAR(1) NOT NULL,
  `occupantpaymentfreq` VARCHAR(1) NOT NULL,
  `occupantnokid` VARCHAR(5) NOT NULL,
  `occupantcell` VARCHAR(10) NOT NULL,
  `occupantpaidthru` DATETIME NOT NULL,
  `occupantlastpaid` DATETIME NOT NULL,
  `occupantbalanceamt` DECIMAL(10,0) NOT NULL,
  PRIMARY KEY (`occupantid`))
ENGINE = InnoDB
DEFAULT CHARACTER SET = utf8mb4
COLLATE = utf8mb4_0900_ai_ci;

-- ----------------------------------------------------------------------------
-- Table propman.payment
-- ----------------------------------------------------------------------------
CREATE TABLE IF NOT EXISTS `propman`.`payment` (
  `paymentid` INT NOT NULL AUTO_INCREMENT,
  `paymentoccupantid` VARCHAR(5) NOT NULL,
  `paymentapartmentid` VARCHAR(5) NOT NULL,
  `paymentamount` DECIMAL(10,0) NOT NULL,
  `paymentdate` DATETIME NOT NULL,
  PRIMARY KEY (`paymentid`))
ENGINE = InnoDB
DEFAULT CHARACTER SET = utf8mb4
COLLATE = utf8mb4_0900_ai_ci;

-- ----------------------------------------------------------------------------
-- Table propman.utility
-- ----------------------------------------------------------------------------
CREATE TABLE IF NOT EXISTS `propman`.`utility` (
  `utilityid` INT NOT NULL AUTO_INCREMENT,
  `utilitytype` TINYINT(1) NOT NULL,
  `utilityrbuildingid` VARCHAR(5) NOT NULL,
  `utilitydate` DATETIME NOT NULL,
  `utilityreading` DECIMAL(10,0) NOT NULL,
  PRIMARY KEY (`utilityid`))
ENGINE = InnoDB
DEFAULT CHARACTER SET = utf8mb4
COLLATE = utf8mb4_0900_ai_ci;
SET FOREIGN_KEY_CHECKS = 1;
