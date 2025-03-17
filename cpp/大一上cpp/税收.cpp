#include<iostream>
using namespace std;
int main()
{
	int wage = 12000, start = 5000, tax, sum = 0, i, s[4] = { 36000, 144000, 330000,420000 };
		//wage工资，start起征点，tax本月税收，sum总收入（除去起征点），i用于判断sum属于的区间，s[4]用来代表总收入区间
	double ratio[5] = { 0.03,0.1,0.2,0.25,0.25 };
		//不同区间税率
	for (int  mon = 1; mon <= 12; mon++)
	{
		for (i = 0; sum >= s[i] && i != 3; i++);
		//判断目前总收入属于哪个区间
		if (sum + wage - start < s[i])  tax = (wage - start) * ratio[i];
		//判断本月工资是否属于两个不同区间
		else tax = (sum + wage - start - s[i]) * ratio[i + 1] + (s[i] - sum) * ratio[i];
		sum += wage - start;
		cout << "第" << mon << "个月的税额为" << tax << endl;
	}
	return 0;
}