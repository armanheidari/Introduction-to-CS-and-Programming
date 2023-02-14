#include <iostream>
using namespace std;

struct term
{
    double coef;
    int exp;
};

struct polynomial
{
    term terms[100];
    int n; //- n = number of terms
};

int main()
{
    polynomial p1;
    cout << "Please Enter degree of polynomial : ";
    cin >> p1.n;
    for (int i = 0; i <= p1.n; i++)
    {
        cout << "Please Enter Coefficients for x^" << i << " : ";
        cin >> p1.terms[i].coef;
    }
    cout << "Polynomial = ";
    for (int i = p1.n; i >= 0; i--)
    {
        if (p1.terms[i].coef == 0)
        {
            if (i == 0)
            {
                cout << p1.terms[i].coef;
            }
            else
            {
                cout << p1.terms[i].coef << " + ";
            }
        }
        else if (i == 0)
        {
            cout << p1.terms[i].coef;
        }
        else
        {
            cout << p1.terms[i].coef << "x^" << i << " + ";
        }
    }
    return 0;
}
