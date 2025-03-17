#include<iostream>
using namespace std;
int mainff()
{
	const int wage = 20000; const int start = 5000; 
	int mon = 1; 
	int sum = 0;
	int tax;
	for (; mon <= 12; mon++)
	{
		sum = sum + wage - start;
		if (sum <= 36000)tax = (wage - start) * 3 / 100;
		else if (sum > 36000 && sum <= 144000)
		{
			if (sum - 36000 > wage) { tax = wage / 10; }
			else { tax = (sum - 36000) / 10 + (36000 - sum + wage - start) * 3 / 100; }
		}
		else if (sum > 144000 && sum <= 300000)
		{
			if (sum - 144000 > wage) { tax = wage / 5; }
			else { tax = (sum - 144000) / 5 + (144000 - sum + wage - start) / 10; }
		}
		else if (sum > 300000 && sum <= 420000)
		{
			if (sum - 300000 > wage) { tax = wage / 4; }
			else { tax = (sum - 300000) / 4 + (300000 - sum + wage - start) / 5; }
		}
		cout << "第" << mon << "个月的税额为" << tax <<endl;
		return 0;
	}
}