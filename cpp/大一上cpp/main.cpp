#include<iostream>
#include<string>
using namespace std;
char ctrl[4] = { 'w','a','s','d' };
bool mov(char direction, int num[])
{
	int jjj = 0;
	if (direction == 'w') 
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (num[i * 4 + j] == num[i * 4 + j + 1])
				{
					num[i * 4 + j] << 1;
					num[i * 4 + j + 1] = 0;
					j++;
				}
			}
			for (int j = 0; j < 3; j++)
			{
				int sum = 3;
				if(num[i*4+j]==0)
					for (int k = i; k < sum--; k++)
						num[i * 4 + k] = num[i * 4 + 1];
			}
			jjj += !(num[i * 4 + 4] == 0);
		}
	else if (direction == 's')
	{

	}
	else if (direction == 'a')
	{

	}
	else if (direction == 'd')
	{

	}
	return (jjj == 4) ? 0 : 1;
}
void output(int num[])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << '\t' << num[4 * i + j];
		}
		cout << '\v';
	}
}
int main()
{
	int step = 0;
	int num[16] = { 0 };
	char control;
	int tag = rand() % 16;
	num[tag] = 2;
	int count = 0;
	while (1)
	{
		do
		{
			cout << "ÊäÈëÖ¸Áî" << endl;
			cin >> control;
		}
		while (control != 'w' && control != 'a' && control != 's' && control != 'd');
		system("cls");
		if((mov(control, num)))break;
		output(num);
		step++;
	code:
		if (!num[(tag = rand() % 16)])
		{
			num[tag] = 2;
			count++;
		}
		else goto code;
	}
	int score = 0;
	
	int max;
	for (int i = 1, max = num[0]; i < 16; i++)
		if (num[i] > max)max = num[i];
	cout << "\t" << "GAME OVER!" << endl << "\t" << "STEP:" << step << endl << "\t" << "MAX : " << max << endl;
}