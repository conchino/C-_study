#include <iostream>

using namespace std;

/* 模板函数，
   交换两个变量的值
   使用一个通用的类型，可以传入任何类型的变量，包括类
 */

template <typename T>      // 声明一个模板
void swapVar(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}


class ABC{
public:
    ABC(int i):data(i){}
    int data;
};


template <typename T>
void func(){
    cout << "函数模板方法..." << endl;
}


int main()
{
    int a = 11;
    int b = 22;

    /* 使用函数模板的方式 */
    // 1.自动类型推导
    swapVar(a, b);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    ABC abc1(33);
    ABC abc2(44);

    // 2. 显式指定类型
    swapVar<ABC>(abc1, abc2);
    cout << "ABC1: " << abc1.data << endl;
    cout << "ABC2: " << abc2.data << endl;

    // 模板必须确定 T的数据类型才能使用
    func<int>();


    system("pause");
    return 0;
}
