#include <iostream>
#include <string>

using namespace std;

class Base{
protected:
    int data = 222;
public:
    // 一般成员函数
//    void BaseShow(){cout << "基类Show方法..." << endl;}
    // 虚函数  virtual
    virtual void BaseShow(){
        cout << "基类Show方法..." << endl;
    }
};

class Son : public Base{
public:
    void BaseShow() override{
        cout << "派生类Show方法..." << endl;
    }
};

// 函数参数地址在编译阶段就绑定了
// 想执行派生类的方法，需要使函数在运行阶段绑定 (虚函数[virtual])
void doShow(Base &base){
    base.BaseShow();
}


void test(){
    Son s;
    doShow(s);
}



class ABC : public Base{
private:
    // 使用using 将Base中的protected作用域的data对象转为ABC的private对象
    // 统一对象，改变作用域;  基类的private对象无法被改变访问性
    using Base::data;
public:
    void show(){
        cout << "This is ABC's show function..." << endl;
    }
};

class Person{

public:
    string name;
    // 静态成员不能在类的内部初始化
    static string typeName;
};

// 类的静态成员只能在类外部定义以及初始化；在初始化时不需要加上static关键字
string Person::typeName = "人类";

int main(){
    test();

    ABC abc;
    abc.show();

    // static静态成员使用 [类名::静态成员] 调用
    Person::typeName = "人人";
    cout << Person::typeName << endl;

    system("pause");
    return 0;
}
