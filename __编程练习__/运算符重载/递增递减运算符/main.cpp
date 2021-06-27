#include <iostream>

using namespace std;

/* ����++ / -- �����
   ǰ��++ / --
   ����++ / --
 */

class Person{
    int aa;
    int bb;

    // �������������
    friend ostream& operator<<(ostream &os, const Person &person);

public:
    Person();
    Person(int aa,int bb);
    Person& operator++();
    Person operator++(int);

};

Person :: Person(){
    this->aa = 0;
    this->bb = 0;
}

Person :: Person(int aa,int bb){
    this->aa = aa;
    this->bb = bb;
}

// << ��������ض���
ostream& operator<<(ostream &os, const Person &person){
    os << "aa: " << person.aa << " || bb: " << person.bb;
    return os;
}

// ����ǰ��++
Person& Person :: operator++(){
    this->aa++;
    this->bb++;
    return *this;
}

// ���غ���++
Person Person :: operator++(int){
    Person temp = *this;
    this->aa++;
    this->bb++;
    return temp;
}


int main()
{
    Person person(10, 20);
    cout << person << endl;

    person++;
    cout << person << endl;
    system("pause");
    return 0;
}
