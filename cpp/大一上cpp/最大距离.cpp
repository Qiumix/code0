#include<iostream>
#include<cmath>
using namespace std;
int mainzuidajuli()
{
	int n; cin >> n;
	int* a = new int[n];
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		cin >>a[i];
	}
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			int t = j - i + abs(a[i] - a[j]);
			if (max < t)max = t;
		}
	}
	cout << max;
	return 0;
}