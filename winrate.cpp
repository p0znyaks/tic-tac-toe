
#include "header.h"
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
	cout << "Матчей сыгранно: " << readIntFromFile("Games.txt") << endl;
	cout << "Побед первого игрока: " << readIntFromFile("firstWin.txt") << endl;
	cout << "Побед второго игрока: " << readIntFromFile("secondWin.txt") << endl;
}
