#include <iostream>
#include <string>

using namespace std;

class Base{
protected:
    int data = 222;
public:
    // һ���Ա����
//    void BaseShow(){cout << "����Show����..." << endl;}
    // �麯��  virtual
    virtual void BaseShow(){
        cout << "����Show����..." << endl;
    }
};

class Son : public Base{
public:
    void BaseShow() override{
        cout << "������Show����..." << endl;
    }
};

// ����������ַ�ڱ���׶ξͰ���
// ��ִ��������ķ�������Ҫʹ���������н׶ΰ� (�麯��[virtual])
void doShow(Base &base){
    base.BaseShow();
}


void test(){
    Son s;
    doShow(s);
}



class ABC : public Base{
private:
    // ʹ��using ��Base�е�protected�������data����תΪABC��private����
    // ͳһ���󣬸ı�������;  �����private�����޷����ı������
    using Base::data;
public:
    void show(){
        cout << "This is ABC's show function..." << endl;
    }
};

class Person{

public:
    string name;
    // ��̬��Ա����������ڲ���ʼ��
    static string typeName;
};

// ��ľ�̬��Աֻ�������ⲿ�����Լ���ʼ�����ڳ�ʼ��ʱ����Ҫ����static�ؼ���
string Person::typeName = "����";

int main(){
    test();

    ABC abc;
    abc.show();

    // static��̬��Աʹ�� [����::��̬��Ա] ����
    Person::typeName = "����";
    cout << Person::typeName << endl;

    system("pause");
    return 0;
}
