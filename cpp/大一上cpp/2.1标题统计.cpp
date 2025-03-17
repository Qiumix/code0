#include <iostream>
#include <string>
using namespace std;
int mainbb()
{
	string a; cin >> a;
	int b = a.size(); int c = b;
	for (int i = 0; i < c; i++)
	{
		if (a[i] == ('\n' || ' ')) b--;
	}cout << b;
	return 0;
}