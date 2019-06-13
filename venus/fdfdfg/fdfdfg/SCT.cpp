//#include <vector>
//#include <random>
//#include <iostream>
//#include <stdlib.h>
//#include <cassert>
//#include <boost/random/mersenne_twister.hpp>
//#include <boost/random/uniform_real_distribution.hpp>
//
//using namespace std;
//
//struct Point {
//	double x, y;
//};
//
//double doubleRand(double Min, double Max)
//{
//	random_device rd;
//	mt19937 gen(rd());
//	uniform_real_distribution<> uid(Min, Max);
//	return uid(gen);
//}
//
//Point* square(int n, double a)
//{
//	Point* points = new Point[n];
//	for (int i = 0; i < n; i++)
//	{
//		points[i].x = doubleRand(0, a);
//		points[i].y = doubleRand(0, a);
//	}
//	return points;
//}
//
//Point* circle(int n, double a)
//{
//	bool p = false;
//	Point* points = new Point[n];
//	for (int i = 0; i < n; i++)
//	{
//		points[i].x = doubleRand(0, a);
//		points[i].y = doubleRand(0, a);
//		if (sqrt(pow(points[i].x, 2) + pow(points[i].y, 2)) > a)
//		{
//			if (points[i].x > 0 && points[i].y > 0)
//			{
//				points[i].x -= a;
//				points[i].y -= a;
//			}
//			if (points[i].x < 0 && points[i].y>0)
//			{
//				points[i].x -= a;
//				points[i].y += a;
//			}
//			if (points[i].x < 0 && points[i].y < 0)
//			{
//				points[i].x += a;
//				points[i].y += a;
//			}
//			if (points[i].x > 0 && points[i].y < 0)
//			{
//				points[i].x += a;
//				points[i].y -= a;
//			}
//		}
//	}
//	return points;
//}
//
//Point* triangle(int n, double X2, double Y3)
//{
//	double X1, X3, Y1, Y2;
//	double AB, AC, BC;
//	double PA, PB, PC;
//	double APB, APC, BPC;
//
//	X1 = 0;
//	Y1 = 0;
//	Y2 = 0;
//	X3 = 0;
//	Point* points = new Point[n];
//	for (int i = 0; i < n; i++)
//	{
//		points[i].x = doubleRand(0, X2) / 2;
//		points[i].y = doubleRand(0, Y3) / 2;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		AB = sqrt(pow((X1 - X2), 2) + pow((Y1 - Y2), 2));
//		AC = sqrt(pow((X1 - X3), 2) + pow((Y1 - Y3), 2));
//		BC = sqrt(pow((X2 - X3), 2) + pow((Y2 - Y3), 2));
//		PA = sqrt(pow((points[i].x - X1), 2) + pow((points[i].y - Y1), 2));
//		PB = sqrt(pow((points[i].x - X2), 2) + pow((points[i].y - Y2), 2));
//		PC = sqrt(pow((points[i].x - X3), 2) + pow((points[i].y - Y3), 2));
//		APB = acos((pow(PB, 2) + pow(PA, 2) - pow(AB, 2)) / (2 * PA * PB));
//		APC = acos((pow(PC, 2) + pow(PA, 2) - pow(AC, 2)) / (2 * PA * PC));
//		BPC = acos((pow(PB, 2) + pow(PC, 2) - pow(BC, 2)) / (2 * PC * PB));
//		double Summ = (APB + APC + BPC);
//		int Summ1 = (Summ / 2) * 100;
//	}
//	bool p = false;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i != j)
//			{
//				if ((points[i].x == points[j].x) && (points[i].y == points[j].y))
//					p = true;
//			}
//		}
//	}
//	return points;
//}