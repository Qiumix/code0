#include <iostream>
#include<cstring>
static void replace(long long i, char str[], long long lenorigin, char to[], long long& len) {
	long long lento = strlen(to);
	if (lenorigin < lento){
		for (long long j = len; j > i + lenorigin + 1; j--) 
			str[j + lento - lenorigin] = str[j];
		for (long long j = 0; j < lento; j++) 
			str[i + j] = to[j];
		len += lento - lenorigin;
	}
	else {
		for (long long j = i + lenorigin; j < len; j++) str[j - (lenorigin - lento)] = str[j];
		for (long long j = 0; j < lento; j++) str[i + j] = to[j];
		len -= (lenorigin - lento);
	}
	str[len] = '\0';
}
static void search(char str[], char origin[], char to[], long long& len) {
	long long lenorigin = strlen(origin), lento = strlen(to);
	for (long long i = 0; i < len - lenorigin - 1; i++) {
		bool match = true;
		for (long long j = 0; j < lenorigin; j++) {
			if (str[i + j] != origin[j]) {
				match = false;
				break;
			}
		}
		if (match) {
			replace(i, str, lenorigin, to, len);
			i += lento - 1;
		}
	}
}
int main() {
	char str[400] = "East China Normal University is very beautiful. I like East China Normal University very much. There is a big playground in East China Normal University. The teachers in East China Normal University are very kind. The students are very polite and smart.";
	char a[50], b[50];
	std::cout << "输入替换掉的文本" << std::endl;
	std::cin.getline(b, 50);
	std::cout << "输入替换后的文本" << std::endl;
	std::cin.getline(a, 50);
	long long len = strlen(str), len1 = strlen(a), len2 = strlen(b);
	std::cout << "第一次替换：" << std::endl;
	search(str, b, a, len);
	std::cout << str << std::endl << "第二次替换：" << std::endl;
	search(str, a, b, len);
	std::cout << str;
}