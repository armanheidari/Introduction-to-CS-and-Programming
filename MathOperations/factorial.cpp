#include <iostream>
using namespace std;

int iterativeFactorial(int n);
int recursiveFactorial(int n);

int main()
{
    int n;
    printf("Please Enter a positive integer: ");
    cin >> n;

    cout << n << "! (iterative) = " << iterativeFactorial(n) << endl;
    cout << n << "! (recursive) = " << recursiveFactorial(n) << endl;

    system("pause");
    return 0;
}

int iterativeFactorial(int n)
{
    int result = 1;

    for (int i = 2; i <= n; i++)
        result *= i;

    return result;
}
int recursiveFactorial(int n)
{
    if (n == 0 or n == 1)
        return 1;

    return (n * recursiveFactorial(n - 1));
}