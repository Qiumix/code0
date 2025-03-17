#include <iostream>
using namespace std;
int main1151()
{
    int k; cin >> k; int count = 0;
    for (int n = 10000; n <= 30000; n++)
    {
        int n1 = n / 10000;
        int n2 = (n - n1 * 10000) / 1000;
        int n3 = ((n - n1 * 10000) - n2 * 1000) / 100;
        int n4 = (((n - n1 * 10000) - n2 * 1000) - n3 * 100) / 10;
        int n5 = n % 10;
        int sub1 = 100 * n1 + 10 * n2 + n3;
        int sub2 = 100 * n2 + 10 * n3 + n4;
        int sub3 = 100 * n3 + 10 * n4 + n5;
        if (sub1 % k == 0 && sub2 % k == 0 && sub3 % k == 0) { cout << n << endl; count=1; }
    }if (count == 0)cout << "No";   
    return 0;
}
