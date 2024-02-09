//Problem #2: Special Multiples 1

#include <iostream>
using namespace std;
int main()
{
	int n, i{ 0 };
	cout << "Enter any number: ";
	cin >> n;
	while (i <= n)
	{
		if (i % 8 == 0 || i % 4 == 0 & i % 3 == 0)
			cout << i << " ";
		i++;
	}
}