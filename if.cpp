#include <iostream>
using namespace std;

/*
    diffrent between int & void
        int >> return numbers and the default value is 0
        void >> can't return anything
*/
/*
    diffrent between cout cin
    cout << to show input for user
    cin >> to take input from user
*/
/*
    sequencing in C++ is line by line but javascript is housting
*/
int main()
{
    cout << endl;
    int c = 10;
    char v = 'm';
    double b = 1.5;

    cout << "please enter your salary\n";
    // decleration
    int salary = 0;
    // initialization
    int month{12};
    cin >> salary;
    cout << "your salary per year is = " << salary * month;

    cout << endl;
    char y = 'r';
    bool z = false;
    // true = 1 // false = 0
    cout << z;

    const int number_of_months = 13;
    cout << "please enter a number and a character";
    int d;
    char f;
    cin >> d >> f;
    cout << "result is = " << d << endl;
    cout << "result is = " << f << endl;
    int g, h, j;
    g = 5;
    h = 3;
    j = g;
    g = h;
    h = j;
    cout << g;
    cout << h;
    /*
    int g, h, j;
    g = 5;
    h = 3;
    g = h;
        So assigment operator = means storage the value with another value
    g == h
        Equality operator == means value is equal to another value?
    g != h
        Not Equal != means value is not equal another value?

    */
    cout << endl;
    cout << endl;
    int kl = 5321;
    cout << kl % 10 << endl;
    kl /= 10;
    cout << kl % 10 << endl;
    kl /= 10;
    cout << kl % 10 << endl;

    /*
        increment and decrement and logical operators
            int i = 1
            i = i + 1
            i++
        ***********************
            int i = 3
            i = i - 3
            i--
        ***********************
        && and (5 > 2) && (3 < 8) give me true if the 2 conditions is realy done
        || and (9 > 7) && (4 < 3) give me false if the 2 conditions is realy not done
        ! (6 < 1) true is 6 small than 1 ? true , but if we recab we will find ! so the result will be false
    */
    /*
         compound assignment operator
         int m = 15
         += | m = m + 10 | m + 10 = 25
         -= | m = m - 10 | m - 10 = 5
         *= | m = m * 10 | m * 10 = 150
         /= | m = m / 10 | m / 10 = 1
         %= | m = m % 10 | m % 10 = 5
    */
    /*
         syntax error
         run time error
         logical error
    */

    //     int x, y;
    //     cin >> x >> y;

    //     switch (x > y)
    //     {
    //     case 1:
    //         cout << "max is x =" << x << endl;
    //         break;
    //     case 0:
    //         cout << "max is x =" << y << endl;
    //         break;
    //     }

    //     int x, y;
    //     cin >> x >> y;
    //     int z;
    //     if (x > y)
    //     {
    //         z = x;
    //     }
    //     else
    //     {
    //         z = y;
    //     }
    //     // shortcut
    //     z = (x > y) ? x : y;

    //     int m = 5;
    //     m = m + 1;
    //     m = m - 1;
    //     x++;
    //     x--;
    //     cout << x;
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

    return 0;
}