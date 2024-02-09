//Problem #5: Special Average

#include <iostream>
using namespace std;
int main()
{
    int n, i = 1, j;
    cout << "Enter number of numbers: ";
    cin >> n;
    int sumOdd = 0, sumEven = 0,nOdd=0,nEven=0;
    while (i <= n)
    {
        cout << "Enter number " << i << " : ";
        cin >> j;
        if (i % 2 == 0)
        {
            sumEven += j;
            nEven += 1;
        }
        else
        {
            sumOdd += j;
            nOdd += 1;
        }
        i++;
    }
    cout << sumEven/nEven << " " << sumOdd/nOdd;
}