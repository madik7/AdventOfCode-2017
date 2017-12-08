// Day1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;
	int sum = 0;

	cin >> input;

	for (int i = 0; i < input.size(); i++) {
		if (input[i] == input[(i + 1) % input.size()])
			sum += (int)input[i] - '0';
	}

	cout << sum << endl;
	cin.ignore();
	getchar();
	return 0;
}

