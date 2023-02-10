#include <iostream>
using namespace std;

int main()
{
    int NoOfLines;
    printf("Please Enter Number of Lines: ");
    cin >> NoOfLines;

    for (int i = 1; i <= NoOfLines; i++)
    {
        int NoOfStars = 2 * i - 1;
        int NoOfSpaces = NoOfLines - i;

        for (int j = 0; j < NoOfSpaces + NoOfStars; j++)
            if (j < NoOfSpaces)
                cout << " ";
            else
                cout << "*";

        cout << endl;
    }
}