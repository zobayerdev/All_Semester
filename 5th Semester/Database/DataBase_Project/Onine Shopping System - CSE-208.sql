-- phpMyAdmin SQL Dump
-- version 5.1.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Nov 12, 2021 at 06:00 PM
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
-- Database: `project_cse208`
--

-- --------------------------------------------------------

--
-- Table structure for table `address`
--

CREATE TABLE `address` (
  `Address_ID` varchar(20) NOT NULL,
  `Apartment_Number` varchar(20) DEFAULT NULL,
  `Street` varchar(20) DEFAULT NULL,
  `Apartment_Name` varchar(20) DEFAULT NULL,
  `Customer_ID` varchar(20) DEFAULT NULL,
  `Zipcode_ID` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `address`
--

INSERT INTO `address` (`Address_ID`, `Apartment_Number`, `Street`, `Apartment_Name`, `Customer_ID`, `Zipcode_ID`) VALUES
('AID01', '089', 'Basundhara', 'Shanti Kunjo', 'CS01', '1220'),
('AID02', '028', 'Basabo', 'Bilash Vobon', 'CS02', '1210'),
('AID03', '087', 'Badda', 'Chondro Bilash', 'CS03', '1212'),
('AID04', '042', 'Nikunjo', 'Krishno Chura', 'CS04', '1229'),
('AID05', '052', 'Mogbazar', 'Jolpai Tower', 'CS05', '1217'),
('AID06', '765', 'Pilkhana', 'Cresend Tower', 'CS06', '1260'),
('AID07', '897', 'Banani', 'Chowdhury Villa', 'CS07', '1213'),
('AID08', '987', 'Mirpur', 'Santi Niketon', 'CS08', '1216'),
('AID09', '129', 'Savar', 'Bank Colony', 'CS09', '1344'),
('AID10', '943', 'Gulshan', 'Khan Villa', 'CS10', '1214');

-- --------------------------------------------------------

--
-- Table structure for table `bill`
--

CREATE TABLE `bill` (
  `Billing_ID` varchar(20) NOT NULL,
  `Billing_Date` varchar(20) DEFAULT NULL,
  `Amount_Paid` varchar(20) DEFAULT NULL,
  `Voucher_ID` varchar(20) DEFAULT NULL,
  `Payment_ID` varchar(20) DEFAULT NULL,
  `Order_ID` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `bill`
--

INSERT INTO `bill` (`Billing_ID`, `Billing_Date`, `Amount_Paid`, `Voucher_ID`, `Payment_ID`, `Order_ID`) VALUES
('BID01', '20/10/2020', '2000', 'New10', 'PM01', 'OR01'),
('BID02', '11/03/2020', '80000', 'New10', 'PM02', 'OR02'),
('BID03', '03/11/2020', '140000', 'Free50', 'PM03', 'OR03'),
('BID04', '21/05/2021', '90000', 'BTGO', 'PM04', 'OR04'),
('BID05', '23/07/2021', '450', 'New10', 'PM05', 'OR05'),
('BID06', '29/08/2021', '500', 'Free50', 'PM06', 'OR06'),
('BID07', '20/09/2021', '1200', 'BTGO', 'PM07', 'OR07'),
('BID08', '27/03/2021', '1300', 'CLR30', 'PM08', 'OR08'),
('BID09', '25/09/2021', '3000', 'BTGO', 'PM09', 'OR09'),
('BID10', '28/10/2021', '1300', 'Free50', 'PM10', 'OR10');

-- --------------------------------------------------------

--
-- Table structure for table `customer`
--

CREATE TABLE `customer` (
  `Customer_ID` varchar(20) NOT NULL,
  `First_Name` varchar(20) DEFAULT NULL,
  `Last_Name` varchar(20) DEFAULT NULL,
  `Phone_Number` varchar(20) DEFAULT NULL,
  `Email_Address` varchar(20) DEFAULT NULL,
  `Customer_Type` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `customer`
--

INSERT INTO `customer` (`Customer_ID`, `First_Name`, `Last_Name`, `Phone_Number`, `Email_Address`, `Customer_Type`) VALUES
('CS01', 'Tunazzinur', 'Rahman', '01876787213', 'kabbo@gmail.com', 'Student'),
('CS02', 'Zobayer', 'Hasan', '01615257555', 'zobayer@gmail.com', 'Student'),
('CS03', 'Hamim', 'Reza', '01925671797', 'hamim@gmail.com', 'Teacher'),
('CS04', 'Abu', 'Essa', '01643578850', 'essa@gmail.com', 'Employee'),
('CS05', 'Rubiatul', 'Jannat', '01711553366', 'janu@gmail.com', 'Housewife'),
('CS06', 'Al', 'Emam', '01365478945', 'emam@gmail.com', 'Farmer'),
('CS07', 'Imran', 'Nazir', '01985412358', 'naziarmy@gmail.com', 'Plumber'),
('CS08', 'Nayma', 'Khatun', '01874561236', 'nayema@gmail.com', 'Babysitter'),
('CS09', 'Rina', 'Akhter', '01565478945', 'rina@gmail.com', 'Doctor'),
('CS10', 'Shahida', 'Binte Uddin', '01633523596', 'sahida@gmail.com', 'Student');

-- --------------------------------------------------------

--
-- Table structure for table `customer category`
--

CREATE TABLE `customer category` (
  `Customer_Category` varchar(20) DEFAULT NULL,
  `Customer_ID` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `customer category`
--

INSERT INTO `customer category` (`Customer_Category`, `Customer_ID`) VALUES
('Student', 'CS01'),
('Student', 'CS02'),
('Teacher', 'CS03'),
('Employee', 'CS04'),
('Housewife', 'CS05'),
('Farmer', 'CS06'),
('Plumber', 'CS07'),
('Babysitter', 'CS08'),
('Doctor', 'CS09'),
('Student', 'CS10');

-- --------------------------------------------------------

--
-- Table structure for table `employees`
--

CREATE TABLE `employees` (
  `Employee_ID` varchar(20) NOT NULL,
  `Employee_Name` varchar(20) DEFAULT NULL,
  `ssn` varchar(20) DEFAULT NULL,
  `Designation` varchar(20) DEFAULT NULL,
  `Employee_Type` varchar(20) DEFAULT NULL,
  `Salary` varchar(20) DEFAULT NULL,
  `Payment_ID` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `employees`
--

INSERT INTO `employees` (`Employee_ID`, `Employee_Name`, `ssn`, `Designation`, `Employee_Type`, `Salary`, `Payment_ID`) VALUES
('EID01', 'Tony stark', '445', 'Manager', 'Full Time', '40000', 'PM01'),
('EID02', 'Samira', '342', 'Cashier', 'Full Time', '25000', 'PM02'),
('EID03', 'Labiba', '289', 'Receptionist', 'Full Time', '25000', 'PM03'),
('EID04', 'Sam', '109', 'Assistant Manager', 'Part Time', '30000', 'PM04'),
('EID05', 'Stives', '209', 'Sales Man', 'Part Time', '15000', 'PM05'),
('EID06', 'Jack', '107', 'Sales Man', 'Full Time', '15000', 'PM06'),
('EID07', 'Natasa', '103', 'Sales Man', 'Full Time', '15000', 'PM07'),
('EID08', 'Karisma', '203', 'Sales Man', 'Part Time', '15000', 'PM08'),
('EID09', 'Qiana', '376', 'Sales Man', 'Part Time', '15000', 'PM09'),
('EID10', 'Jeet', '465', 'Product Manager', 'Full Time', '25500', 'PM10');

-- --------------------------------------------------------

--
-- Table structure for table `order product`
--

CREATE TABLE `order product` (
  `Quantity` varchar(20) DEFAULT NULL,
  `Product_ID` varchar(20) NOT NULL,
  `Order_ID` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `order product`
--

INSERT INTO `order product` (`Quantity`, `Product_ID`, `Order_ID`) VALUES
('1', 'P01', 'OR01'),
('2', 'P02', 'OR02'),
('4', 'P02', 'OR04'),
('1', 'P02', 'OR06'),
('1', 'P03', 'OR03'),
('1', 'P04', 'OR08'),
('1', 'P07', 'OR05'),
('3', 'P07', 'OR07'),
('2', 'P07', 'OR09'),
('3', 'P09', 'OR10');

-- --------------------------------------------------------

--
-- Table structure for table `orders`
--

CREATE TABLE `orders` (
  `Order_ID` varchar(20) NOT NULL,
  `Order_Date` varchar(20) DEFAULT NULL,
  `Status` varchar(20) DEFAULT NULL,
  `Shipment_Duration` varchar(20) DEFAULT NULL,
  `Payment_ID` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `orders`
--

INSERT INTO `orders` (`Order_ID`, `Order_Date`, `Status`, `Shipment_Duration`, `Payment_ID`) VALUES
('OR01', '23/10/2020', 'In Progress', 'Immediate', 'PM01'),
('OR02', '25/01/2021', 'In Progress', 'Immediate', 'PM02'),
('OR03', '23/09/2020', 'Shipped', 'Within 5 days', 'PM03'),
('OR04', '21/03/2021', 'Shipped', 'Within 1 week', 'PM04'),
('OR05', '21/06/2021', 'Partially Shipped', 'Within 1 week', 'PM05'),
('OR06', '12/05/2021', 'In Progress', 'Immediate', 'PM06'),
('OR07', '13/07/2021', 'Shipped', 'Within 3 days', 'PM07'),
('OR08', '16/08/2021', 'Partially Shipped', 'Within 1 week', 'PM08'),
('OR09', '17/09/2021', 'Shipped', 'Within 3 days', 'PM09'),
('OR10', '30/12/2020', 'In Progress', 'Immediate', 'PM10');

-- --------------------------------------------------------

--
-- Table structure for table `payment`
--

CREATE TABLE `payment` (
  `Payment_ID` varchar(20) NOT NULL,
  `Payment_Mode` varchar(20) DEFAULT NULL,
  `Card_Type` varchar(20) DEFAULT NULL,
  `Card_Number` varchar(20) DEFAULT NULL,
  `CVV` varchar(20) DEFAULT NULL,
  `Name_On_Card` varchar(20) DEFAULT NULL,
  `Customer_ID` varchar(20) DEFAULT NULL,
  `Visit_Number` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `payment`
--

INSERT INTO `payment` (`Payment_ID`, `Payment_Mode`, `Card_Type`, `Card_Number`, `CVV`, `Name_On_Card`, `Customer_ID`, `Visit_Number`) VALUES
('PM01', 'Card', 'Visa', '5527156302470003', '775', 'TUNAZZINUR RAHMAN', 'CS01', '#FGWS67'),
('PM02', 'Card', 'Visa', '5527156302470004', '499', 'ZOBAYER HASAN', 'CS02', '#KLJDS89'),
('PM03', 'Card', 'Visa', '5527156302470006', '556', 'HAMIM REZA', 'CS03', '#JTRF87'),
('PM04', 'Card', 'MasterCard', '5527156302470042', '807', 'ABU ESSA', 'CS04', '#JHFRE89'),
('PM05', 'Card', 'MasterCard', '5527156302470056', '310', 'RUBIATUL JANNAT', 'CS05', '#HJKF7'),
('PM06', 'Card', 'MasterCard', '5527156302470078', '269', 'AL EMAM', 'CS06', '#JFTR8'),
('PM07', 'Card', 'Visa', '5527156302470008', '275', 'IMRAN NAZIR', 'CS07', '#UHJFD897'),
('PM08', 'Card', 'MasterCard', '5527156302470085', '456', 'NAYEMA KHATUN', 'CS08', '#YTGSD6'),
('PM09', 'Card', 'Visa', '55271563024700012', '884', 'RINA AKHTER', 'CS09', '#425'),
('PM10', 'Card', 'MasterCard', '5527156302470098', '776', 'SAHIDA BINTE UDDIN', 'CS10', '#FTSD7');

-- --------------------------------------------------------

--
-- Table structure for table `product`
--

CREATE TABLE `product` (
  `Product_ID` varchar(20) NOT NULL,
  `Product_Name` varchar(20) DEFAULT NULL,
  `Available_Number` varchar(20) DEFAULT NULL,
  `Group_ID` varchar(20) DEFAULT NULL,
  `Supplier_ID` varchar(20) DEFAULT NULL,
  `Review_ID` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `product`
--

INSERT INTO `product` (`Product_ID`, `Product_Name`, `Available_Number`, `Group_ID`, `Supplier_ID`, `Review_ID`) VALUES
('P01', 'Rice-Cooker', '10', '100', 'SP01', 'PR01'),
('P02', 'AC', '8', '100', 'SP01', 'PR01'),
('P03', 'Laptop', '100', '100', 'SP01L', 'PR01'),
('P04', 'Fridge', '15', '100', 'SP01', 'PR01'),
('P05', 'Memory Card', '100', '100', 'SP01', 'PR01'),
('P06', 'T-shirt', '100', '200', 'SP02', 'PR02'),
('P07', 'Shirt', '100', '200', 'SP02', 'PR02'),
('P08', 'Denim', '50', '200', 'SP02', 'PR02'),
('P09', 'Boot', '40', '300', 'SP03', 'PR03'),
('P10', 'Sneaker', '30', '300', 'SP03', 'PR03');

-- --------------------------------------------------------

--
-- Table structure for table `product details`
--

CREATE TABLE `product details` (
  `Product_ID` varchar(20) NOT NULL,
  `Weight` varchar(20) DEFAULT NULL,
  `Width` varchar(20) DEFAULT NULL,
  `Height` varchar(20) DEFAULT NULL,
  `Colour` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `product details`
--

INSERT INTO `product details` (`Product_ID`, `Weight`, `Width`, `Height`, `Colour`) VALUES
('P01', '1.5kg', '15 inch', '10 inch', 'White'),
('P02', '1.5 kg', '15 inch', '20 inch', 'White'),
('P03', '1.9 kg', '15 inch', '10 mm', 'Black'),
('P04', '160 lbs', '23 inch', '65 inch', 'Red'),
('P05', '2 gm', '2 cm', '2 cm', 'Black'),
('P06', '0.5 gm', '41 inch', '25.5 inch', 'Baby Pink'),
('P07', '0.8 gm', '42 inch', '29 inch', 'Navy Blue'),
('P08', '0.8 kg', '42 inch', '29 inch', 'Denim'),
('P09', '1.5 kg', '25 cm', '14.5 cm', 'Brown'),
('P10', '1 kg', '25 cm', '10 cm', 'White');

-- --------------------------------------------------------

--
-- Table structure for table `product group`
--

CREATE TABLE `product group` (
  `Group_ID` varchar(20) NOT NULL,
  `Group_Name` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `product group`
--

INSERT INTO `product group` (`Group_ID`, `Group_Name`) VALUES
('100', 'Electronics'),
('200', 'Clothing'),
('300', 'Shoes');

-- --------------------------------------------------------

--
-- Table structure for table `reviews`
--

CREATE TABLE `reviews` (
  `Quality_Rating` varchar(20) DEFAULT NULL,
  `Defect%` varchar(20) DEFAULT NULL,
  `Review_ID` varchar(20) NOT NULL,
  `Review_Date` varchar(20) DEFAULT NULL,
  `Product_ID` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `reviews`
--

INSERT INTO `reviews` (`Quality_Rating`, `Defect%`, `Review_ID`, `Review_Date`, `Product_ID`) VALUES
('100', '0', 'PR01', '23-01-2021', 'P01'),
('90', '10', 'PR02', '25-02-2021', 'P02'),
('85', '15', 'PR03', '20-03-2021', 'P03');

-- --------------------------------------------------------

--
-- Table structure for table `supplier`
--

CREATE TABLE `supplier` (
  `Supplier_ID` varchar(20) NOT NULL,
  `Supplier_Name` varchar(20) DEFAULT NULL,
  `Supply_Quantity` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `supplier`
--

INSERT INTO `supplier` (`Supplier_ID`, `Supplier_Name`, `Supply_Quantity`) VALUES
('SP01', 'Abu Bakkar', '33'),
('SP01L', 'Abu Essa', '200'),
('SP02', 'Cartel', '250'),
('SP03', 'Nike', '70');

-- --------------------------------------------------------

--
-- Table structure for table `voucher`
--

CREATE TABLE `voucher` (
  `Voucher_ID` varchar(20) NOT NULL,
  `Discount%` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `voucher`
--

INSERT INTO `voucher` (`Voucher_ID`, `Discount%`) VALUES
('BTGO', '25'),
('CLR30', '30'),
('Free50', '50'),
('New10', '10');

-- --------------------------------------------------------

--
-- Table structure for table `zip code`
--

CREATE TABLE `zip code` (
  `State` varchar(20) DEFAULT NULL,
  `Zipcode_ID` varchar(20) NOT NULL,
  `City` varchar(20) DEFAULT NULL,
  `Address_ID` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `zip code`
--

INSERT INTO `zip code` (`State`, `Zipcode_ID`, `City`, `Address_ID`) VALUES
('Dhaka', '1210', 'Basabo', 'AID02'),
('Dhaka', '1212', 'Badda', 'AID03'),
('Dhaka', '1213', 'Banani', 'AID07'),
('Dhaka', '1214', 'Gulshan', 'AID10'),
('Dhaka', '1216', 'Mirpur', 'AID08'),
('Dhaka', '1217', 'Mogbazar', 'AID05'),
('Dhaka', '1220', 'Basundhara', 'AID01'),
('Dhaka', '1229', 'Nikunjo', 'AID04'),
('Dhaka', '1260', 'Pilkhana', 'AID06'),
('Dhaka', '1344', 'Savar', 'AID09');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `address`
--
ALTER TABLE `address`
  ADD PRIMARY KEY (`Address_ID`),
  ADD KEY `Index5` (`Customer_ID`),
  ADD KEY `Index6713` (`Zipcode_ID`);

--
-- Indexes for table `bill`
--
ALTER TABLE `bill`
  ADD PRIMARY KEY (`Billing_ID`),
  ADD KEY `Index4` (`Voucher_ID`),
  ADD KEY `Index9` (`Payment_ID`),
  ADD KEY `Index16` (`Order_ID`);

--
-- Indexes for table `customer`
--
ALTER TABLE `customer`
  ADD PRIMARY KEY (`Customer_ID`);

--
-- Indexes for table `customer category`
--
ALTER TABLE `customer category`
  ADD PRIMARY KEY (`Customer_ID`);

--
-- Indexes for table `employees`
--
ALTER TABLE `employees`
  ADD PRIMARY KEY (`Employee_ID`),
  ADD KEY `Index8` (`Payment_ID`);

--
-- Indexes for table `order product`
--
ALTER TABLE `order product`
  ADD PRIMARY KEY (`Product_ID`,`Order_ID`),
  ADD KEY `Index12` (`Product_ID`),
  ADD KEY `Index13` (`Order_ID`);

--
-- Indexes for table `orders`
--
ALTER TABLE `orders`
  ADD PRIMARY KEY (`Order_ID`),
  ADD KEY `Index15` (`Payment_ID`);

--
-- Indexes for table `payment`
--
ALTER TABLE `payment`
  ADD PRIMARY KEY (`Payment_ID`),
  ADD KEY `Index11` (`Customer_ID`);

--
-- Indexes for table `product`
--
ALTER TABLE `product`
  ADD PRIMARY KEY (`Product_ID`),
  ADD KEY `Index1` (`Group_ID`),
  ADD KEY `Index2` (`Supplier_ID`),
  ADD KEY `Index3` (`Review_ID`);

--
-- Indexes for table `product details`
--
ALTER TABLE `product details`
  ADD PRIMARY KEY (`Product_ID`);

--
-- Indexes for table `product group`
--
ALTER TABLE `product group`
  ADD PRIMARY KEY (`Group_ID`);

--
-- Indexes for table `reviews`
--
ALTER TABLE `reviews`
  ADD PRIMARY KEY (`Review_ID`),
  ADD KEY `IX_Relationship5` (`Product_ID`);

--
-- Indexes for table `supplier`
--
ALTER TABLE `supplier`
  ADD PRIMARY KEY (`Supplier_ID`);

--
-- Indexes for table `voucher`
--
ALTER TABLE `voucher`
  ADD PRIMARY KEY (`Voucher_ID`);

--
-- Indexes for table `zip code`
--
ALTER TABLE `zip code`
  ADD PRIMARY KEY (`Zipcode_ID`),
  ADD KEY `Index6` (`Address_ID`);

--
-- Constraints for dumped tables
--

--
-- Constraints for table `address`
--
ALTER TABLE `address`
  ADD CONSTRAINT `will have` FOREIGN KEY (`Customer_ID`) REFERENCES `customer` (`Customer_ID`);

--
-- Constraints for table `bill`
--
ALTER TABLE `bill`
  ADD CONSTRAINT `Generates` FOREIGN KEY (`Payment_ID`) REFERENCES `payment` (`Payment_ID`),
  ADD CONSTRAINT `is billed` FOREIGN KEY (`Order_ID`) REFERENCES `orders` (`Order_ID`),
  ADD CONSTRAINT `is included` FOREIGN KEY (`Voucher_ID`) REFERENCES `voucher` (`Voucher_ID`);

--
-- Constraints for table `customer category`
--
ALTER TABLE `customer category`
  ADD CONSTRAINT `belong` FOREIGN KEY (`Customer_ID`) REFERENCES `customer` (`Customer_ID`);

--
-- Constraints for table `employees`
--
ALTER TABLE `employees`
  ADD CONSTRAINT `monitors` FOREIGN KEY (`Payment_ID`) REFERENCES `payment` (`Payment_ID`);

--
-- Constraints for table `order product`
--
ALTER TABLE `order product`
  ADD CONSTRAINT `contains` FOREIGN KEY (`Order_ID`) REFERENCES `orders` (`Order_ID`),
  ADD CONSTRAINT `product order relation` FOREIGN KEY (`Product_ID`) REFERENCES `product` (`Product_ID`);

--
-- Constraints for table `orders`
--
ALTER TABLE `orders`
  ADD CONSTRAINT `Orders` FOREIGN KEY (`Payment_ID`) REFERENCES `payment` (`Payment_ID`);

--
-- Constraints for table `payment`
--
ALTER TABLE `payment`
  ADD CONSTRAINT `makes` FOREIGN KEY (`Customer_ID`) REFERENCES `customer` (`Customer_ID`);

--
-- Constraints for table `product`
--
ALTER TABLE `product`
  ADD CONSTRAINT `are given` FOREIGN KEY (`Review_ID`) REFERENCES `reviews` (`Review_ID`),
  ADD CONSTRAINT `belongs to` FOREIGN KEY (`Group_ID`) REFERENCES `product group` (`Group_ID`),
  ADD CONSTRAINT `supplies` FOREIGN KEY (`Supplier_ID`) REFERENCES `supplier` (`Supplier_ID`);

--
-- Constraints for table `product details`
--
ALTER TABLE `product details`
  ADD CONSTRAINT `has details` FOREIGN KEY (`Product_ID`) REFERENCES `product` (`Product_ID`);

--
-- Constraints for table `zip code`
--
ALTER TABLE `zip code`
  ADD CONSTRAINT `will zip` FOREIGN KEY (`Address_ID`) REFERENCES `address` (`Address_ID`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
