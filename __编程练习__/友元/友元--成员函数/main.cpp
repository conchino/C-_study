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

    // ���������еĳ�Ա�����ڸ���������Ԫ�ؼ���������ʹ������ĸú������Է��ʸ����˽�г�Ա
    friend void A::visit();

private:
    string priVar;

public:
    string pubVar;
    B();

};

B::B(){
    priVar = "˽�г�Ա";
    pubVar = "���г�Ա";
}

A::A(){
    b = new B();
}

void A::visit(){
    cout << "A ���� B��: " << b->priVar << endl;
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
