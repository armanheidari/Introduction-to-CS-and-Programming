#include <iostream>
using namespace std;

void reverse(char string[100]);

int main()
{
    char string[100];
    cout << "Please Enter Your Text: ";
    cin >> string;

    reverse(string);
    cout << "Reverse = " << string << endl;

    system("pause");
    return 0;
}

void reverse(char string[100])
{
    char temp;
    int l, i, j; //- l = length of string
    for (l = 0; string[l]; l++)
    {
    }
    for (i = 0, j = l - 1; i < j; j--, i++)
    {
        temp = string[i];
        string[i] = string[j];
        string[j] = temp;
    }
}