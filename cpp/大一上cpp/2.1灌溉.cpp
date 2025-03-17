#include <iostream>
using namespace std;
int a[102][102] = { 0 };
int b[102][102] = { 0 };
int mainguanguai()
{
	int n, m, t,r,c; cin >> n >> m >> t;
	for (int i = 1; i <= t; i++)
	{
		cin >> r >> c;
		a[r][c] = 1;
	}int v; cin >> v;
	for (int i = 1; i <= v; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			for (int k = 1; k <=m; k++)
			{
				if (a[j][k] == 1)
				{
					b[j][k] = 1;
					b[j][k + 1] = 1;
					b[j][k - 1] = 1;
					b[j + 1][k] = 1;
					b[j - 1][k] = 1;
				}
			}
		}
	}
	for (int j = 1; j <= n; j++)
	{
		for (int k = 1; k <= m; k++)
		{
			a[j][k] = b[j][k];
		}
	}
	int count = 0;
	for (int j = 1; j <= n; j++)
	{
		for (int k = 1; k <= m; k++)
		{
			if (a[j][k] == 1)
			{
				count++;
			}
		}
	}
	cout << count;
	return 0;
}