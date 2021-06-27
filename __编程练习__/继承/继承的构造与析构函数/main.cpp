#include <iostream>

using namespace std;


class Base{
    int *BNum;
public:
    Base(){
        BNum = new int(0);
        cout << "Base构造函数..." << endl;
    }
    ~Base(){
        delete BNum;
        cout << "Base析构函数..." << endl;
    }
};


class Son :public Base{

public:
    Son(){
        cout << "Son构造函数" << endl;
    }
    ~Son(){
        cout << "Son析构函数" << endl;
    }
};


int main()
{
    // 先调用父类的构造函数，再调用子类的构造函数
    // 销毁时先调用子类的析构函数，再调用父类的析构函数
    Son son;

    system("pause");
    return 0;
}
