#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class StringRows {

	vector<string> rows = vector<string>();

public:

	istream& enterRows(istream& inputStream);

	void sortByFirstLetter();

	vector<int> countNumberOfWordsInEachRow();

	void printRows(ostream& outputStream);

};
