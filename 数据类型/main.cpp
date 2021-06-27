#include <iostream>
#include <stdlib.h>
#include <string>

// 宏常量定义
#define NUM_1 11

// 函数声明
int ppa(int a, int b);

int main()
{
    using namespace std;

    // const 常量定义
    const string NUM_2 = "22";
    cout << "使用define定义的常量NUM_1 : "<< NUM_1 <<  endl;
    cout << "使用const定义的常量NUM_2 : "<< NUM_2 <<  endl;
    cout << endl;

    // 布尔类型
    bool flag = true;
    // 整型
    int n1 = 1;
    // long长整型
    long l1 = 10L;
    cout << "长整型Long : " << l1 << endl;
    // float 浮点数
    float f1  = 3.14f;
    cout << "浮点数float : " << f1 << endl;
    // 格式化输出
    double dd1 = 123456.01020304050612345;
    printf("格式化输出:  %.10f \n", dd1);

    if(flag){
        // 布尔类型输出时只会输出 1或 0 来代表true 或 false
		cout << "布尔类型flag: " << flag << endl;
    }

    // 字符char
    char ch = 'C';
    cout << "字符型数据 char : " << ch << endl;
    cout << "字符对应ASCII码 : " << (int)ch << endl;

    // 字符串型
    char str_1[] = "This is a char[]...";
    cout << "char[] 字符串:  " << str_1 << endl;
    string str_2 = "This is a string...";
    cout << "string 字符串..." << str_2 << endl;

//    cout << typeid(str_1).name() << endl;

    cout << endl;
    switch(ppa(1,0)){
        case 1 :
            cout << "num is 1..." << endl;
            break;
        case 2:
            cout << "num is 2..." << endl;
            break;
        case 3:
            cout << "num is 3..." <<endl;
            break;
        default:
            cout << "Output Default words..." << endl;
    }



    cout << "---------------------------------------------------" << endl;

    // 程序结束时并不会立刻结束关闭窗口，而是会暂停窗口，
	// 防止运行程序时窗口一闪而过
	system("pause");

	// 或者也可以使用简单的 cin.get();
	// 这样的话屏幕上将不会显示任何暂停提示字样
	cin.get();
    return 0;
}

// 函数定义
int ppa(int a, int b){
    return a+b;
}
