#include "Header.h"
#include <fstream>
char square[10] = { 'o','1','2','3','4','5','6','7','8','9' };
int player = 1, i, choice;
char mark;
int GamesPlayed, FirstPlayerWonCount, SecondPlayerWonCount;
std::string filename1 = "firstWin.txt";
std::string filename2 = "SecondWin.txt";
std::string filename3 = "Games.txt";


int main()
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
    writeIntToFile(++GamesPlayed, filename3);
    if(--player == 1){
        writeIntToFile(++FirstPlayerWonCount, filename1)
    }
    else {
        writeIntToFile(++SecondPlayerWonCount, filename2)
    }
    
    board();
    if (i == 1)
        cout << "Игрок " << --player << " победил!" << endl;
    else
        cout << "Это ничья!" << endl;
    ShowStatistics();
    return 0;
}
