#include <iostream>

class WinRateModule {
private:
    bool* matches;
    int size; 
public:

    WinRateModule(int size) : size(size), matches(new bool[size]) {}

    ~WinRateModule() {
        delete[] matches;
    }
    void addMatch(int index, bool win) {
        if (index >= 0 && index < size) {
            matches[index] = win;
        }
    }
    void displayWinRate() {
        int winCount = 0;
        for (int i = 0; i < size; i++) {
            if (matches[i]) {
                winCount++;
            }
        }
        double winRate = (double)winCount / size;
        std::cout << "Win rate: " << winRate * 100 << "%" << std::endl;
    }
};