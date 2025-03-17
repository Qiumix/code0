#include <iostream>
using namespace std;
int main21()
{
	int a, b, t;
	cin >> a >> b >> t;
	b += t;
	a += (b / 60);
	b %= 60; cout << a << endl << b;
	return 0;
}