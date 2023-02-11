#include <iostream>
using namespace std;

int gcd(int m, int n);

int main()
{
    int m, n;
    printf("Please Enter 2 integers: ");
    cin >> m >> n;

    cout << "Greatest Common Divisor = " << gcd(m, n) << endl;

    system("pause");
    return 0;
}

int gcd(int m, int n)
{
    if (n > m)
        swap(m, n);

    if (m % n == 0)
        return n;
    else
        return gcd(n, m % n);
}