#include<iostream>
using namespace std;
int main()
{
    int a;
    a = 1;
    int *p = &a;
    cout << p << endl << *p << endl;
}