#include <iostream>
using namespace std;

int main()
{
    int height, width;
    printf("Please Enter height and width: ");
    cin >> height >> width;

    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= width; j++)
        {
            if (i == 1 or i == height)
                cout << "* ";
            else
            {
                if (j == 1 or j == width)
                    cout << "* ";
                else
                    cout << "  ";
            }
        }

        cout << endl;
    }

    system("pause");
    return 0;
}