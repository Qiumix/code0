#include <iostream>
#include <cstring>
using namespace std;
void change(char arr[], char ori[], char to[], int position)
{
    int lenarr = strlen(arr);
    int lenori = strlen(ori);
    int lento = strlen(to);
    if (lenori > lento - 1)
    {
        for (int i = position; i < position + lento; i++)
            arr[i] = to[i - position];
        for (int i = position + lento; i < lenarr -lenori + lento; i++)
            arr[i] = arr[i + lenori - lento];
    }
    else
    {
        for (int i = lenarr - 1; i >= position + lenori; i--)
            arr[i + lento - lenori] = arr[i];
        for (int i = 0; i < lento; i++)
            arr[i + position] = to[i];
    }
}
int search(char arr[], char ori[], char to[])
{
    int lenarr = strlen(arr);
    int lenori = strlen(ori);
    int lento = strlen(to);
    for (int i = 0; i < lenarr - lenori + 1; i++)
    {
        if (arr[i] == ori[0])
        {
            bool isEqual = true;
            for (int j = 1; j < lenori; j++)
                if (arr[i + j] != ori[j])
                {
                    isEqual = false;
                    break;
                }
            if (isEqual)
            {
                change(arr, ori, to, i);
                lenarr -= lenori - lento;
                i += lento -1;
                arr[lenarr] = 0;
            }
        }
    }
    return lenarr;
}
int main()
{
    char arr[500] = "East China Normal University is very beautiful. I like East China Normal University very much. There is a big playground in East China Normal University. The teachers in East China Normal University are very kind. The students are very polite and smart.";
    char ori[50] = "East China Normal University";
    char to[50] = "Huaqiao University";
    int lenarr = search(arr, ori, to);
    cout << "Ò»" << endl;
    for (int i = 0; i < lenarr; i++)
        cout << arr[i];
    lenarr = search(arr, to, ori);
    cout << endl << "¶þ" << endl;
    for (int i = 0; i < lenarr; i++)
        cout << arr[i];
}