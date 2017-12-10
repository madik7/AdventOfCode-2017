// Day4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iterator>
#include <sstream>
#include <vector>
#include <map>

using namespace std;

struct IntDefaultedToZero
{
	int i = 0;
};

template<typename T, T X>
struct Default {
	Default() : val(T(X)) {}
	Default(T const & val) : val(val) {}
	operator T & () { return val; }
	operator T const & () const { return val; }
	T val;
};

int main()
{
	string line;
	int validCounter = 0;

	while (getline(cin, line)) {
		
		if (line == "")
			break;

		stringstream ss(line);
		istream_iterator<string> begin(ss);
		istream_iterator<string> end;
		vector<string> vstrings(begin, end);
		map<string, Default<int, 0>> words;
		bool valid = true;
		for (int i = 0; i < vstrings.size(); i++) {
			
			cout << vstrings[i] << endl;
			words[vstrings[i]]++;
			if (words[vstrings[i]] > 1) {
				valid = false;
				break;
			}
		}

		if(valid)
			validCounter++;

	}

	cout << validCounter << endl;
	cin.ignore();
	getchar();
    return 0;
}

