//Problem #2: Line Of Characters

#include <iostream>
using namespace std;
int main()
{
    int n;
    char x;
    cout << "Enter number and character: ";
    cin >> n >> x;
    while (n >= 1) {
        cout << x;
        n -= 1;
    }
}

