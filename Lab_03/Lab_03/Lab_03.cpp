// Lab_03.cpp : Defines the entry point for the console application.
//Carlton O. Wilcox
// Lab_03
// Brandon Endsley, Jon Caldwell, Matt McMenamin, James Schuchardt, and I worked on this lab.

#include "stdafx.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

short sumShort(short val);
long sumLong(long val);
float productFloat(float val);
double productDouble(double val);
float productRecip(float val);





int main()
{


	short n = 0;
	cout << "Would you kindly enter a number: ";
	cin >> n;

	cout << "\n" << "sum: " << sumShort(n) << "\n";
	
	long n2 = 0;
	cout <<"\n"<< "Would you kindly enter a long for the summation: ";
	cin >> n2;

	cout << "\n" << "sum: " << sumLong(n2) << "\n";

	float n3 = 1;
	cout <<"\n"<< "Would you kindly enter a long for the factorial: ";
	cin >> n3;

	cout << "\n" << "sum: " << productFloat(n3) << "\n";

	double n4 = 1;
	cout <<"\n"<< "Would you kindly enter a double for the factorial: ";
	cin >> n4;

	cout << "\n" << "sum: " << productDouble(n4) << "\n";
		
	float n5=0;
	cout <<"\n"<< "Would you kindly enter a float for the reciprocal: ";
	cin >> n5;

	cout << "\n" << "sum: " << productRecip(n5) << "\n";

	

	for (float i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
	cout << endl;
	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}



			
		

	
		
}

short sumShort(short val)
{
	if (val >= 1)
	{
		short sum = 0;
		for (short i = 1; i <= val; i++)
		{
			sum += i;
		}
		return sum;
	}
	return 0;
}

long sumLong(long val)
{
	if (val >= 1)
	{
		long sum = 0;
		for (long i = 1; i <= val; i++)
		{
			sum += i;
		}
		return sum;
	}
	return 0;
}
float productFloat(float val)
{
	if (val >= 1)
	{
		float factorial = 1;
		for (long i = 1; i <= val; i++)
		{
			factorial *= i;
		}
		return factorial;
	}
	return 0;
}
double productDouble(double val)
{
	if (val >= 1)
	{
		double factorial = 1;
		for (long i = 1; i <= val; i++)
		{
			factorial *= i;
		}
		return factorial;
	}
	return 0;

}
float productRecip(float val)
{

	if (val >= 1)
	{
		float sum = 0;
		for (float i = 1; i <= val; i++)
		{
			sum += 1/i;
		}
		return sum-1;
	}
	return 0;

}

