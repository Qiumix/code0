#include <iostream>
using namespace std;
int main()
{
    bool all[10000][10000] = {0};
    int n, x1, x2, y1, y2;
    cin >> n;
    while (n--)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        for (int i = x1; i < x2; i++)
            for (int j = y1; j < y2; j++)
                all[i][j] = 1;
    }
    int count = 0;
    for (int i = 0; i < 10000; i++)
        for (int j = 0; j < 10000; j++)
            if (all[i][j])
                count++;
    cout << count;
    return 0;
}