#include <iostream>
using namespace std;

// int main()
// {
//     int count = 0;
//     for (int i = 1; i <= 10; i++)
//     {
//         if (i % 2 == 0 || i % 3 == 0)
//         {
//             count++;
//         }
//     }
//     cout << count << endl;
// }
// int main()
// {
//     int sum = 0;
//     for (int i = 1; i <= 10; i++)
//     {
//         sum += i;
//     }
//     cout << "sum =" << sum << endl;
// }
// int main()
// {
//     int x;
//     cin >> x;
//     int fact = 1;
//     for (int i = 1; i <= x; i++)
//     {
//         fact *= i;
//     }
//     cout << "fact =" << fact << endl;
// }
// int main()
// {
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
// }

int main()
{
    // Multiplication table
    for (int i = 1; i <= 12; i++)
    {
        for (int j = 1; j <= 12; j++)
        {
            cout << j << " * " << i << " = " << j * i << endl;
        }
        cout << "\n--------------------\n"
             << endl;
    }
}