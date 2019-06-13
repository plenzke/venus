#ifdef _TEST
#define BOOST_TEST_MODULE tests
#include <boost/test/included/unit_test.hpp>
#include "sct.h"
bool check(Point* points, int n)
{
	bool p = false;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i != j)
			{
				if ((points[i].x == points[j].x) && (points[i].y == points[j].y))
					p = true;
			}
		}
	}
	return p;
}
bool square_check(Point* points, int n, int a)
{
	bool check1 = false;
	for (int i = 0; i < n; i++)
	{
		if (points[i].x > a && points[i].y > a)
			check1 = true;
	}
	return check1;
}
bool circle_check(Point* points, int n, int r)
{
	bool check2 = true;
	for (int i = 0; i < n; i++)
		if (sqrt(pow(points[i].x, 2) + pow(points[i].y, 2)) < r)
			check2 = false;
	return check2;
}

BOOST_AUTO_TEST_SUITE(test_suite1)

BOOST_AUTO_TEST_CASE(test_square)
{
	BOOST_TEST(square_check(square(100, 5), 100, 5) == false);
	BOOST_TEST(square_check(square(100, 10), 100, 10) == false);
	BOOST_TEST(square_check(square(500, 10), 500, 10) == false);
	BOOST_TEST(square_check(square(1000, 10), 1000, 10) == false);
	BOOST_TEST(square_check(square(300, 1), 300, 1) == false);
	BOOST_TEST(square_check(square(120, 100), 120, 100) == false);

	BOOST_TEST(check(square(100, 5), 100) == false);
	BOOST_TEST(check(square(100, 10), 100) == false);
	BOOST_TEST(check(square(500, 10), 500) == false);
	BOOST_TEST(check(square(1000, 10), 1000) == false);
	BOOST_TEST(check(square(300, 1), 300) == false);
	BOOST_TEST(check(square(120, 100), 120) == false);
}
BOOST_AUTO_TEST_CASE(test_circle)
{
	BOOST_TEST(circle_check(circle(100, 5), 100, 5) == false);
	BOOST_TEST(circle_check(circle(100, 10), 100, 10) == false);
	BOOST_TEST(circle_check(circle(500, 10), 500, 10) == false);
	BOOST_TEST(circle_check(circle(1000, 10), 1000, 10) == false);
	BOOST_TEST(circle_check(circle(300, 1), 300, 1) == false);
	BOOST_TEST(circle_check(circle(120, 100), 120, 100) == false);

	BOOST_TEST(check(circle(100, 5), 100) == false);
	BOOST_TEST(check(circle(100, 10), 100) == false);
	BOOST_TEST(check(circle(500, 10), 500) == false);
	BOOST_TEST(check(circle(1000, 10), 1000) == false);
	BOOST_TEST(check(circle(300, 1), 300) == false);
	BOOST_TEST(check(circle(120, 100), 120) == false);
}
BOOST_AUTO_TEST_CASE(test_triangle)
{
	BOOST_TEST(check(triangle(100, 5, 4), 100) == false);
	BOOST_TEST(check(triangle(10, 10, 20), 10) == false);
	BOOST_TEST(check(triangle(500, 10, 2), 500) == false);
	BOOST_TEST(check(triangle(1000, 10, 10), 1000) == false);
	BOOST_TEST(check(triangle(3, 1, 1), 3) == false);
	BOOST_TEST(check(triangle(120, 100, 1), 100) == false);
}


BOOST_AUTO_TEST_SUITE_END()
#endif