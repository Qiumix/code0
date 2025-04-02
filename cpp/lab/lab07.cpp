#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char arr[] = "East China Normal University is very beautiful. I like East China Normal University very much. There is a big playground in East China Normal University. The teachers in East China Normal University are very kind. The students are very polite and smart.";
    char p[100][20] = {0};
    int count[100] = {0}, line = 0, lenarr = strlen(arr), i = 0, j;
    for (; arr[i] == ' ' || arr[i] == '.'; i++);
    for (j = 0; i < lenarr; i++)
    {
        if (arr[i] == ' ' || arr[i] == '.')
        {
            if (!j)
                continue;
            p[line++][j] = 0;
            j = 0;
            continue;
        }
        p[line][j++] = arr[i];
    }
    for (i = 0; i < line + 1; i++)
        for (int j = 0; j < i; j++)
            if (!strcmp(p[j], p[i]))
            {
                count[j]++;
                count[i] = -1;
                break;
            }
    for (int i = 0; i < line; i++)
        if (++count[i])
            cout << p[i] << "\t:" << count[i] << endl;
}