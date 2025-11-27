#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <limits>
#include <tuple>
#include <map>
#include <sstream>
#include <cstring>
#include <Windows.h>
#include "fast_fret_reference.h"

using namespace std;

int main() {
    
    SetConsoleOutputCP(65001);

    while (1) {
        system("cls"); // 清屏
        cout << "感谢您使用换弦计算器" << endl;
        cout << "本项目完全开源，使用者可在源码中自定义琴弦规格，亦可添加对七弦吉他、贝斯、尤克里里的支持" << endl;
        cout << "按 T 显示教程，按 C 计算，按 Q 退出..." << endl;
        
        // 使用字符串读取来避免换行符问题
        string input;
        getline(cin, input);
        
        if (input.empty()) {
            continue; // 如果输入为空，重新循环
        }
        
        char operation = input[0]; // 只取第一个字符
        
        if (operation == 'T' || operation == 't') {
            system("cls"); // 清屏
            tutorial();
            continue;
        }
        else if (operation == 'Q' || operation == 'q') {
            break;
        }
        else if (operation == 'C' || operation == 'c') {
            system("cls"); // 清屏
            calculate();
            continue; 
        }  
        else {        
            cout << "无效输入，请重新选择。" << endl;
            // 暂停一下让用户看到提示
            cout << "按回车键继续..." << endl;
            getline(cin, input); // 等待用户按回车
            continue;
        }
    }
    
    return 0;
}