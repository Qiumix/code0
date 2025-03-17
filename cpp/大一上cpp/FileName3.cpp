#include<iostream>
using namespace std;
int judge(int a, int b, int c)
{
	if (a == b && b == c)return 0;
	if (a == b && a != c)
	{
		if ((a == 1 || a == 2) && (c == 1 || c == 2))return 6;
		else if ((a == 1 || a == 2) && (c != 1 || c != 2))return 2;
	}
	if (a == c && a != b)
	{
		if ((a == 1 || a == 2) && (b == 1 || b == 2))return 6;
		else if ((a == 1 || a == 2) && (b != 1 || b != 2))return 2;
	}
	if (c == b && a != c)
	{
		if ((c == 1 || c == 2) && (a == 1 || a == 2))return 6;
		else if ((c == 1 || c == 2) && (a != 1 || a != 2))return 2;
	}
}
int main3()
{
	int count = 0;
	for (int i = 1; i <= 8; i++)
	{
		for (int j = 1; j <= 8; j++)
		{
			for (int k = 1; k <= 8; k++)
			{
				
			}
		}
	}
	return 0;

}