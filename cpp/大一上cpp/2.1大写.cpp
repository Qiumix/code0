#include <iostream>
#include<string>
using namespace std;
char change(char c)
{
	if (c >=97 && c <=122)c = c - 32;
	return c;
}
int mainqiuhe()
{
	string a; cin >> a;
	for (int i = 0; i < a.size() ; i++)
	{
		a[i] = change(a[i]);
	}
	for (int i = 0; i < a.size() ; i++)
	{
		cout << a[i];
	}
	return 0;
}