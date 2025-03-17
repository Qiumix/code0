#include<iostream>
using namespace std;
int main1()
{
	int num = 1, sum1 = 2021;
	for (;; num++)
	{
		int m = num;
		for (; m != 0; m/= 10)
		{
			if (m%10 == 1) { sum1--; }
			if (sum1 == 0) { goto end; }
		}
	}end:cout << num;
	return 0;
}