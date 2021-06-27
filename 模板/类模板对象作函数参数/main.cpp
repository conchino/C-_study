#include <iostream>
#include <string>

using namespace std;

/* ��ģ��������������� */
// ��ģ��
template <class T,class Y>
class Person{
public:
    T name;
    Y age;
    Person(T t,Y y):name(t),age(y){}
    void showPerson(){
        cout << this->name << " " << this->age << endl;
    }
};

// 1.ָ����������
void printPerson_1(Person<string, int> &p){
    p.showPerson();
}


// 2.����ģ�廯  (�ѵ��ú���дΪģ�壬ʹ���������ʹ���)
template <typename T1, typename T2>
void printPerson_2(Person<T1, T2> &p){
    p.showPerson();
    cout << "T1����: " << typeid(T1).name() << endl;
    cout << "T2������: " << typeid(T2).name() << endl;
}

// 3.������ģ�廯
template <class T>
void printPerson_3(T &p){
    p.showPerson();
}


void test_1(){
    Person<string,int> p = {"����", 18};
    printPerson_1(p);
    printPerson_2(p);
    printPerson_3(p);
}

int main()
{
    test_1();

    system("pause");
    return 0;
}
