#include <iostream>
using namespace std;
#define len 10
void findCBWithSum(int arr[], int target, bool current[], int index, int sum)
{
    if (sum > target || index == len)
        return;
    if (sum + arr[index] == target)
    {
        current[index] = true;
        for (int i = 0; i < len; i++)
            if (current[i])
                cout << arr[i] << ' ';
        cout << endl;
        current[index] = false;
    }
    current[index] = true;
    findCBWithSum(arr, target, current, index + 1, sum + arr[index]);
    current[index] = false;
    findCBWithSum(arr, target, current, index + 1, sum);
}
int main()
{
    int arr[] = {3, 2, 5, 7, 8, 1, 6, 4, 9, 10}, target = 15;
    bool current[10] = {false};
    findCBWithSum(arr, target, current, 0, 0);
    
}