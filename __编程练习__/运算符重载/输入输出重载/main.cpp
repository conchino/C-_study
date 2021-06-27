#include <iostream>
#include <string>

using namespace std;

/*
    C++ �ܹ�ʹ������ȡ����� >> ������������� << �������������õ���������
    ����������غ�������Ϊ�����Ԫ�������������ܲ��ô��������ֱ�ӵ��ú���
    istream  (input stream  ������)
    ostream  (output stream  �����)
*/


class Person{
    int age;
    string name;

    /* �����ض���Ϊ��Ԫ��ʹ֮��ֱ�ӵ��� */
    // ���ضԸ���������������Ը��������������ʱ�Զ���ָ���ĸ�ʽ���
    friend ostream &operator<<(ostream &os, const Person &person);

    // ���ضԸ���������������Ը���������������ʱ�Զ���ָ����ʽ��ȡ
    friend istream &operator>>(istream &os, Person &person);

public:
    Person();
    Person(int age,string name);
    void show();

};

Person :: Person(){}

Person :: Person(int age,string name){
    this->age = age;
    this->name = name;
}

void Person :: show(){
    cout << "age: " << to_string(this->age) << " name: " << this->name << endl;
}

/* ������Ԫ�������� */
// ��������������
ostream &operator<<(ostream &os, const Person &person){
    os << "age: " << person.age << " || name: " << person.name << endl;
    return os;
}
// ���������������
istream &operator>>(istream &os, Person &person){
    os >> person.age >> person.name;
    return os;
}



int main()
{
    Person p1;
    cout << "������Person�� age�� name: " <<endl;
    cin >> p1;
    cout << p1;

    system("pause");
    return 0;
}
