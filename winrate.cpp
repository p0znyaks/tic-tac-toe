#include "Header.h"
void writeIntToFile(int number, const string& filename) {
	ofstream file(filename, std::ios::trunc);
	if (file.is_open()) {
		file << number;
		file.close();
	}
}

int readIntFromFile(const string& filename) {
	ifstream file(filename);
	int number = 0;
	if (file.is_open()) {
		file >> number;
		file.close();
	}
	return number;
}


void ShowStatistics() {
	cout << "Matches played: " << readIntFromFile("Games.txt") << endl;
	cout << "Count first player's wins: " << readIntFromFile("firstWin.txt") << endl;
	cout << "Count second player's wins: " << readIntFromFile("secondWin.txt") << endl;
}