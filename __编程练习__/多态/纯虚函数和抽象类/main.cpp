#include <iostream>

using namespace std;

// 抽象类
class Interface{
public:
    // 纯虚函数
    virtual void func(int num) = 0;

    virtual ~Interface() = default;    // 虚析构函数, 使得指向子类的父类指针对象被释放时能调用子类的析构函数(动态绑定)
};

class MyClass : public Interface{
public:
    // 派生类对纯虚函数的实现
    void func(int num){
        cout << "子类对抽象类的纯虚函数(接口)的实现..." << endl;
    }
    MyClass(){
        cout << "Hello MyClass..." << endl;
    }
};


int main()
{
    MyClass mcs;
    mcs.func(0);

    Interface *itfs = new MyClass;
    itfs->func(1);
    delete itfs;

    system("pause");
    return 0;
}
