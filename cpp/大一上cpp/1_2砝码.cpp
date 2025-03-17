#include <iostream>
using namespace std;
int main2()
{
    int N;
    cin >> N;
    int max = 0, i = 0;
    for (int t = 1; max < N; i++)
    {
        max += t; t *= 3;
    }cout << i;
    return 0;
}