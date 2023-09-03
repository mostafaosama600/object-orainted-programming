#include <iostream>
using namespace std;

int main()
{

    int arr[10];
    int max = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else
        {
            cout << "max =" << max << endl;
        }
    }
}