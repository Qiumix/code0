#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define itn int
#define tin int
#define nit int
#define tni int
#define nti int
#define ll long long
int main() {
	ll t1 = 2147483647l, t2 = -2147483648l;
	bool statue = 1;
	int x[2], y[2];
	cin >> x[0] >> x[1] >> y[0] >> y[1];
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
		{
			ll t = (ll)x[i] * y[j];
			if (t > t1 || t < t2)
				statue = false;
		}
	if (statue)
		cout << "int";
	else
		cout << "long long int";
}