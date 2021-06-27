#include <iostream>

using namespace std;

/*
    虚析构函数使得在删除指向 子类对象 的 基类指针 时，
    可以调用 子类的析构函数 来实现 释放子类 中堆内存的目的
*/


class Base{
public:
    Base(){
        cout << "Base 构造函数..." << endl;
    }
    void func(){
        cout << "Base -- func ..." << endl;
    }

    // 虚析构函数
    virtual ~Base(){
        cout << "Base 虚析构函数..." << endl;
    }
};

class Son : public Base {
public:
    Son(){
        cout << "Son构造函数" << endl;
    }
    ~Son(){
        cout << "Son析构函数" << endl;
    }
};


class Interface{
public:
    Interface();  // 构造函数不能声明为虚函数
    // 纯虚析构函数
    virtual ~Interface() = 0;
};

Interface::Interface(){
    cout << "Interface构造函数" << endl;
}

// 纯虚析构函数在类外定义
Interface::~Interface(){
    cout << "Interface纯虚析构函数..." << endl;
}

class Implement : public Interface{
public:
    Implement(){
        cout << "实现类构造函数" << endl;
    }
    ~Implement(){
        cout << "实现类析构函数..." << endl;
    }
};


int main()
{
    Base *b = new Son;
    delete b;     // 若没有虚析构函数，则delete 只会调用基类的析构函数，而不会调用子类的析构函数

    cout << "-----------------------------" << endl;
    Interface *itf = new Implement;
    delete itf;

    system("pause");
    return 0;
}
