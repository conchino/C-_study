#include <iostream>
#include <string>

using namespace std;

class A;
class B;

class A{
public:
    A();
    B *b;
    void visit();

};


class B{

    // 将其他类中的成员函数在该类中用友元关键字声明，使其他类的该函数可以访问该类的私有成员
    friend void A::visit();

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
    cout << "A 访问 B的: " << b->priVar << endl;
}

void test(){
    A *aa = new A();
    aa->visit();
    delete aa;
}

int main()
{

    test();

    cout << "Hello world!" << endl;
    return 0;
}
