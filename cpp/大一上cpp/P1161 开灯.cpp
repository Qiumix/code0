#include<iostream>
using namespace std;
bool b[2000002];
int main1161()
{
	double a, t; int n;
	cin >> n; int code;
	for (int i = 0; i <= 2000001; i++)
	{
		b[i] = false;
	}
	for (int i = 1; i <= n; i++)
	{
		cin >> a >> t;
		for (double j = 1; j <= t; j++)
		{
			code = int(a * j);
			b[code] = !b[code];
		}
	}
	for (int i = 1; i <= 2000001; i++)
	{
		if (b[i] == true) { cout << i; goto end; }
	}
end:;
}