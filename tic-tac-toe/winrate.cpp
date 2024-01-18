
#include "Header.h"
void writeIntToFile(int number, const std::string& filename) {
	std::ofstream file(filename, std::ios::trunc);
	if (file.is_open()) {
		file << number;
		file.close();
	}
}

int readIntFromFile(const std::string& filename) {
	std::ifstream file(filename);
	int number = 0;
	if (file.is_open()) {
		file >> number;
		file.close();
	}
	return number;
}


void ShowStatistics() {
	std::cout << "Матчей сыгранно: " << readIntFromFile("Games.txt") << endl;
	std::cout << "Побед первого игрока: " << readIntFromFile("firstWin.txt") << endl;
	std::cout << "Побед второго игрока: " << readIntFromFile("secondWin.txt") << endl;
}
