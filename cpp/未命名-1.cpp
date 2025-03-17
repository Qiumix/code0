#include <iostream>
#include <string>
using namespace std;

#define cmax 26 // character max字母数量

int main()
{
    string ori, key, sec; // 明文，密钥，密文
    // 输入明文
    cout << "请输入明文：";
    cin >> ori;
    int lenori = ori.length(); // 明文长度
    // 转大写
    // for (int i = 0; i < lenori; i++)
        // if ((int)ori[i] > 90)
            // ori[i] -= (char)32;
    cout << "明文长度为：" << lenori << endl;
    // 输入关键字并生成密钥
    cout << "请输入关键字:";
    cin >> key;
    int lenkey = key.length(); // 关键字长度
    // 转大写
    // for (int i = 0; i < lenkey; i++)
        // if ((int)key[i] > 90)
            // key[i] -= (char)32;
    for (int i = lenkey; i < lenori; i++)
        key += key[(i - lenkey) % lenkey];
    cout << "密钥为：" << key << endl;
    // 获得偏移值
    cout << "输入偏移值：";
    int num;
    cin >> num;
    cout << "偏移值为：" << num << endl;
    // 输出密码表
    cout << "密码表为：" << endl;
    for (int i = 0; i < cmax; i++)
    {
        for (int j = 0; j < cmax; j++)
            cout << (char)('A' + (i + j + num) % cmax) << ' ';
        cout << endl;
    }
    // 处理明文并输出密文
    for (int i = 0; i < lenori; i++)
        sec += (char)('A' + ((int)ori[i] + (int)key[i] - 65 * 2 + num) % cmax);
    // 映射密码表：加上key[i]与ori[i]以及偏移值
    cout << "密文为：" << sec << endl;
    // 解密
    for (int i = 0; i < lenori; i++)
        // 反向映射密码表：减掉key[i]以及偏移值，加cmax防止出现负数（cpp取模规则与数学不同）
        sec[i] = (char)('A' + (sec[i] - key[i] - num + cmax) % cmax);
    cout << "解密后明文为：" << sec << endl;

    int _ = 0;
    return (0 ^ _ ^ 0);
}
