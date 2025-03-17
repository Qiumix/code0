#include<iostream>
using namespace std;
int main3() {
	int l; cin >> l;
	int* a =new int[l + 1];
	for (int i = 0; i <= l; i++)a[i] = 1;
	int m; cin >> m; 
	for (int j = 0; j < m; j++)
	{
		int u, v;
		cin >> u >> v;
		for (; u <= v; u++)a[u] = 0;
	}
	int sum = 0;
	for (int i = 0; i <= l; i++)sum += a[i];
	delete[]a;
	return 0;
}	