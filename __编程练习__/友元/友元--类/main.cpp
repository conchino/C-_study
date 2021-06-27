#include <iostream>
#include <string>

using namespace std;

// 类声明
class A;
class B;

/* 类做友元 */

class A{

public:
    A();
    void visit();
    void visit_pri();
    B *b;
};

class B{
    // 将类A 声明为类B 的友元类
    // A 可以访问 B 的私有成员
    friend class A;

private:
    string priVar;

public:
    string pubVar;
    B();
};

B::B(){
    priVar = "私有成员";
    pubVar = "公有成员";
}

A::A(){
    b = new B();
}

void A::visit(){
    cout << "类A 访问 类B : " << b->pubVar << endl;
}
void A::visit_pri(){
    cout << "类A 访问 类B : " << b->priVar << endl;
}

void test(){
    A *aa = new A();
    aa->visit();
    aa->visit_pri();
    delete aa;
}


int main()
{

    test();

    cout << "Hello world!" << endl;
    return 0;
}
