#include <iostream>
using namespace std;

int combination(int m, int n);

int main()
{
    int m, n;
    printf("Please Enter m, n in (m, n): ");
    cin >> m >> n;

    if (m < n)
        cout << "Can not compute combination!" << endl;
    else
        printf("(%d, %d) = %d \n", m, n, combination(m, n));

    system("pause");
    return 0;
}

int combination(int m, int n)
{
    if (m == n or n == 0)
        return 1;

    return (combination(m - 1, n - 1) + combination(m - 1, n));
}