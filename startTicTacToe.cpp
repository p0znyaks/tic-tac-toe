#include "header.h"
char square[10] = { 'o','1','2','3','4','5','6','7','8','9' };
int player = 1, i, choice;
char mark;
int GamePlayed, FirstWonCount, SecondWonCount;
string filename1 = "firstWin.txt";
string filename2 = "SecondWin.txt";
string filename3 = "Games.txt";


void startTicTacToe()
{
    setlocale(0, "ru");

    do
    {
        board();
        player = (player % 2) ? 1 : 2;

        cout << "Игрок " << player << ", введите цифру: ";
        cin >> choice;

        mark = (player == 1) ? 'X' : 'O';

        if (choice >= 1 && choice <= 9 && square[choice] == choice + '0')
        {
            square[choice] = mark;
            player++;
        }
        else
        {
            cout << "Неправильное движение. Введите корректную цифру." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        i = check_win();
    } while (i == -1);

    GamePlayed = readIntFromFile(filename3);
    FirstWonCount = readIntFromFile(filename1);
    SecondWonCount = readIntFromFile(filename2);
    writeIntToFile(++GamePlayed, filename3);

    if (--player == 1) {
        writeIntToFile(++FirstWonCount, filename1);
    }
    else {
        writeIntToFile(++SecondWonCount, filename2);
    }

    player++;

    board();
    if (i == 1) {
        cout << "Игрок " << --player << " победил!" << endl;
        timeE();
    }
    else
        cout << "Это ничья!" << endl;
    ShowStatistics();
}
