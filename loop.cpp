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
int main()
{
    int x;
    cin >> x;
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact *= i;
    }
    cout << "fact =" << fact << endl;
}