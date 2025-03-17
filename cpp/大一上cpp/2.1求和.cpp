#include <iostream>
using namespace std;
bool judge(int a)
{
	int t;
	if (a == 2)t = 1;
	else if (a == 0)t = 1;
	else if (a == 1)t = 1;
	else if (a == 9)t = 1;
	else t = 0;
	return t;
}
int mainhhh()
{
	int sum=0; 
	for (int i = 1; i <= 2019; i++)
	{
		int d=2 ;
		for (int j = 0,n=i;n!=0 ; j++)
		{
			d = judge(n % 10);
			n /= 10;
			if (d == 1)break;
		}
		if (d == 1)sum += i;
	}cout << sum;
	return 0;
}