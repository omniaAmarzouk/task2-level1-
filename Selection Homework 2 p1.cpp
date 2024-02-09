//Problem #1: Find the Maximum of 10

#include <iostream>
using namespace std;
int main()
{
	int max, n;
	cout << "Enter any number: ";
	cin >> max;
	cout << "Enter any number: ";
	cin >> n; 
	if (n > max) max = n;
	cout << "Enter any number: ";
	cin >> n;
	if (n > max) max = n;
	cout << "Enter any number: ";
	cin >> n;
	if (n > max) max = n;
	cout << "Enter any number: ";
	cin >> n;
	if (n > max) max = n;
	cout << "Enter any number: ";
	cin >> n;
	if (n > max) max = n;
	cout << "Enter any number: ";
	cin >> n;
	if (n > max) max = n;
	cout << "Enter any number: ";
	cin >> n;
	if (n > max) max = n;
	cout << "Enter any number: ";
	cin >> n;
	if (n > max) max = n;
	cout << "Enter any number: ";
	cin >> n;
	if (n > max) max = n;
	cout << "max= " << max;

	/*int a, b, c, d, e, f, g, h, j, k;     another solution
	cout << "Enter 10 numbers: ";
	cin >> a >> b >> c >> d >> e >> f >> g >> h >> j >> k;
	int max1,max2,max3,max4,max5;
	max1 = (a > b) ? a : b;
	max2 = (d > c) ? d : c;
	max3 = (e > f) ? e : f;
	max4 = (g > h) ? g : h;
	max5 = (j > k) ? j : k;
	int m1, m2;
	m1 = (max1 > max2) ? max1 : max2;
	m2 = (max3 > max4) ? max3 : max4;
	int m3, m4, m5;
	m3 = (m2 > max5) ? m2 : max5;
	m4 = (m1 > m3) ? m1 : m3;
	cout << m4;*/


}
