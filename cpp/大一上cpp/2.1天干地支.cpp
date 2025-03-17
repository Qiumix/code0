#include <iostream>
#include <string>
using namespace std;
int maintiangandizhi()
{
	string t[10] = {"jia","yi","bing","ding","wu","ji","geng","xin","ren","gui"};
	string d[12] = {"zi","chou","yin","mao","chen","si","wu","wei","shen","you","xu","hai"};
	int year; cin >> year;
	year %= 60;
	int a = (year+6) % 10;
	int b = (year+8) % 12;
	cout << t[a] << d[b];
	return 0;
}