#pragma once

#include <iostream>
#include <fstream>
#include <chrono>

using namespace std;

void board();
int check_win();
void writeIntToFile(int number, const std::string& filename);
int readIntFromFile(const string& filename);
void ShowStatistics();
int timeE();
