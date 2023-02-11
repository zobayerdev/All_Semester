-- phpMyAdmin SQL Dump
-- version 5.1.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Mar 19, 2022 at 06:26 AM
-- Server version: 10.4.20-MariaDB
-- PHP Version: 8.0.9

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `atm_system`
--

-- --------------------------------------------------------

--
-- Table structure for table `add_from_card`
--

CREATE TABLE `add_from_card` (
  `account_type` varchar(20) NOT NULL,
  `username` varchar(30) NOT NULL,
  `transaction_id` varchar(30) NOT NULL,
  `amount` varchar(30) NOT NULL,
  `card_no` varchar(30) NOT NULL,
  `name_on_card` varchar(30) NOT NULL,
  `expiry` varchar(30) NOT NULL,
  `cvv_cvc` varchar(20) NOT NULL,
  `date` varchar(30) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `add_from_card`
--

INSERT INTO `add_from_card` (`account_type`, `username`, `transaction_id`, `amount`, `card_no`, `name_on_card`, `expiry`, `cvv_cvc`, `date`) VALUES
('Bank', 'Kabbo45', 'ADDCAR6378312710', '5000', '1234567899876543', 'Tunazzinur Rahman Kabbo', '07 / 2026', '145', '03-17-2022'),
('Bank', 'Kabbo45', 'ADDCAR6378312846', '5', '1234567890987654', 'Tunazzinur Rahman Kabbo', '06 / 2026', '897', '03-17-2022'),
('Bank', 'Nayem', 'ADDCAR6378314909', '1000', '1234567856789098', 'Zobayer', '12 / 2026', '432', '03-17-2022'),
('Bank', 'test', 'ADDCAR6378324690', '50000000', '1234567891213546', 'Nayem', '03 / 2026', '421', '03-18-2022'),
('Bank', 'test', 'ADDCAR6378324756', '900000000', '90000000', 'fuck', '03 / 2022', '123', '03-18-2022');

-- --------------------------------------------------------

--
-- Table structure for table `add_money`
--

CREATE TABLE `add_money` (
  `account_type` varchar(30) NOT NULL,
  `username` varchar(30) NOT NULL,
  `number` varchar(30) NOT NULL,
  `amount` varchar(30) NOT NULL,
  `wallet_type` varchar(30) NOT NULL,
  `transaction_id` varchar(30) NOT NULL,
  `date` varchar(30) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `add_money`
--

INSERT INTO `add_money` (`account_type`, `username`, `number`, `amount`, `wallet_type`, `transaction_id`, `date`) VALUES
('Bank', 'Kabbo45', '+8801876787213', '21', 'bKash', 'BKSH6378313178', '03-17-2022'),
('Bank', 'Kabbo45', '+8801876787213', '10', 'Nagad', 'NGD6378313329', '03-17-2022'),
('Bank', 'Kabbo45', '+8801876787213', '10', 'Rocket', 'RKT6378313330', '03-17-2022'),
('Bank', 'Kabbo45', '+8801876787213', '10', 'Upay', 'UPY6378313332', '03-17-2022'),
('Bank', 'Nayem', '+8801876787213', '15', 'bKash', 'BKSH6378314902', '03-17-2022'),
('Bank', 'test', '+8801615257555', '100', 'bKash', 'BKSH6378324679', '03-18-2022'),
('Bank', 'test', '+8801615257555', '500000000', 'Nagad', 'NGD6378324718', '03-18-2022');

-- --------------------------------------------------------

--
-- Table structure for table `admin`
--

CREATE TABLE `admin` (
  `admin_id` varchar(20) NOT NULL,
  `pin` int(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `admin`
--

INSERT INTO `admin` (`admin_id`, `pin`) VALUES
('admin', 1234);

-- --------------------------------------------------------

--
-- Table structure for table `bill_history`
--

CREATE TABLE `bill_history` (
  `username` varchar(30) NOT NULL,
  `bill_id` varchar(30) NOT NULL,
  `amount` varchar(30) NOT NULL,
  `date` varchar(30) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `bill_history`
--

INSERT INTO `bill_history` (`username`, `bill_id`, `amount`, `date`) VALUES
('Kabbo45', 'BILL6378288754', '100', '03-14-2022'),
('Kabbo45', 'BILL6378289424', '10', '03-14-2022'),
('Kabbo45', 'BILL6378289598', '10', '03-14-2022'),
('Kabbo45', 'BILL6378289643', '11', '03-14-2022'),
('Kabbo45', 'BILL6378289667', '15', '03-14-2022'),
('Nayem', 'BILL6378314880', '120', '03-17-2022'),
('test', 'BILL6378324746', '10000', '03-18-2022');

-- --------------------------------------------------------

--
-- Table structure for table `blocked_ac`
--

CREATE TABLE `blocked_ac` (
  `name` varchar(30) NOT NULL,
  `phone` varchar(30) NOT NULL,
  `permanent_ad` varchar(30) NOT NULL,
  `present_ad` varchar(30) NOT NULL,
  `gender` int(30) NOT NULL,
  `nid` int(30) NOT NULL,
  `occupation` varchar(30) NOT NULL,
  `monthly_income` varchar(30) NOT NULL,
  `username` varchar(30) NOT NULL,
  `pin` int(20) NOT NULL,
  `ac_no` varchar(20) NOT NULL,
  `date` varchar(20) NOT NULL,
  `balance` int(30) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `blocked_card`
--

CREATE TABLE `blocked_card` (
  `name` varchar(30) NOT NULL,
  `phone` varchar(30) NOT NULL,
  `permanent_ad` varchar(30) NOT NULL,
  `present_ad` varchar(30) NOT NULL,
  `gender` int(30) NOT NULL,
  `nid` int(30) NOT NULL,
  `occupation` varchar(30) NOT NULL,
  `monthly_income` int(30) NOT NULL,
  `username` varchar(30) NOT NULL,
  `pin` int(30) NOT NULL,
  `card_no` varchar(30) NOT NULL,
  `date` varchar(30) NOT NULL,
  `balance` int(30) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `crypto_history`
--

CREATE TABLE `crypto_history` (
  `username` varchar(30) NOT NULL,
  `account_type` varchar(30) NOT NULL,
  `wallet_ad` varchar(30) NOT NULL,
  `amount_bought` varchar(30) NOT NULL,
  `currency` varchar(30) NOT NULL,
  `transaction_id` varchar(30) NOT NULL,
  `date` varchar(30) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `crypto_history`
--

INSERT INTO `crypto_history` (`username`, `account_type`, `wallet_ad`, `amount_bought`, `currency`, `transaction_id`, `date`) VALUES
('Kabbo45', 'Bank', '32456789', '0.0000030187066230725183', 'Bitcoin', 'CRYATM6378289677', '03-14-2022'),
('Nayem', 'Bank', '345678', '0.29299750037972477', 'Cardano', 'CRYATM6378314896', '03-17-2022'),
('test', 'Bank', 'fuckfucking', '1.3789119796466725', 'Bitcoin', 'CRYATM6378324702', '03-18-2022'),
('test', 'Bank', 'fuckfucking', '13.694247884716802', 'Bitcoin', 'CRYATM6378324708', '03-18-2022');

-- --------------------------------------------------------

--
-- Table structure for table `crypto_price`
--

CREATE TABLE `crypto_price` (
  `btc` varchar(30) NOT NULL,
  `eth` varchar(30) NOT NULL,
  `ada` varchar(30) NOT NULL,
  `sol` varchar(30) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `crypto_price`
--

INSERT INTO `crypto_price` (`btc`, `eth`, `ada`, `sol`) VALUES
('3312677', '220756.4448', '68.259968', '7017.42');

-- --------------------------------------------------------

--
-- Table structure for table `demand_bill`
--

CREATE TABLE `demand_bill` (
  `username` varchar(30) NOT NULL,
  `bill_id` varchar(30) NOT NULL,
  `amount` varchar(30) NOT NULL,
  `status` varchar(30) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `demand_bill`
--

INSERT INTO `demand_bill` (`username`, `bill_id`, `amount`, `status`) VALUES
('Kabbo45', 'BILL6378288754', '100', 'Paid'),
('Kabbo45', 'BILL6378289424', '10', 'Paid'),
('Kabbo45', 'BILL6378289598', '10', 'Paid'),
('Kabbo45', 'BILL6378289643', '11', 'Paid'),
('Kabbo45', 'BILL6378289667', '15', 'Paid'),
('Nayem', 'BILL6378314880', '120', 'Paid'),
('test', 'BILL6378324746', '10000', 'Paid');

-- --------------------------------------------------------

--
-- Table structure for table `donation`
--

CREATE TABLE `donation` (
  `username` varchar(30) NOT NULL,
  `donated_to` varchar(60) NOT NULL,
  `amount` varchar(30) NOT NULL,
  `name` varchar(30) NOT NULL,
  `phone_number` varchar(30) NOT NULL,
  `date` varchar(30) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `donation`
--

INSERT INTO `donation` (`username`, `donated_to`, `amount`, `name`, `phone_number`, `date`) VALUES
('Kabbo45', 'SOS Children\'s Villages Bangladesh', '10', 'Not interested', 'Not interested', '03-17-2022'),
('Kabbo45', 'As-sunnah Foundation', '90', 'Not interested', 'Not interested', '03-17-2022'),
('test', 'As-sunnah Foundation', '50000000', 'Not interested', 'Not interested', '03-18-2022'),
('test', 'Food For All - Khukumoni Foundation', '450000000', 'Not interested', 'Not interested', '03-18-2022');

-- --------------------------------------------------------

--
-- Table structure for table `payment_history`
--

CREATE TABLE `payment_history` (
  `account_type` varchar(30) NOT NULL,
  `username` varchar(30) NOT NULL,
  `payment_id` varchar(30) NOT NULL,
  `amount` varchar(30) NOT NULL,
  `transaction_id` varchar(30) NOT NULL,
  `date` varchar(30) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `payment_history`
--

INSERT INTO `payment_history` (`account_type`, `username`, `payment_id`, `amount`, `transaction_id`, `date`) VALUES
('Bank', 'Kabbo45', '12345678', '10', 'PYMNTAT6378314523', '03-17-2022'),
('Bank', 'Nayem', '12345678', '10', 'PYMNTAT6378314892', '03-17-2022');

-- --------------------------------------------------------

--
-- Table structure for table `reg_bank`
--

CREATE TABLE `reg_bank` (
  `name` varchar(30) NOT NULL,
  `phone` varchar(20) NOT NULL,
  `permanent_ad` varchar(30) NOT NULL,
  `present_ad` varchar(30) NOT NULL,
  `gender` int(20) NOT NULL,
  `nid` int(20) NOT NULL,
  `occupation` varchar(20) NOT NULL,
  `monthly_income` int(20) NOT NULL,
  `username` varchar(20) NOT NULL,
  `pin` int(20) NOT NULL,
  `ac_no` varchar(30) NOT NULL,
  `date` varchar(30) NOT NULL,
  `balance` int(40) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `reg_bank`
--

INSERT INTO `reg_bank` (`name`, `phone`, `permanent_ad`, `present_ad`, `gender`, `nid`, `occupation`, `monthly_income`, `username`, `pin`, `ac_no`, `date`, `balance`) VALUES
('Tunazzinur Rahman Kabbo', '+8801876787213', 'Tangail Sadar', 'Tangail Sadar', 1, 1234567, 'Student', 10000, 'Kabbo45', 1234, 'AC12729195', 'Monday, March 14, 2022', 5200),
('MD. Zobayer Hasan Nayem', '+8801615257555', 'Tongi', 'Tongi', 1, 123456789, 'Student', 10000, 'Nayem', 123, 'AC16352939', 'Thursday, March 17, ', 1350),
('Test', '+8801798859999', 'Tongi', 'Gazipur', 1, 987654321, 'Teacher', 50000, 'test', 274, 'AC29042928', 'Saturday, March 19, 2022', 899990000);

-- --------------------------------------------------------

--
-- Table structure for table `reg_card`
--

CREATE TABLE `reg_card` (
  `name` varchar(30) NOT NULL,
  `phone` varchar(20) NOT NULL,
  `permanent_ad` varchar(30) NOT NULL,
  `present_ad` varchar(30) NOT NULL,
  `gender` int(20) NOT NULL,
  `nid` int(20) NOT NULL,
  `occupation` varchar(20) NOT NULL,
  `monthly_income` int(20) NOT NULL,
  `username` varchar(20) NOT NULL,
  `pin` int(20) NOT NULL,
  `card_no` varchar(30) NOT NULL,
  `date` varchar(30) NOT NULL,
  `balance` int(40) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `transfer_history`
--

CREATE TABLE `transfer_history` (
  `transferer_account_type` varchar(30) NOT NULL,
  `username` varchar(30) NOT NULL,
  `ammount` varchar(30) NOT NULL,
  `transaction_id` varchar(30) NOT NULL,
  `transfer_to` varchar(30) NOT NULL,
  `transfer_type` varchar(30) NOT NULL,
  `date` varchar(30) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `transfer_history`
--

INSERT INTO `transfer_history` (`transferer_account_type`, `username`, `ammount`, `transaction_id`, `transfer_to`, `transfer_type`, `date`) VALUES
('Bank', 'Kabbo45', '100', 'TRASFATM6378314555', '1234567898765', 'Bank', '03-17-2022'),
('Bank', 'test', '67890', 'TRASFATM6378324694', '1234567890', 'Card', '03-18-2022');

-- --------------------------------------------------------

--
-- Table structure for table `withdraw_history`
--

CREATE TABLE `withdraw_history` (
  `account_type` varchar(20) NOT NULL,
  `username` varchar(20) NOT NULL,
  `ammount` varchar(20) NOT NULL,
  `transaction_id` varchar(30) NOT NULL,
  `date` varchar(30) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `withdraw_history`
--

INSERT INTO `withdraw_history` (`account_type`, `username`, `ammount`, `transaction_id`, `date`) VALUES
('bank', 'test', '100', 'TRAATM6378324669', '03-18-2022');
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
