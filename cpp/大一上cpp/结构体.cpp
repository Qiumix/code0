#include<iostream>
using namespace std;
#include<string>
void a()
{
	cout << 1;
}
void b();
int main()
{
	a();
	b();
}
void a()
{
	cout<< 2;
}void b()
{
	a();
}