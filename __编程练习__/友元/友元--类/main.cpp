#include <iostream>
#include <string>

using namespace std;

// ������
class A;
class B;

/* ������Ԫ */

class A{

public:
    A();
    void visit();
    void visit_pri();
    B *b;
};

class B{
    // ����A ����Ϊ��B ����Ԫ��
    // A ���Է��� B ��˽�г�Ա
    friend class A;

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
    cout << "��A ���� ��B : " << b->pubVar << endl;
}
void A::visit_pri(){
    cout << "��A ���� ��B : " << b->priVar << endl;
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
