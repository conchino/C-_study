#include <iostream>

using namespace std;

// 引用做函数参数
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;

}

int main()
{
    int a = 11;
    int &b = a;

    cout << "a的地址: " << &a << endl;
    cout << "a的值: " << a << endl;
    cout << "\nb 引用 a : " << endl;
    cout << "b的值: " << b << endl;
    cout << "b的地址: " << &b << endl;

    b = 22;
    cout << "b的值: " << b << " | b引用的地址: " << &b << endl;
    cout << "a的值: " << a << " | a引用的地址: " << &a << endl;

    int x = 22;
    int y = 33;
    swap(x, y);
    cout << "x: " << x << endl;
    cout << "y：" << y << endl;


    // 使用const 修饰引用，引用不可修改
    // 相当于  int temp = 10;
    //         const int & p = temp;
    const int & p = 10;


    system("pause");
    return 0;
}
