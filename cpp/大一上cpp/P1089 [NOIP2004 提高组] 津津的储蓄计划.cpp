#include<iostream>
using namespace std;
int main1089()
{
	int cost[12], remain[12],judge=0,temp,count=0;
	for (int i = 0; i < 12; i++) { cin >> cost[i]; }
	for (int i = 0; i < 12; i++)
	{
		if (i == 0)remain[i] = 300 - cost[i];
		else remain[i] = remain[i - 1] + 300 - cost[i];
		if (remain[i] < 0) { judge = 1; temp = -i - 1; goto end; }
		if (remain[i] >= 100) { int t = remain[i] / 100; count += t; remain[i] -= t * 100; }
	}cout << remain[11] + 120 * count;
end:if(judge==1)cout << temp;
	return 0;
}