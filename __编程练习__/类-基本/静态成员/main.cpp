#include <iostream>
#include <string>

using namespace std;

class Person{
    string name;
    static int intNum;

public:
    // ��̬��Ա����
    static int number;
    int number_1;   // �Ǿ�̬��Ա����

    // ��̬��Ա����
    static void myMethod(){
        number = 100;
//        number_1 = 111;    // ��̬��Ա�������ܵ��÷Ǿ�̬��Ա����
    }

    static int getNum(){
        return intNum;
    }

};

// ���ж���, �����ʼ��
int Person::number = 11;
int Person::intNum = 123;


int main()
{

    // ������ľ�̬��Ա�����;�̬����  ��::��̬����    ||  ��::��̬����()
    cout << "Person ��ľ�̬���� number : " << Person::number << endl;

    Person::myMethod();   // ʹ����������ֱ�ӵ��þ�̬����
    cout << Person::number << endl;

    cout << "���о�̬���� : " << Person::getNum() << endl;

    system("pause");
    return 0;
}
