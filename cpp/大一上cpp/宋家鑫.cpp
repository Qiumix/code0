#include<iostream>
using namespace std;
int main()
{
	int dp[30][30];
	int ori[30][30];
	for (int i = 0; i < 30; i++)
		for (int j = 0; j < i + 1; j++)
			cin >> ori[i][j];

}