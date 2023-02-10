#include <iostream>
using namespace std;

int main()
{
    int side, base;
    printf("Please Enter side and base: ");
    cin >> side >> base;

    for (int i = 1; i <= side; i++)
    {
        int space = side - i;

        for (int j = 1; j <= base + space; j++)
        {
            //- 1) Fixing Spaces
            if (j <= space)
                cout << "  ";

            //- 2) Drawing the parallelogram
            else
            {
                //- 1- Full Lines
                if (i == 1 or i == side)
                    cout << "* ";

                //- 2- Lines With Space inside
                else
                {
                    if (j == space + 1 or j == base + space)
                        cout << "* ";
                    else
                        cout << "  ";
                }
            }
        }

        cout << endl;
    }
}