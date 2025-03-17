#include<string>
#include<iostream>
namespace cout
{
	std::string cout = "?5!";
}
int main()
{
	int *a = new int(1);
	std::cout << *a << std::endl;
	std::cout << cout::cout << std::endl;
	delete a;
}
