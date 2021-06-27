#include <iostream>
#include <ctime>

using namespace std;

// 返回局部变量中的地址
// 函数局部变量会在函数结束调用后销毁，因此返回局部变量地址将会报错
int * func_1(){
    int a = 10;
    return &a;
}

// new 的变量存在于堆区中，又程序员定义和销毁，或程序结束后由系统销毁
// 返回函数中new 变量的地址没什么问题
int * fun_c(){
    int *p = new int(10);
    return p;
}


int main()
{
    int *a = func_1();
    int *p = fun_c();

//    cout << *a << endl;     // 无法执行
//    cout << *a << endl;

    cout << "--------------" << endl;
    cout << *p << endl;
    cout << *p << endl;

    /*
        new 操作符创建变量和数组
    */

    int *p1 = new int(10);
    cout << "new 关键字创建的变量指针:  " <<  *p1 << endl;

    int *p2 = new int[10];
    cout << "长度: " << sizeof(p)/sizeof(p[0]) << endl;

    cout << "new --> 数组: " << *p2 << endl;

//    srand((unsigned int)time(0));
//    for(int i = 0;i < sizeof(p)/sizeof(p[0]);i++){
//
//    }

    system("pause");
    return 0;
}
