#pragma once
#pragma once

#include <iostream>
#include <fstream>

using namespace std;

void board();
int check_win();
void writeIntToFile(int number, const std::string& filename);
int readIntFromFile(const std::string& filename);
void ShowStatistics();
