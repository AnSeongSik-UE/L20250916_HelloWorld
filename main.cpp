#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{
    int PlayerX = 0;
    int PlayerY = 0;
    bool bIsRunning = true;
    char PlayerShape = 'P';

    while(bIsRunning)
    {
        int KeyCode = _getch();

        if (KeyCode == 'w')
        {
            PlayerY--;
        }
        else if (KeyCode == 's')
        {
            PlayerY++;
        }
        else if (KeyCode == 'a')
        {
            PlayerX--;
        }
        else if (KeyCode == 'd')
        {
            PlayerX++;
        }
        else if (KeyCode == 'q')
        {
            bIsRunning = false;
        }
        system("cls");

        COORD Cur;
        Cur.X = PlayerX;
        Cur.Y = PlayerY;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);

        cout << PlayerShape << endl;
    }

    //PlayerX++;
    //PlayerY++;

    //COORD Cur;
    //Cur.X = PlayerX;
    //Cur.Y = PlayerY;
    //SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);

    //cout << PlayerShape << endl;
    //_getch();
    //system("cls");

    //PlayerX++;

    //Cur.X = PlayerX;
    //Cur.Y = PlayerY;
    //SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);

    //cout << PlayerShape << endl;
    //_getch();
    //system("cls");

    //PlayerY++;

    //Cur.X = PlayerX;
    //Cur.Y = PlayerY;
    //SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);

    //cout << PlayerShape << endl;
    //_getch();
    //system("cls");

	return 0;
}