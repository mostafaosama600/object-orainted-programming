#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;

    switch (x > y)
    {
    case 1:
        cout << "max is x =" << x << endl;
        break;
    case 0:
        cout << "max is x =" << y << endl;
        break;
    }

    int x, y;
    cin >> x >> y;
    int z;
    if (x > y)
    {
        z = x;
    }
    else
    {
        z = y;
    }
    // shortcut
    z = (x > y) ? x : y;

    int m = 5;
    m = m + 1;
    m = m - 1;
    x++;
    x--;
    cout << x;
    // int x = 5;
    // no diffrence in any case but 1
    // postfix
    // z = x++
    // mean
    // z = 5 then++
    // prefix
    // z = ++x
    // mean
    // z = ++ then x
}
