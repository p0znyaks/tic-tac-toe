#include <iostream>
#include "Header.h"
	void writeIntToFile(int number, const std::string& filename) {
		std::ofstream file(filename, std::ios::trunc);
		if (file.is_open()) {
			file << number;
			file.close();
			std::cout << "Число успешно записано в файл " << filename << std::endl;
		}
		else {
			std::cout << "Не удалось открыть файл " << filename << std::endl;
		}
	}

	int readIntFromFile(const std::string& filename) {
		std::ifstream file(filename);
		int number = 0;
		if (file.is_open()) {
			file >> number;
			file.close();
			std::cout << "Число успешно считано из файла " << filename << std::endl;
		}
		else {
			std::cout << "Не удалось открыть файл " << filename << std::endl;
		}
		return number;
	}

	int GamesPlayed = readIntFromFile("Games.txt");
	int FirstPlayerWonCount = readIntFromFile("firstWin.txt");
	int SecondPlayerWonCount = readIntFromFile("secondWin.txt");
	


	void ShowStatistics() {
		std::cout << "Матчей сыгранно: " << GamesPlayed << endl;
		std::cout << "Побед первого игрока: " << FirstPlayerWonCount << endl;
		std::cout << "Побед второго игрока: " << SecondPlayerWonCount << endl;
	}

