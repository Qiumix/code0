#include<iostream>
using namespace std;
const int main1085()
{
	int sum[7],count=0;
	for (int i = 0; i < 7; i++)
	{
		int a, b;
		cin >> a >> b; sum[i] = a + b;
	}
	int week = 0;
	for (int i = 6; i >= 0; i--)
	{
		if (sum[i] > 8 and count <= sum[i]) { count = sum[i]; week = i + 1; }
	}cout << week;
	return 0;
}