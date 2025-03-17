#include <stdio.h>
#include <time.h>

void h(int n, int* step, char o, char m, char t)
{
	if (n == 1)
		printf("step:%d\t%c-->%c\n", ++(*step), o, t);
	else
	{
		h(n - 1, step, o, t, m);
		printf("step:%d\t%c-->%c\n", ++(*step), o, t);
		h(n - 1, step, m, o, t);
	}
}

int main()
{
	clock_t start = clock();

	char a = 'A', b = 'B', c = 'C';
	int n, step = 0;
	scanf("%d", &n);
	h(n, &step, a, b, c);

	clock_t end = clock();
	double seconds = (double)(end - start) / CLOCKS_PER_SEC;
	printf("程序运行时间: %f 秒\n", seconds);
	return 0;
}
