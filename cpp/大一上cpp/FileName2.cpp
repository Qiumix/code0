#include<iostream>
#include<cmath>
using namespace std;
int main2()
{
    int count = 0;
    for (int i = 0; i < 8; i++)
    {
        int a[8] = { 1,1,1,1,1,1,2,2 };
        a[i]--;
        for (int j = 0; j < 8; j++)
        {
            if (a[j] != 0)a[j]--;
            else continue;
            for (int k = 0; k < 8; k++)
            {
                if (a[k] != 0)a[k]--;
                else continue;
                count += pow(2, ((a[6] == 0) + (a[7] == 0))) * pow(3, ((a[6] == 1) + (a[7] == 1)));
                a[k]++;
            }
            a[j]++;
        }
    }
    cout << count;
    return 0;
}