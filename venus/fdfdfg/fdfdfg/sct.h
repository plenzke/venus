#pragma once
#include <vector>
#include <random>
#include <iostream>
#include <stdlib.h>
#include <cassert>
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/uniform_real_distribution.hpp>

using namespace std;

struct point {
	double x, y;
};

double doublerand(double min, double max)
{
	random_device rd;
	mt19937 gen(rd());
	uniform_real_distribution<> uid(min, max);
	return uid(gen);
}

point* square(int n, double a)
{
	point* points = new point[n];
	for (int i = 0; i < n; i++)
	{
		points[i].x = doublerand(0, a);
		points[i].y = doublerand(0, a);
	}
	return points;
}

point* circle(int n, double a)
{
	bool p = false;
	point* points = new point[n];
	for (int i = 0; i < n; i++)
	{
		points[i].x = doublerand(0, a);
		points[i].y = doublerand(0, a);
		if (sqrt(pow(points[i].x, 2) + pow(points[i].y, 2)) > a)
		{
			if (points[i].x > 0 && points[i].y > 0)
			{
				points[i].x -= a;
				points[i].y -= a;
			}
			if (points[i].x < 0 && points[i].y>0)
			{
				points[i].x -= a;
				points[i].y += a;
			}
			if (points[i].x < 0 && points[i].y < 0)
			{
				points[i].x += a;
				points[i].y += a;
			}
			if (points[i].x > 0 && points[i].y < 0)
			{
				points[i].x += a;
				points[i].y -= a;
			}
		}
	}
	return points;
}

point* triangle(int n, double x2, double y3)
{
	double x1, x3, y1, y2;
	double ab, ac, bc;
	double pa, pb, pc;
	double apb, apc, bpc;

	x1 = 0;
	y1 = 0;
	y2 = 0;
	x3 = 0;
	point* points = new point[n];
	for (int i = 0; i < n; i++)
	{
		points[i].x = doublerand(0, x2) / 2;
		points[i].y = doublerand(0, y3) / 2;
	}
	for (int i = 0; i < n; i++)
	{
		ab = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
		ac = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));
		bc = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));
		pa = sqrt(pow((points[i].x - x1), 2) + pow((points[i].y - y1), 2));
		pb = sqrt(pow((points[i].x - x2), 2) + pow((points[i].y - y2), 2));
		pc = sqrt(pow((points[i].x - x3), 2) + pow((points[i].y - y3), 2));
		apb = acos((pow(pb, 2) + pow(pa, 2) - pow(ab, 2)) / (2 * pa * pb));
		apc = acos((pow(pc, 2) + pow(pa, 2) - pow(ac, 2)) / (2 * pa * pc));
		bpc = acos((pow(pb, 2) + pow(pc, 2) - pow(bc, 2)) / (2 * pc * pb));
		double summ = (apb + apc + bpc);
		int summ1 = (summ / 2) * 100;
	}
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
	return points;
}