#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void solveQuadEquation(double a, double b, double c, double &x1, double &x2, int &count);

int main()
{
    double a, b, c, x1, x2;
    int count;
    printf("Please Enter a, b, and c in ax^2 + bx + c = 0: ");
    cin >> a >> b >> c;

    solveQuadEquation(a, b, c, x1, x2, count);
    if (count == 0)
    {
        cout << "No answer !";
    }
    else if (count == 1)
    {
        cout << "answer = " << x1 << endl;
    }
    else
    {
        cout << "answers: \n"
             << "x1 = " << fixed << setprecision(3) << x1 << "\nx2 = " << fixed << setprecision(3) << x2 << endl;
    }

    system("pause");
    return 0;
}

void solveQuadEquation(double a, double b, double c, double &x1, double &x2, int &count)
{
    double delta = b * b - 4 * a * c;
    if (delta < 0)
        count = 0;
    else if (delta == 0)
    {
        x1 = (-b) / (2 * a);
        count = 1;
    }
    else
    {
        delta = sqrt(delta);
        x1 = (-b + delta) / (2 * a);
        x2 = (-b - delta) / (2 * a);
        count = 2;
    }
}