#include <iostream>

using namespace std;

class Base{
public:
    int member;
    static int smber;
    Base(){
        member = 11;
    }
    void func(){
        cout << "Base类的func方法..." << endl;
    }
    static void method(){
        cout << "Base静态成员函数..." << endl;
    }
    static void method(int num){
        cout << "Base静态有参成员函数..." << endl;
    }
};

int Base::smber = 111;

class Son : public Base{
public:
    int member;
    static int smber;
    Son(){
        member = 22;
    }
    void func(){
        cout << "Son类的func方法..." << endl;
    }
    static void method(){
        cout << "Son静态成员函数..." << endl;
    }
};

int Son::smber = 222;

int main()
{
    Son ss;

    // 同名父类成员访问 使用作用域(::)处理
    cout << ss.member << endl;
    cout << ss.Base::member << endl;

    cout << "--------------------------------" << endl;
    // 同名父类成员函数调用  也使用作用域(::)处理
    ss.func();
    ss.Base::func();

    cout << "--------------------------------" << endl;
    ss.method();
    ss.Base::method();
    ss.Base::method(0);

    // 静态成员属性调用
    cout << ss.smber << endl;
    cout << ss.Base::smber << endl;
    cout << Son::smber << endl;
    cout << Base::smber << endl;

    system("pause");
    return 0;
}
