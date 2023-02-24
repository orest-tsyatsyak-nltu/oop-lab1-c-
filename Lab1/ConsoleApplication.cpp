#include "StringRows.h";

int main() {
	StringRows rows;

	for(int i = 0; i < 3; i++) {
		cout << "Enter line: ";
		rows.enterRows(cin);
	}

	cout << endl;

	cout << "Entered rows: " << endl << endl;

	rows.printRows(cout);
	
	cout << endl;

	cout << "Sorted by first letter" << endl << endl;

	rows.sortByFirstLetter();

	rows.printRows(cout);

	cout << endl;

	vector<int> numberOfWordsInEachRow = rows.countNumberOfWordsInEachRow();

	for (int i = 0; i < numberOfWordsInEachRow.size(); i++) {
		cout << "Number of words in " << i + 1 << " row: " << numberOfWordsInEachRow[i] << endl;
	}

	return 0;
}