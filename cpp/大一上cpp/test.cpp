#include<iostream>
#include<string>
using namespace std;
int maint()
{
    string a = "chi  n  a ";
	for (int i = 0; i < sizeof(a)/4; i++)
	{
		cout << a[i]<<endl;
	}
    return 0;
}