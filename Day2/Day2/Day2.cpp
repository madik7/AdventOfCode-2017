// Day2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main()
{
	string line;

	int height;
	int width;

	cin >> height;
	cin >> width;

	int checksum = 0;
	int max;
	int min;
	int value;
	for (int i = 0; i < height; i++) {
		max = 0;
		min = INT_MAX;
		for (int j = 0; j < width; j++) {
			cin >> value;
			if (value > max) max = value;
			if (value < min) min = value;
		}
		checksum += max - min;
	}

	cout << checksum << endl;

	cin.ignore();
	getchar();

    return 0;
}

