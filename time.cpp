#include "Header.h"

auto start = chrono::steady_clock::now();

int timeE()
{
	auto current = chrono::steady_clock::now();
	cout << "Time since the start of the game: " << chrono::duration_cast<chrono::seconds>(current - start).count() << " seconds.\n";
	return 0;
}