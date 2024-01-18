#include <iostream>


int time2();
void startTicTacToe();
void startCalculator();

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int choice;

    cout << "Выберите действие:" << endl;
    cout << "1. Запустить крестики-нолики" << endl;
    cout << "2. Запустить калькулятор" << endl;
    cout << "3. Запустить таймер" << endl;
    cout << "Ваш выбор: ";
    cin >> choice;

    switch (choice) {
    case 1:
        startTicTacToe(); 
        break;
    case 2:
        startCalculator(); 
        break;
    case 3:
        time2();
        break;
    default:
        cout << "Неправильный выбор" << endl;
        break;
    }

    return 0;
}
