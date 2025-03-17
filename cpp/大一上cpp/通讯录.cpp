#include<iostream>
#include<string>
using namespace std;
#define max 1000
struct person
{
	string name;
	string sex;
	int age=0;
	string tele;
	string add;
};
struct lib
{
	int msize =-1 ; 
	person allperson[max];
};
static void add(lib* books)
{
	system("cls");
	if (books->msize == max)
	{
		cout << "被塞满了，无法添加喵!";
	}
	else
	{
		books->msize++; 
		string name;
		nameinput:cout << "请输入联系人姓名" << endl;
		cin >> name;
		for (int i = 0; i < books->msize-1; i++)
		{
			if (books->allperson[i].name == name) 
			{
				cout << "该联系人重名了喵，可以在姓名后加数字喵！" << endl;
				goto nameinput;
			}
		}
		books->allperson[books->msize - 1].name = name;
		cout << "请输入联系人性别（“男”或“女”）" << endl;
		sexinput:cin >> books->allperson[books->msize - 1].sex;
		if (books->allperson[books->msize - 1].sex == "男" || books->allperson[books->msize - 1].sex == "女");
		else
		{
			cout << "请输入“男”或“女”，请不要输入奇奇怪怪的东西谢谢喵" << endl
				<<"输入了:"<< books->allperson[books->msize - 1].sex<<endl;
			goto sexinput;
		}
		cout << "请输入联系人年龄" << endl;
		ageinput:cin >> books->allperson[books->msize - 1].age;
		if (books->allperson[books->msize - 1].age < 0)
		{
			cout << "请不要输入离谱数字谢谢喵！" << endl;
			goto ageinput;
		}
		cout << "请输入联系人电话" << endl;
		cin >> books->allperson[books->msize - 1].tele;
		cout << "请输入联系人地址" << endl;
		cin >> books->allperson[books->msize - 1].add;
		cout << "添加成功谢谢喵" << endl;
	}
	system("pause");
	system("cls");
}
static void show(lib*book)
{
	system("cls");
	if (book->msize == 0)
	{
		cout << "通讯录为空" << endl;
	}
	else
	{
		for (int i = 0; i <book->msize ; i++)
		{
			cout << "	联系人" << i + 1 << "："<<endl;
			cout << "姓名: " << book->allperson->name << endl;
			cout << "性别: " << book->allperson->sex << "性"<< endl;
			cout << "年龄: " << book->allperson->age <<"岁"<< endl;
			cout << "电话: " << book->allperson->tele << endl;
			cout << "地址: " << book->allperson->add << endl;
		}
	}
	system("pause");
	system("cls");
}
static void search(lib* book)
{
	system("cls");
	cout << "请输入被搜索人的姓名" << endl;
	string name; cin >> name;
	for (int i = 0; i < book->msize; i++)
	{
		if (name == book->allperson[i].name)
		{
			cout << "	联系人信息：" << endl;
			cout << "姓名: " << book->allperson->name << endl;
			cout << "性别: " << book->allperson->sex << "性" << endl;
			cout << "年龄: " << book->allperson->age << "岁" << endl;
			cout << "电话: " << book->allperson->tele << endl;
			cout << "地址: " << book->allperson->add << endl;
			goto outer;
		}
		else if (i == book->msize - 1)cout << "查无此人喵" << endl;
	}
	outer:
	system("pause");
	system("cls");
}
static void change(lib*book)
{
	system("cls");
	cout << "请输入要修改的联系人的姓名" << endl;
	string name; cin >> name;
	int i = 0;
	for (int i = 0; i < book->msize; i++)
	{
		if (name == book->allperson[i].name)
		{
			goto outer;
		}
		else if (i == book->msize - 1)cout << "查无此人喵" << endl;
	}
	outer:if (name == book->allperson[i].name)
	{
		choose:
		cout << "请选则修改的选项" << endl;
		cout << "1.姓名" << endl;
		cout << "2.性别" << endl;
		cout << "3.年龄" << endl;
		cout << "4.电话" << endl;
		cout << "5.地址" << endl;
		int t; cin >> t;
		switch (t)
		{
		case 1:
			cout << "请输入联系人姓名" << endl;
			cin >> book->allperson[i].name;
			cout << "请输入联系人性别（“男”或“女”）" << endl;
			break;
		case 2:
			cout << "请输入联系人性别（“男”或“女”）" << endl;
		sexinput:cin >> book->allperson[i].sex;
			if (book->allperson[i].sex == "男" || book->allperson[i].sex == "女");
			else
			{
				cout << "请输入“男”或“女”，请不要输入奇奇怪怪的东西谢谢喵" << endl
					<< "输入了:" << book->allperson[i].sex << endl;
				goto sexinput;
			}
			break;
		case 3:
			cout << "请输入联系人年龄" << endl;
		ageinput:cin >> book->allperson[i].age;
			if (book->allperson[i].age < 0)
			{
				cout << "请不要输入离谱数字谢谢喵！" << endl;
				goto ageinput;
			}
			break;
		case 4:
			cout << "请输入联系人电话" << endl;
			cin >> book->allperson[i].tele;
			break;
		case 5:
			cout << "请输入联系人地址" << endl;
			cin >> book->allperson[i].add;
			break;
		default:
			cout << "请输入有效数字！" << endl;
			goto choose;
		}
		cout << "是否继续更改该联系人信息 是--1，否--其他" << endl;
		cin >> t;
		if (t == 1)goto choose;
		else cout << "更改完毕" << endl;
	}
	system("pause");
	system("cls");
}
static void back(lib* book)
{
	system("cls");
	cout << "请输入要删除的联系人的姓名" << endl;
	string name; cin >> name;
	int i = 0;
	for (; i < book->msize; i++)
	{
		if (name == book->allperson[i].name)
		{
			goto outer;
		}
		else if (i == book->msize - 1)cout << "查无此人喵" << endl;
	}
outer:if (name == book->allperson[i].name)
{
	for (int j = i; j < book->msize - 1; j++)
	{
		book->allperson[j].add = book->allperson[j + 1].add;
		book->allperson[j].age = book->allperson[j + 1].age;
		book->allperson[j].name = book->allperson[j + 1].name;
		book->allperson[j].sex = book->allperson[j + 1].sex;
		book->allperson[j].tele = book->allperson[j + 1].tele;
	}book->msize--;
	cout << "删除成功！" << endl;
}
system("pause");
system("cls");
}
static void menu()
{
	cout << "************************" << endl;
	cout << "***** 1.添加联系人 *****" << endl;
	cout << "***** 2.显示联系人 *****" << endl;
	cout << "***** 3.删除联系人 *****" << endl;
	cout << "***** 4.查找联系人 *****" << endl;
	cout << "***** 5.修改联系人 *****" << endl;
	cout << "***** 6.清空通讯录 *****" << endl;
	cout << "***** 0.退出通讯录 *****" << endl;
	cout << "************************" << endl;
}
lib books;
int main()
{
	books.msize = 0;
	int select;
	while (1)
	{
		menu();
		cin >> select;
		switch (select)
		{
		case 1:
			add(&books);
			break;
		case 2:
			show(&books);
			break;
		case 3:
			back(&books);
			break;
		case 4:
			search(&books);
			break;
		case 5:
			change(&books);
			break;
		case 6:
			books.msize = 0;
			break;
		case 0:
			cout << "通讯录已经退出喵" << endl;
			system("pause");
			return 0;
			break;
		}
	}
	system("pause");
	return 0;
}