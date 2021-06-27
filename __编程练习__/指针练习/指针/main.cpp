#include <iostream>

using namespace std;

/* 指针

   数据类型 *变量名;

 */

int main()
{
    // 创建指针
    int *p;
    int a = 100;

    // 使指针指向变量的地址
    p = &a;
    cout << "*p : " << p << endl;
    cout << "*p的值 : " << *p << endl;    // 指针前加*号代表使用指向内存中的地址
    cout << "a = " << a  << endl;
    cout << "---------------------------\n" << endl;
    *p = 1000;
    cout << "将*p赋为1000\np = " << p << endl;
    cout << "*p = " << *p << endl;
    cout << "a = " << a << endl;

    system("pause");
    return 0;
}
