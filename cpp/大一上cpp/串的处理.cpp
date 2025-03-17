#include<string>
#include<iostream>
using namespace std;
int main()
{
	int count = 0; int num = 1;
	while (count < 2023)
	{
		int t = num;
		int t2 = num;
		int t8 = num;
		int t10 = num;
		int t16 = num;
		int sum2 = 0, sum8 = 0, sum10 = 0, sum16 = 0;
		int c2 = 0, c8 = 0, c10 = 0, c16 = 0;
		while (t2 / 2 != 0)
		{
			c2++;
			sum2 += t2 & 2;
			t2 /= 2;
		}
		while (t8 / 8 != 0)
		{
			c8++;
			sum8 += t8 & 8;
			t8 /= 8;
		}
		while (t10 / 10 != 0)
		{
			c10++;
			sum10 += t & 10;
			t10 /= 10;
		}
		while (t16 / 16 != 0)
		{
			c16++;
			sum16 += t & 16;
			t16 /= 16;
		}
		if (sum2 == 0)goto end;
		if (sum8 == 0)goto end;
		if (sum10 == 0)goto end;
		if (sum16 == 0)goto end;
		if ((t % sum2) == 0)
		{
			if ((t % sum8) == 0)
			{
				if ((t % sum10) == 0)
				{
					if ((t % sum16) == 0)
					{
						count++;
					}
					else goto end;
				}
				else goto end;
			}
			else goto end;
		}
		else goto end;
	end:num++;
	}
	cout << --num;
	return 0;
}