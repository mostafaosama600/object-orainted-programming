#include <iostream>
using namespace std;

int main()
{
    //     int x;
    //     cin >> x;
    //     int count = 0;
    //     for (int i = 1; i <= x; i++)
    //     {
    //         if (x % i == 0)
    //         {
    //             count++;
    //         }
    //     }
    //     if (count == 2)
    //     {
    //         cout << x << " is a prime number";
    //     }
    //     else
    //     {
    //         cout << x << " is not a prime number";
    //     }

    //     // Multiplication table
    //     for (int i = 1; i <= 12; i++)
    //     {
    //         for (int j = 1; j <= 12; j++)
    //         {
    //             cout << j << " * " << i << " = " << j * i << endl;
    //         }
    //         cout << "\n--------------------\n"
    //              << endl;
    //     }

    // int x;
    // cin >> x;
    // int i = 1;
    // while (i <= x)
    // {
    //     if (i % 2 != 0)
    //     {
    //         cout << i << endl;
    //     }
    //     i++;
    // }
    // for (int i = 1; i <= 10; i++)
    // {
    //     if (i == 4)
    //     {
    //         break;
    //         // continue;
    //     }
    //     cout << i << endl;
    // }

    // squar
    int x;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}