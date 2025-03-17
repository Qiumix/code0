#include<iostream>
#include <ctime>
using namespace std;
void h(int n, int& step, char o, char m, char t)
{
	if (n == 1)
		cout << "step:" << ++step << '\t' << o << "-->" << t << endl;
	else
	{
		h(n - 1, step, o, t, m);
		cout << "step:" << ++step << '\t' << o << "-->" << t << endl;
		h(n - 1, step, m, o, t);
	}
}
int main()
{
	clock_t start = clock();

	char a = 'A', b = 'B', c = 'C';
	int n, step = 0;
	cin >> n;
	h(n, step, a, b, c);

	clock_t end = clock();
	double seconds = static_cast<double>(end - start) / CLOCKS_PER_SEC;
	cout << "程序运行时间: " << seconds << " 秒" << endl;
	return 0;
}