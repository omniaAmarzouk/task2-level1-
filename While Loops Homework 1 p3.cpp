//Problem #3: Print left angled triangle

#include <iostream>
using namespace std;
int main()
{
	int n, i{1}, j;
	cout << "Enter any number: ";
	cin >> n;
	while (i <= n)
	{
		j = 1;
		while (j <= i)
		{
			cout << "*";
			j++;
		}
		cout << endl;
		i++;
	}
}

