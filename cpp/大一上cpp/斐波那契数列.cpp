#include<iostream>
using namespace std;
int f(long long n)
{
	if (n < 2)
		return 1;
	else
		return f(n - 1) + f(n - 2);
}
int main2()
{
	long long n; cin >> n;
	cout << f(n);
	return 0;
}
//1 1 2 3 5 8 13
int main5()
{
	int n; cin >> n;
	int* a = new int[n + 1];
	a[0] = 1, a[1] = 1;
	for (int i = 2; i < n; i++)
		a[i] = a[i - 1] + a[i - 2];
	for (int i = 0; i < n; i++)
		cout << i << ':' << '\t' << a[i] << endl;
	return 0;
}