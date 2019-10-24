// HW01 Triangle's Type Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Author: Khaled Ras Guerriche


#include "pch.h"
#include <iostream>

int main()
{
	double x, a, b, c, d, f;
	double y;
	double z;
	double hypo;



	std::cout << "enter X , Y, Z  btetween 0.1 and 100.0 to check if Triangle is right:" << std::endl;
	std::cin >> x >> y >> z;

	if (x < 0.1 || y < 0.1 || z < 0.1 || x > 100.0 || y > 100.0 || z > 100.0) {
		std::cout << "enter X , Y, Z  between 0.1 and 100.0 to check if Triangle is right:" << std::endl;
		std::cin >> x >> y >> z;
	}

	if (x > 0.1 && y > 0.1 && z > 0.1 && x < 100.0 && y < 100.0 && z < 100.0) {
		
		// Equilateral Triangle test
		if (x == y && x == z)
		{
			std::cout << "The Triangle is Equilateral" << std::endl;
		}
		// isosceless Triangle test
		if (x == y || x == z || y==z)
		{
			std::cout << "The Triangle is isosceless" << std::endl;
		}

		//right trianlge test
		if (x > y &&  x > z) {
			hypo = x;
			a = hypo * hypo;
			b = y * y;
			c = z * z;
		}

		else if (y > x && y > z)
		{
			hypo = y;
			a = hypo * hypo;
			b = x * x;
			c = z * z;
		}
		else
		{
			hypo = z;
			a = hypo * hypo;
			b = y * y;
			c = x * x;
		}


		d = b + c;




		if (a == d)

			std::cout << "Right Triangle " << std::endl;

		else
		{
			std::cout << "Not Right Triangle" << std::endl;
			f = sqrt(b + c);
			std::cout << "The Expected length for the hypotenuse is: " << f << std::endl;

			//if (f> sqrt(a) || f< sqrt(a))
			//std::cout << "Enter New Lenghts X, Y, Z" << std::endl;

		}

	}

	system("pause");

	return 0;
}
