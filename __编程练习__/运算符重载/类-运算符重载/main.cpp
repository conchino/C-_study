#include <iostream>
#include <string>

using namespace std;

/*  ���������

    // ��Ա�������������
    [��������] operator[�����]([��������]& ������);

    // �ǳ�Ա�������������
    [��������]  operator[�����] ([��������]& [������], [��������]& [������]);

*/


class Person{
    int aa;
    int bb;
public:
    Person();
    Person(int aa,int bb);
    Person(int aa);

    int getA() const{
        return aa;
    }

    int getB() const{
        return bb;
    }

    void setA(int aa){
        this->aa = aa;
    }

    void setB(int bb){
        this->bb = bb;
    }

    void show();
    string toString();

    // ��Ա����������������� �Ӻ�(+)
    Person operator+(const Person& psn);
};

Person :: Person(int aa,int bb){
    this->aa = aa;
    this->bb = bb;
}

Person :: Person(int aa){
    this->aa = aa;
    this->bb = 0;
}

Person :: Person(){}

void Person :: show(){
    cout << "aa: " << this->aa << " | bb: " << this->bb << endl;
}

string Person :: toString(){
    return "aa: "+to_string(this->aa)+" | bb: "+to_string(this->bb);
}

// ��������غ�������  �Ӻ�(+)
Person Person :: operator+(const Person& psn){
    Person person;
    person.aa = this->aa + psn.aa;
    person.bb = this->bb + psn.bb;
    return person;
}

// �ǳ�Ա�������������  ����(-)
Person operator-(const Person& p1, const Person& p2){
    Person p3;
    p3.setA(p1.getA()-p2.getA());
    p3.setB(p1.getB()-p2.getB());
    return p3;
}

// ��������أ����Է�����������
Person operator+(const Person &person, int val){
    Person psn;
    psn.setA(person.getA()+val);
    psn.setB(person.getB()+val);
    return psn;
}

int main()
{
    Person p1(1, 2);
    cout << "p1: ";
    p1.show();

    Person p2(4, 5);
    cout << "p2: ";
    p2.show();

    cout << "\np3 = p1 + p2 ... " << endl;

//    Person p3 = p1 + p2;
    cout << "p3: " << (p1+p2).toString() << endl;
//    p3.show();

    cout << "\np4 = p2 + p1 ... " << endl;
    cout << "p4: " << (p2-p1).toString() << endl;

    cout << "p2 + 2 : " << (p2+2).toString() << endl;

    return 0;
}
