#include <iostream>
using namespace std;

void startCalculator() {
    setlocale(LC_ALL, "Russian");
    int num1, num2, suma, minus, del, umn;
    string znak;
    cout << ("Введите первое число: ");
    cin >> num1;
    cout << ("Введите второе число: ");
    cin >> num2;
    cout << ("Выберите действие. '+' плюс. '-' минус. '*' умножить. '/' поделить. ") << endl;
    cin >> znak;
    if (znak == "+") {
        suma = num1 + num2;
        cout << "Результат суммы: " << suma << endl;
    }
    else if (znak == "-") {
        minus = num1 - num2;
        cout << "Результат вычитания: " << minus << endl;
    }
    else if (znak == "*") {
        umn = num1 * num2;
        cout << "Результат умножения: " << umn << endl;
    }
    else if (znak == "/") {
        del = num1 / num2;
        cout << "Результат деления: " << del << endl;
    }
    else {
        cout << "Операция не выбрана" << endl;

    }
}
