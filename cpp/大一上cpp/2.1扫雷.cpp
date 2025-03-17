#include <iostream>
using namespace std;
int mainss()
{
	int n, m;
	cin >> n >> m;
	int a[102][102] = {0};
	for (int i = 0; i <=n; i++)
	{
		for (int j = 0; j <=m; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			if (a[i][j] == 0)cout << 9 ;
			else cout << a[i - 1][j - 1] + a[i - 1][j] + a[i - 1][j + 1] +
				a[i][j - 1] + a[i][j + 1] +
				a[i + 1][j - 1] + a[i + 1][j] + a[i + 1][j + 1] ;
			if ((j == m) && (i != n))cout << '\n'; else cout << ' ';
		}
	}

	return 0;
}