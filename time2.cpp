#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <iomanip>
using namespace std;

int time2()
{
	setlocale(LC_CTYPE, "Russian");
	int q, w, e;
	cout << "Сколько часов" << endl;
	cin >> q;
	cout << "Сколько минут" << endl;
	cin >> w;
	cout << "Сколько секунд" << endl;
	cin >> e;
	while (true) {
		cout << setw(2) << setfill('0') << q << ":";
		cout << setw(2) << setfill('0') << w << ":";
		cout << setw(2) << setfill('0') << e;
		Sleep(950);
		system("cls");
		if (e > 0) {
			e--;
		}
		else if (e == 0 && w > 0) {
			w--;
			e = 59;
		}
		else if (e == 0 && w == 0 && q > 0) {
			q--;
			e = 59;
			w = 59;
		}
		else if (e == 0 && w == 0 && q == 0) {
			cout << "Стоп";
			break;
		}

	}
	return 0;
}
