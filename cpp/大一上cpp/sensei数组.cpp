#include<iostream>
#include<string>
using namespace std;
int mainss()
{
    struct stu
    {
        string name;
        int score;
    };
    struct tea
    {
        string name;
        stu s[5];
    };
    tea t[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "输入第" << i + 1 << "个老师的名字" << endl;
        cin >> t[i].name;
        for (int j = 0; j < 5; j++)
        {
            cout << "输入老师" << t[i].name << "的第" << j + 1 << "个学生的姓名、分数，用空格隔开" << endl;
            cin >> t[i].s[j].name >> t[i].s[j].score;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << t[i].name << "老师的第" << j + 1 << "个学生的姓名分数为" << t[i].s[j].name << "  " << t[i].s[i].score << endl;
        }
    }

    return 0;
}