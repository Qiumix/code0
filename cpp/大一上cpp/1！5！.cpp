#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main15()
{
    int n; cin >> n;
    int a, b;
    cin >> a >> b;
    int na=0, nb=0, min, max;
    for (int i = 0; i < n; i++)
    {
        na += a % 10; a /= 10;
        nb += b % 10; b /= 10;
    }if (na > nb)min = na;
    else min = nb;
    max = na * nb;
    cout << min <<endl<< max;
    return 0;
}