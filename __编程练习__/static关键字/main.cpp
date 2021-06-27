#include <iostream>
#include <windows.h>

using namespace std;

// 静态全局变量: 修饰全局变量，表示该变量只在本文件可见 (函数亦同)
static int numVal = 123;

// static 静态局部变量
/* static 修饰的局部变量不随函数的结束而结束 */
void func(){
    static int num = 1;
    cout << "num = " << num << endl;
    num++;
}

int main()
{
    int count = 0;
    while(count < 10){
        func();
        Sleep(1500);
    }

    system("pause");
    return 0;
}
