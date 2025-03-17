#include <cmath>
#include <cstdio>
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
int max(int a, int b) {	return a > b ? a : b; }
int like(int v[], int p[], int money, int i, int love) {
	if (money == 0 || (i < 0 && money >= 0))
		return love;
	else if (money < 0)
		return love - v[i + 1];
	else
		return max(like(v, p, money, i - 1, love), 
		like(v, p, money - p[i], i - 1, love + v[i]));
}
int main() {
	int money;
	cin >> money;
	int v[] = {24, 9, 9, 10, 2};
	int p[] = {10, 4, 4, 5, 3};
	cout << like(v, p, money, 4, 0) << endl;
	int _ = 0;
    return (0^_^0);
}