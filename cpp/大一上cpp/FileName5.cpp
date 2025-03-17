#include <iostream>
using namespace std;

int main() {
    int count = 0;

    // 第一次循环
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            for (int m = 0; m < 10; m++) {
                if (i != j && j != m && m != i) {
                    count++;
                    cout << "第" << count << "个" << "甲" << i << "乙" << j << "丙" << m << endl;
                }
            }
        }
    }

    // 第二次循环
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            for (int k = 0; k < 8; k++) {
                if (i != j && j != k && k != i) {
                    if (i == 7 || i == 6 || j == 7 || j == 6 || k == 7 || k == 6) {
                        int new_i = (i == 6) ? 67 : (i == 7) ? 89 : i;
                        int new_j = (j == 6) ? 67 : (j == 7) ? 89 : j;
                        int new_k = (k == 6) ? 67 : (k == 7) ? 89 : k;

                        count++;
                        cout << "第" << count << "个" << "甲" << new_i << "乙" << new_j << "丙" << new_k << endl;
                    }
                }
            }
        }
    }
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            for (int k = 0; k < 9; k++) {
                if (i != j && j != k && k != i) {
                    if (i + j >= 14 || j + k >= 14 || k + i >= 14) {
                        int new_1i = (i == 8) ? 89 : i;
                        int new_1j = (j == 8) ? 89 : j;
                        int new_1k = (k == 8) ? 89 : k;

                        count++;
                        cout << "第" << count << "个" << "甲" << new_1i << "乙" << new_1j << "丙" << new_1k << endl;
                    }
                }
            }
        }
    }
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            for (int k = 0; k < 9; k++) {
                if (i != j && j != k && k != i) {
                    if (i + j >= 14 || j + k >= 14 || k + i >= 14) {
                        // 修改逻辑
                        int new_2i = (i == 8) ? 67 : (i == 6) ? 8 : (i == 7) ? 9 : i;
                        int new_2j = (j == 8) ? 67 : (j == 6) ? 8 : (j == 7) ? 9 : j;
                        int new_2k = (k == 8) ? 67 : (k == 6) ? 8 : (k == 7) ? 9 : k;

                        count++;
                        cout << "第" << count << "个" << "甲" << new_2i << "乙" << new_2j << "丙" << new_2k << endl;
                    }
                }
            }
        }
    }

    system("pause");
    return 0;
}