#include "Header.h"
#include <chrono>
#include <thread>

using namespace std;

auto start = chrono::steady_clock::now(); 

int time()
{
	this_thread::sleep_for(std::chrono::seconds(2)); 
	auto current = chrono::steady_clock::now(); 
	cout << "Время с начала игры: " << chrono::duration_cast<chrono::seconds>(current - start).count() << " секунд.\n";
	return 0;
}