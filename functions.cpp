#include <iostream>
#include <cmath>
using namespace std;

int calculation(int x, int y)
{
    return x + y;
}
int sayHello()
{
    cout << "Hello";
}

int getMaxValue(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

void printName()
{
    cout << "Hello Mostafa";
}

int main()
{
    calculation(5, 5);
    sayHello();

    cout << "max value is :";
    getMaxValue(10, 15);
    printName();
}
