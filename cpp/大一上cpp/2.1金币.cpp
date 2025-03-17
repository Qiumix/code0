#include <iostream>
using namespace std;
int maintianshu()
{
	int k; cin >> k;
	int sum = 0; int daysum=0;
	for (int i = 1;k>0; i++)
	{
		
		sum += k >= i ? i * i : i * k;
		k -= i;
	}
	cout << sum;
	return 0;
}