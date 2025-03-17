#include<iostream>
using namespace std;
int max(int a, int b) { return a > b ? a : b; }
int like(int pr[], int va[])
{

}
int main()
{
	int pr[100];
	int va[100];
	int t, n = 0;
	while (cin >> t)
	{
		pr[n] = t;
		cin >> va[n];
		n++;
	}
	cout << like(pr, va) << endl;
}