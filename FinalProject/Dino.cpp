#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;

char m = char(254);
char x2[3] = {m, m};
char x3[4] = {m, m, m};
char x4[5] = {m, m, m, m}; //- Used in Dino's Texture
void xy(int x, int y)
{
    COORD p; //- p = position
    p.X = x;
    p.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p); //- Move cursor to p
}

void delay(unsigned int ms) //- ms = 10^-3 second , unsigned > 0
{
    clock_t ds = ms + clock(); //- ds = decreasing speed, Decreasing dino's speed over time
    while (ds > clock())
        ;
}

void start()
{
    system("cls");
    xy(11, 5);
    cout << "Press Space to Jump,Press Q to Exit";
    xy(63, 5);
    cout << "Score : ";
    xy(2, 28);
    for (int j = 0; j < 79; j++)
    {
        cout << m;
    }
}

int t, s = 60; //- s = speed
void run(int jump = 0)
{
    static int b = 1;
    if (jump == 0) //- default
    {
        t = 0;
    }
    if (jump == 2) //- Downward movement
    {
        t--;
    }
    else //- jump = 1, Upward movement
    {
        t++;
    }

    //? Dino's Body
    xy(3, 18 - t);
    cout << "               ";
    xy(3, 19 - t);
    cout << "       " << x3 << x4;
    xy(3, 20 - t);
    cout << "      " << x2 << " " << x4 << x2;
    xy(3, 21 - t);
    cout << "      " << x4 << x4 << m;
    xy(3, 22 - t);
    cout << "      " << x4 << x2 << "   ";
    xy(3, 23 - t);
    cout << m << "     " << x4 << x3;
    xy(3, 24 - t);
    cout << x2 << "  " << x4 << x3 << x2;
    xy(3, 25 - t);
    cout << "  " << x4 << x4 << "  " << m << "   ";
    xy(3, 26 - t);
    cout << "   " << x3 << x4 << "     ";

    //? Dino's Legs
    xy(3, 27 - t);
    if (jump == 1 || jump == 2) //- Jump
    {
        cout << "   " << m << "    " << m << "      ";
        xy(3, 28 - t);
        cout << "   " << x2 << "   " << x2 << "     ";
    }
    else if (b == 1) //- 1st movement
    {
        cout << "   " << m << "   " << x2 << "      ";
        xy(3, 28 - t);
        cout << "   " << x2 << "           ";
        b = 2; //- Getting ready for 2nd movement
    }
    else if (b == 2)
    {
        cout << "   " << x2 << "   " << m << "      ";
        xy(3, 28 - t);
        cout << "        " << x2 << "     ";
        b = 1; //- Getting ready for 1st movement
    }

    //? Space Under Dino's Legs
    xy(3, 29 - t);
    if (jump != 0) //- Jump
    {
        cout << "                 ";
    }
    else //- 1st & 2nd movement
    {
        cout << x4 << x4 << x4 << x3 << x2;
    }

    delay(s);
}
void object()
{
    static int x = 0, score = 0;
    if (x == 53 && t < 4) //- losing state
    {
        score = 0;
        s = 60;
        xy(37, 11);
        cout << " | You Lose | ";
        getch(); //- for restart
        xy(37, 11);
        cout << "              ";
    }
    xy(70 - x, 24);
    cout << " -- ";
    xy(70 - x, 25);
    cout << " || ";
    xy(70 - x, 26);
    cout << " || ";
    xy(70 - x, 27);
    cout << " || ";
    x++;
    if (x == 60) //- Successful jump
    {
        score++;
        x = 0;
        xy(71, 5);
        cout << "     "; //- Reset score board
        xy(71, 5);
        cout << score; //- Score
        if (s > 20)
        {
            s--;
        }
    }
}
int main()
{
    system("mode con= lines=30 cols=85");

    int i;
    char ch;
    start();
    while (true)
    {
        while (!kbhit()) //- No button
        {
            run();
            object();
        }
        ch = getch();
        if (ch == ' ')
        {
            for (i = 0; i < 10; i++) //- Upward movement
            {
                run(1);
                object();
            }
            for (i = 0; i < 10; i++) //- Downward movement
            {
                run(2);
                object();
            }
        }
        else if (ch == 'q' || ch == 'Q') //- quit the game
        {
            return 0;
        }
    }
}
