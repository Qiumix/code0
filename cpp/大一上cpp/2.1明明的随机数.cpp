#include<iostream>
using namespace std;
int mainsuiji()
{
	int n; cin >> n;
	int* a = new int[n+2];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			int t = a[j];
			if (a[j] < a[j + 1])t = a[j + 1];
			else
			{
				a[j] = a[j + 1]; a[j + 1] = t;
			}
		}
	}
	a[n + 1] = 10000000;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] != a[i + 1]);
		else count++;
	}
	cout << n - count << endl;
	for (int i = 0; i < n; i++)
	{
		if (a[i] != a[i + 1])cout<<a[i]<<' ';
	}
	delete[]a;
	return 0;
}