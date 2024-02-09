//Problem #3: Constrained Maximum

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;
    if (a < 100 && b < 100 && c < 100)
    {
        if (a > b && b > c)
            cout << a;
        else if (b > a && a > c)
            cout << b;
        else
            cout << c;
    }
    else if (a >= 100 && b >= 100 && c >= 100)
        cout << -1;
    else if (a >= 100 || b >= 100 || c >= 100)
    {
        if (c >= 100 && b >= 100 && a < 100)
            cout << a;
        else if (c >= 100 && a >= 100 && b < 100)
            cout << b;
        else if (a >= 100 && b >= 100 && c < 100)
            cout << c;
        else if (c >= 100)
        {
            if (a > b)
                cout << a;
            else
                cout << b;
        }
        else if (b >= 100)
        {
            if (a > c)
                cout << a;
            else
                cout << c;
        }
        else if (a >= 100)
        {
            if (b > c)
                cout << b;
            else
                cout << c;
        }
    }
}

