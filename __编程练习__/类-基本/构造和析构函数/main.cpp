#include <iostream>
#include <string>

using namespace std;


class Person{
    string name;

public:
    Person(string p1){
        this->name = p1;
        cout << "������� [���캯��]..." << endl;
    }

    ~Person(){
        cout << "�������ٵ��� [��������]..." << endl;
    }

    // �������캯��
    Person(const Person &p){
        this->name = p.name;
    }

    string getName(){
        return name;
    }

};


void test_01(){
    Person p("��ĳ");
    Person p1 = Person("��ĳ");
}

void test_02(Person p){
    Person p1(p);
    cout << p1.getName() << endl;
}


int main()
{
    test_01();

    Person p("����");
    test_02(p);


    system("pause");
    return 0;
}
