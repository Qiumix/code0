#include <iostream>
bool judge(int i, int j, int k)
{
    if (i == 10 && (j == 6 || j == 7 || k == 6 || k == 7))
        return true;
    if (i == 11 && (j == 8 || j == 9 || k == 8 || k == 9))
        return true;
    return false;
}
int main()
{
    char out[12][6] = {"1\t", "2\t", "3\t", "4\t", "5\t", "6\t", "7\t", "8\t", "9\t", "10\t", "7&8\t", "9&10\t"};
    for (int i = 0, count = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            for (int k = 0; k < 12; k++)
            {
                if (i == j || j == k || i == k || judge(i, j, k) || judge(j, i, k) || judge(k, j, i))
                    continue;
                std::cout << ++count << '\t' << out[i] << out[j] << out[k] << std::endl;
            }
}
