#ifdef TEST
#define BOOST_TEST_MODULE test1
#include <boost/test/included/unit_test.hpp>

#include "numbers.h"

BOOST_AUTO_TEST_CASE( test_case1 )
{
   BOOST_TEST_CHECK(numbers_lt_20_to_string(0) == string("ноль"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(1) == string("один"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(2) == string("два"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(3) == string("три"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(4) == string("четыре"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(5) == string("пять"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(6) == string("шесть"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(7) == string("семь"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(8) == string("восемь"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(9) == string("девять"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(10) == string("десять"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(11) == string("одиннадцать"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(12) == string("двенадцать"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(13) == string("тринадцать"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(14) == string("четырнадцать"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(15) == string("пятьнадцать"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(16) == string("шестьнадцать"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(17) == string("семьнадцать"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(18) == string("восемнадцать"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(19) == string("девятьнадцать"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(20) == string("двадцать"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(30) == string("тридцать"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(40) == string("сорок"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(50) == string("пятьдесят"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(60) == string("шестьдесят"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(70) == string("семьдесят"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(80) == string("восемьдесят"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(90) == string("девяносто"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(100) == string("сто"));
}

BOOST_AUTO_TEST_CASE(test_case2)
{
	BOOST_TEST(numbers_lt_100_to_string(10) == string("десять"));
	BOOST_TEST(numbers_lt_100_to_string(20) == string("двадцать"));
	BOOST_TEST(numbers_lt_100_to_string(31) == string("тридцать один"));
	BOOST_TEST(numbers_lt_100_to_string(42) == string("сорок два"));
	BOOST_TEST(numbers_lt_100_to_string(53) == string("пятьдесят три"));
	BOOST_TEST(numbers_lt_100_to_string(64) == string("шестьдесят четыре"));
	BOOST_TEST(numbers_lt_100_to_string(75) == string("семьдесят пять"));
	BOOST_TEST(numbers_lt_100_to_string(86) == string("восемьдесят шесть"));
	BOOST_TEST(numbers_lt_100_to_string(97) == string("девяносто семь"));
}

BOOST_AUTO_TEST_CASE(test_case3)
{
	BOOST_TEST(numbers_lt_1000_to_string(20) == string("двадцать"));
	BOOST_TEST(numbers_lt_1000_to_string(100) == string("сто"));
	BOOST_TEST(numbers_lt_1000_to_string(201) == string("двести один"));
	BOOST_TEST(numbers_lt_1000_to_string(321) == string("триста двадцать один"));
	BOOST_TEST(numbers_lt_1000_to_string(442) == string("четыреста сорок два"));
	BOOST_TEST(numbers_lt_1000_to_string(505) == string("пятьсот пять"));
	BOOST_TEST(numbers_lt_1000_to_string(661) == string("шестьсот шестьдесят один"));
	BOOST_TEST(numbers_lt_1000_to_string(773) == string("семьсот семьдесят три"));
	BOOST_TEST(numbers_lt_1000_to_string(888) == string("восемьсот восемьдесят восемь"));
	BOOST_TEST(numbers_lt_1000_to_string(991) == string("девятьсот девяносто один"));
}

BOOST_AUTO_TEST_CASE(objects_to_string) {

	BOOST_TEST(object_to_string(19, "рубль", "рубля", "рублей") == "девятнадцать рублей");
	BOOST_TEST(object_to_string(25, "рубль", "рубля", "рублей") == "двадцать пять рублей");
	BOOST_TEST(object_to_string(61, "рубль", "рубля", "рублей") == "шестьдесят один рубль");
	BOOST_TEST(object_to_string(92, "рубль", "рубля", "рублей") == "девяносто два рубля");

}

BOOST_AUTO_TEST_CASE(currency_to_string) {

	BOOST_TEST(currency_to_string(25, "рубль", "рубля", "рублей", 73, "копейка", "копейки", "копеек") == "двадцать пять рублей, семьдесят три копейки");
	BOOST_TEST(currency_to_string(25, "рубль", "рубля", "рублей", 0, "копейка", "копейки", "копеек") == "двадцать пять рублей, нуль копеек");
	BOOST_TEST(currency_to_string(25, "рубль", "рубля", "рублей", 2, "копейка", "копейки", "копеек") == "двадцать пять рублей, два копейки");
}






BOOST_AUTO_TEST_SUITE_END()
#endif