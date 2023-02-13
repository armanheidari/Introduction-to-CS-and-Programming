#include <iostream>
using namespace std;

void concat(char str1[100], char str2[100]);

int main()
{
    char str1[100], str2[100];
    printf("Please Enter first string: ");
    cin >> str1;
    printf("Please Enter second string: ");
    cin >> str2;
    concat(str1, str2);
    cout << " new value : " << str1 << endl;

    system("pause");
    return 0;
}

void concat(char str1[100], char str2[100])
{
    int i, j;
    for (i = 0; str1[i]; i++)
    {
    }
    for (j = 0; str2[j]; j++)
    {
        str1[i + j] = str2[j];
    }
    str1[i + j] = '\0';
}