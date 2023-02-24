#include "StringRows.h"
#include <cctype>

istream& StringRows::enterRows(istream& inputStream)
{
	string row;
	getline(inputStream, row);
	rows.push_back(row + " ");
	return inputStream;
}

void StringRows::sortByFirstLetter()
{
	sort(begin(rows), end(rows), [](string& a, string& b) {return (int)tolower(a[0]) < (int)tolower(b[0]); });
}

vector<int> StringRows::countNumberOfWordsInEachRow()
{
	vector<int> numberOfWordsInEachRow;
	for (auto& row : rows) {
		int wordCounter = 0;
		bool hasActiveWord = false;
		for (auto character : row) {
			bool isLetter = isalpha(character);
			if (isLetter) {
				hasActiveWord = true;
			}
			if (hasActiveWord && !isLetter) {
				wordCounter++;
				hasActiveWord = false;
			}
		}
		numberOfWordsInEachRow.push_back(wordCounter);
	}
	return numberOfWordsInEachRow;
}

void StringRows::printRows(ostream& outputStream)
{
	for (auto& row : rows) {
		outputStream << row << endl;
	}
}


