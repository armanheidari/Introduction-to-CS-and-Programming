#include <iostream>
using namespace std;

int reverseNum(int n);
bool isPalindrome(int n);

int main()
{
    int n;
    printf("Please Enter an integer: ");
    cin >> n;

    if (isPalindrome(n))
        printf("Entered number is palindrome. \n");
    else
        printf("Entered number is NOT palindrome. \n");

    system("pause");
    return 0;
}

int reverseNum(int n)
{
    int r; //- remainder
    int m = 0;

    while (n != 0)
    {
        r = n % 10;
        m = 10 * m + r;
        n /= 10;
    }

    return m;
}

bool isPalindrome(int n)
{
    return n == reverseNum(n);
}