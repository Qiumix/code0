#include <iostream>
using namespace std;
int mainteshuriqi()
{
	int x1, x2, x3, x4; int count = 0;
	for (int y = 1900; y <= 9999; y++)
	{
		x4 = y % 10;
		x1 = y / 1000;
		x3 = (y / 10) % 10;
		x2 = (y - x1 * 1000) / 100;//获取年份数字
		for (int  mon = 1; mon <=12; mon++)
		{
			int dm; int y1, y2;
			if (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12)dm = 31;
			else if (mon == 4 || mon == 6 || mon == 9 || mon == 11)dm = 30;
			else if (mon == 2 && ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0))dm = 29;
			else dm = 28;//判断总天数
			y1 = mon / 10; y2 = mon % 10;
			for (int j = 1; j <= dm; j++)
			{
				int z1 = j / 10; int z2 = j % 10;
				if ((x1 + x2 + x3 + x4) == (y1 + y2 + z1 + z2))count++;
			}
		}
	}
	cout << count;
	return 0;
}