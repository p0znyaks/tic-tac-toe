#include "Header.h"
#include <chrono>

using namespace std;

auto start = chrono::steady_clock::now();

int timeE()
{
	auto current = chrono::steady_clock::now();
	cout << "Время с начала игры: " << chrono::duration_cast<chrono::seconds>(current - start).count() << " секунд.\n";
	return 0;
}
