//
//  main.cpp
//  etutor
//
//  Created by Leroy on 02/04/2019.
//  Copyright © 2019 Leroy. All rights reserved.
//
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;
void print(char a[])
{
	int i;
	for (i = 0; i < 4; i++)
	{
		if (i > 0)
			cout << " ";
		if (a[i] == '1')
			cout << "    *";
		else if (a[i] == '0' || a[i] == '2' || a[i] == '3' || a[i] == '5' || a[i] == '6' || a[i] == '7' || a[i] == '8' || a[i] == '9')
			cout << "*****";
		else
			cout << "*   *";
	}
	cout << endl;

	for (i = 0; i < 4; i++)
	{
		if (i > 0)
			cout << " ";
		if (a[i] == '1')
			cout << "    *";
		else if (a[i] == '2' || a[i] == '3' || a[i] == '7')
			cout << "    *";
		else if (a[i] == '0' || a[i] == '4' || a[i] == '8' || a[i] == '9')
			cout << "*   *";
		else
			cout << "*    ";
	}
	cout << endl;

	for (i = 0; i < 4; i++)
	{
		if (i > 0)
			cout << " ";
		if (a[i] == '1')
			cout << "    *";
		else if (a[i] == '2' || a[i] == '3' || a[i] == '4' || a[i] == '5' || a[i] == '6' || a[i] == '8' || a[i] == '9')
			cout << "*****";
		else if (a[i] == '7')
			cout << "    *";
		else
			cout << "*   *";
	}
	cout << endl;

	for (i = 0; i < 4; i++)
	{
		if (i > 0)
			cout << " ";
		if (a[i] == '1')
			cout << "    *";
		else if (a[i] == '2')
			cout << "*    ";
		else if (a[i] == '3' || a[i] == '4' || a[i] == '5' || a[i] == '7' || a[i] == '9')
			cout << "    *";
		else
			cout << "*   *";
	}
	cout << endl;

	for (i = 0; i < 4; i++)
	{
		if (i > 0)
			cout << " ";
		if (a[i] == '1')
			cout << "    *";
		else if (a[i] == '0' || a[i] == '2' || a[i] == '3' || a[i] == '5' || a[i] == '6' || a[i] == '8')
			cout << "*****";
		else
			cout << "    *";
	}
	cout << endl;
}
/* use array to print out digital number in one time and find out the regular type*/
int main()
{
		char a[10];
		while (cin >> a)
		{
			print(a);
		}
	
			
		
		
		//system("pause");
		return 0;
}
