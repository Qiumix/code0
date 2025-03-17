#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int count = 0;
    char arr[] = "10238741023874465038740";
    char temp[5] = {0, 0, 0, 0, 0};
    for (int i = 0; i < 4; i++)
        cin >> temp[i];
    int lenArr = strlen(arr);
    int lenTemp = strlen(temp);
    for (int i = 0; i <= lenArr - lenTemp; i++)
        if (arr[i] == temp[0])
        {
            bool isEqual = true;
            for (int j = 1; j < lenTemp; j++)
                if (arr[i + j] != temp[j])
                {
                    isEqual = false;
                    break;
                }
            if (isEqual)
                count++;
        }
    cout << count << endl;
    return 0;
}