//Problem #3: Special Multiples 2

#include <iostream>
using namespace std;
int main()
{
	int n, i;
	cout << "Enter any number: ";
	cin >> n;
	if (n >= 1 && n <= 30)
	{
		i = 1;
		while (i <= n)
		{
			if (i % 3 == 0 && !(i % 4 == 0))
				cout << i << " ";
			i++;
		}
	}
	else
		cout << "invalid number.";
}

