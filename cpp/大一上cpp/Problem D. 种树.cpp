#include <iostream>
using namespace std;
int main()
{
	int m, d;
	cin >> m >> d;
	if (m > 12) { cout << "no"; goto end; }
	if ((m == 1 || 3 || 5 || 7 || 8 || 10 || 12) && d <= 31)cout << "yes";
	else if ((m == 4 || 6 || 9 || 11) && d <= 30)cout << "yes";
	else if ((m == 2) && d <= 28)cout << "yes";
	else cout << "no";
end:;
	return 0;
}