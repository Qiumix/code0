#include <iostream>
using namespace std;
int max(int a, int b)
{
	return a > b ? a : b;
}
int main()
{
	int n;
	cin >> n;
	int a[100][100];
	int c[100][100];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < i + 1; j++)
			cin >> a[i][j];
	for (int i = 0; i < n; i++)
		c[n - 1][i] = a[n - 1][i];
	for (int i = n - 2; i > -1; i--)
		for (int j = 0; j < i + 1; j++)
			c[i][j] = a[i][j] + max(c[i + 1][j], c[i + 1][j + 1]);
	cout << c[0][0] << endl;
}
