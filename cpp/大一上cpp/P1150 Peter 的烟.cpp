#include<iostream>
using namespace std;
int main1150()
{
	int n,k,d=0,count=0; cin >> n>>k;//n烟数量、d烟蒂数量、count已吸烟数量
	while(n>0)
	{
		count += n;//吸烟
		d += n ;//新增烟蒂
		n = 0;
		n += (d / k);//换烟
		d %= k;
	}
	cout << count;
	return 0;
}