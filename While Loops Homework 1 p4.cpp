//Problem #: Print face down left angled triangle
//7-i

#include <iostream>
using namespace std;
int main()
{
	int n, i, j;
	cout << "Enter any number: ";
	cin >> n;
	i = 1;
	while(i<=n)
	{
		j = 1;
		while (j <= 7 - i) {
			cout << "*";
			j++;
		}
		cout << endl;
		i++;
	}
}
   