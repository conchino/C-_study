#include <iostream>
#include <string>

using namespace std;

/* �������������˺������ò��������� */

class MyClass{
string name;
public:
    MyClass() = default;
    MyClass(string name):name(name){}

    // ���غ������������()
    void operator()(string str){
        cout << "���ú�������: [" << name << "] ,��������: " << str << endl;
    }
};


// ����������Ϊ��������
void doOutPut(MyClass &mc,string str){
    mc(str);
}


void test_funcObj(){
    // ��������������÷�
    MyClass("nanami")("Hello , nanami !");

    // ����������Ϊ��������
    MyClass mc("mabushi");
    doOutPut(mc, "Hello mabushi");

}



int main()
{
    test_funcObj();

    system("pause");
    return 0;
}
