#include <iostream>



void startTicTacToe();
void startCalculator();

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int choice;

    cout << "�������� ��������:" << endl;
    cout << "1. ��������� ��������-������" << endl;
    cout << "2. ��������� �����������" << endl;
    cout << "��� �����: ";
    cin >> choice;

    switch (choice) {
    case 1:
        startTicTacToe(); 
        break;
    case 2:
        startCalculator(); 
        break;
    default:
        cout << "������������ �����" << endl;
        break;
    }

    return 0;
}
