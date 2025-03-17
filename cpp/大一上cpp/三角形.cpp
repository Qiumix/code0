#include <vector>
#include <iostream>
using namespace std;

int max(int a[][100], int num, int line, int row) {
    if (line == num - 1) {
        return a[line][row];
    }
    else {
        int left = max(a, num, line + 1, row);
        int right = max(a, num, line + 1, row + 1);
        return a[line][row] + (left > right ? left : right);
    }
}

int main() 
{
    int num;
    cin >> num;
    int a[100][100], b[100][100];
    for (int i = 0; i < num; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> a[i][j];
        }
    }
    cout << max(a, num, 0, 0) << endl;
    return 0;
}