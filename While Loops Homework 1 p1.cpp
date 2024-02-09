//Problem #1: Print Range

#include <iostream>
using namespace std;
int main()
{
    int start, end;
    cout << "Enter start and end number: ";
    cin >> start >> end;
    while (start <= end)
    {
        cout << start << endl;
        start+=1;
    }
}

