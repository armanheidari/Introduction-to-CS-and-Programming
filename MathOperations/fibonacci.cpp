#include <iostream>
using namespace std;

int fibonacci(int n);
string nth(int n);

int main()
{
    int n;
    printf("Please Enter an integer: ");
    cin >> n;

    cout << n << nth(n) << " number in fibonacci sequence = " << fibonacci(n) << endl;

    system("pause");
    return 0;
}

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1 or n == 2)
        return 1;

    return (fibonacci(n - 1) + fibonacci(n - 2));
}

string nth(int n)
{
    switch (n)
    {
    case 1:
        return "st";
    case 2:
        return "nd";
    case 3:
        return "rd";

    default:
        return "th";
    }
}
