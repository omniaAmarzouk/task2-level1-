//Problem #4: Conditional Count

#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, e, f;
	cout << "Enter any number: ";
	cin >> a;
	cout << "Enter another 5 numbers: ";
	cin >> b >> c >> d >> e >> f;
	int min{ 0 }, max{ 0 }, x{ 0 };
	/*if (b > a) //another solution
		max++;
	else
		min++;
	if (c > a)
		max++;
	else
		min++;
	if (d > a)
		max++;
	else
		min++;
	if (e > a)
		max++;
	else
		min++;
	if (f > a)
		max++;
	else
		min++;
	cout << min << " numbers <= " << a << endl;
	cout << max << " numbers > " << a << endl;*/
	x += (b > a);
	x += (c > a);
	x += (d > a);
	x += (e > a);
	x += (f > a);
	cout << x << " numbers > " << a << " and " << 5 - x << " numbers <= " << a;

}

