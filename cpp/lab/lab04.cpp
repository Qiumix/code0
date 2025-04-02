#include <iostream>
#include <vector>
using namespace std;

int remove(vector<int>& a)
{
    for (int i = 0; i < a.size(); i++)
        for (int j = 0; j < i; j++)
            if (a[j] == a[i])
            {
                a.erase(a.begin() + i);
                i--; // 调整索引以检查新的当前位置
                break;
            }
    return a.size();
}

int main()
{
    vector<int> a = {1, 2, 4, 2, 1, 2, 7, 3, 4, 3, 3, 5, 6, 7, 6, 7, 8, 9, 9, 8};
    int len = remove(a);
    for (int i = 0; i < len; i++)
        cout << a[i] << ' ';
    cout << endl;
    return 0;
}