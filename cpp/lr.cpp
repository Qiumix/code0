#include<iostream>
#include<bitset>
#include<cmath>
using namespace std;
int main()
{
  int a = 0;
  a = -1;
  a >>= 1;
  a -= pow(2, 31);
  cout << a << endl;
  a <<= 1;
  cout << a << endl;
}