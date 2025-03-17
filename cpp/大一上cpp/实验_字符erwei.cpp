#include<iostream>
#include<cstring>
using namespace std;
static int toStore(char str[], char store[][20])
{
	int i = 0, count = 0;
	for (int j = 0; str[j] != '\0'; j++)
	{
		if (str[j] == ' ' || str[j] == '.')
		{
			store[count][i] = '\0';
			if (i > 0) count++;
			i = 0;
		}
		else
			store[count][i++] = str[j];
	}
	return count;
}
static void toCount(int num[], bool judge[], int count, char store[][20])
{
	for (int i = 0; i < count; i++)
	{
		if (judge[i]) continue;
		for (int j = i + 1; j < count; j++)
		{
			if (strcmp(store[i], store[j]) == 0)
			{
				judge[j] = true;
				num[i]++;
			}
		}
	}
}
int main()
{
	char str[] = "East China Normal University is very beautiful. I like East China Normal University very much. There is a big playground in East China Normal University. The teachers in East China Normal University are very kind. The students are very polite and smart.";
	char store[100][20];
	int num[100] = {0};
	bool judge[100] = {false};
	int count = toStore(str, store);
	toCount(num, judge, count, store);
	for (int i = 0; i < count; i++)
		if (!judge[i])
			cout << store[i] << ':' << ++num[i] << endl;
}
#pragma region This is a test

#pragma endregion
