#ifdef TEST
#define BOOST_TEST_MODULE test1
#include <boost/test/included/unit_test.hpp>

#include "numbers.h"

BOOST_AUTO_TEST_CASE( test_case1 )
{
   BOOST_TEST_CHECK(numbers_lt_20_to_string(0) == string("����"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(1) == string("����"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(2) == string("���"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(3) == string("���"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(4) == string("������"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(5) == string("����"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(6) == string("�����"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(7) == string("����"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(8) == string("������"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(9) == string("������"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(10) == string("������"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(11) == string("�����������"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(12) == string("����������"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(13) == string("����������"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(14) == string("������������"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(15) == string("�����������"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(16) == string("������������"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(17) == string("�����������"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(18) == string("������������"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(19) == string("�������������"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(20) == string("��������"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(30) == string("��������"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(40) == string("�����"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(50) == string("���������"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(60) == string("����������"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(70) == string("���������"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(80) == string("�����������"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(90) == string("���������"));
   BOOST_TEST_CHECK(numbers_lt_20_to_string(100) == string("���"));
}

BOOST_AUTO_TEST_CASE(test_case2)
{
	BOOST_TEST(numbers_lt_100_to_string(10) == string("������"));
	BOOST_TEST(numbers_lt_100_to_string(20) == string("��������"));
	BOOST_TEST(numbers_lt_100_to_string(31) == string("�������� ����"));
	BOOST_TEST(numbers_lt_100_to_string(42) == string("����� ���"));
	BOOST_TEST(numbers_lt_100_to_string(53) == string("��������� ���"));
	BOOST_TEST(numbers_lt_100_to_string(64) == string("���������� ������"));
	BOOST_TEST(numbers_lt_100_to_string(75) == string("��������� ����"));
	BOOST_TEST(numbers_lt_100_to_string(86) == string("����������� �����"));
	BOOST_TEST(numbers_lt_100_to_string(97) == string("��������� ����"));
}

BOOST_AUTO_TEST_CASE(test_case3)
{
	BOOST_TEST(numbers_lt_1000_to_string(20) == string("��������"));
	BOOST_TEST(numbers_lt_1000_to_string(100) == string("���"));
	BOOST_TEST(numbers_lt_1000_to_string(201) == string("������ ����"));
	BOOST_TEST(numbers_lt_1000_to_string(321) == string("������ �������� ����"));
	BOOST_TEST(numbers_lt_1000_to_string(442) == string("��������� ����� ���"));
	BOOST_TEST(numbers_lt_1000_to_string(505) == string("������� ����"));
	BOOST_TEST(numbers_lt_1000_to_string(661) == string("�������� ���������� ����"));
	BOOST_TEST(numbers_lt_1000_to_string(773) == string("������� ��������� ���"));
	BOOST_TEST(numbers_lt_1000_to_string(888) == string("��������� ����������� ������"));
	BOOST_TEST(numbers_lt_1000_to_string(991) == string("��������� ��������� ����"));
}

BOOST_AUTO_TEST_CASE(objects_to_string) {

	BOOST_TEST(object_to_string(19, "�����", "�����", "������") == "������������ ������");
	BOOST_TEST(object_to_string(25, "�����", "�����", "������") == "�������� ���� ������");
	BOOST_TEST(object_to_string(61, "�����", "�����", "������") == "���������� ���� �����");
	BOOST_TEST(object_to_string(92, "�����", "�����", "������") == "��������� ��� �����");

}

BOOST_AUTO_TEST_CASE(currency_to_string) {

	BOOST_TEST(currency_to_string(25, "�����", "�����", "������", 73, "�������", "�������", "������") == "�������� ���� ������, ��������� ��� �������");
	BOOST_TEST(currency_to_string(25, "�����", "�����", "������", 0, "�������", "�������", "������") == "�������� ���� ������, ���� ������");
	BOOST_TEST(currency_to_string(25, "�����", "�����", "������", 2, "�������", "�������", "������") == "�������� ���� ������, ��� �������");
}






BOOST_AUTO_TEST_SUITE_END()
#endif