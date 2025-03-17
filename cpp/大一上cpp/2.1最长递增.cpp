#include<iostream>
using namespace std;
int mainzuichangdizeng()
{
	int n; cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}//获取数据
	int end = 0; int cmax = 1; int count = 1;
	while(end<n-1)
	{
		if (cmax < count)cmax = count;
		count = 1;
		for (int i = end+1; ; i++)
		{
			if (a[i] < a[i + 1]) {count++;}
			else {end = i; break;}
		}
	}
	cout << cmax;
	return 0;
}