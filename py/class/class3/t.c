#include <stdio.h>

int bis(int word, int mask)
{
	return word | mask;
}

int bic(int word, int mask)
{
	return word & ~mask;
}

int bool_or(int x, int y)
{
	int result = bis(x, y);
	return result;
}

int bool_and(int x, int y)
{
	int result = bic(x, ~y);
	return result;
}
int main()
{
}