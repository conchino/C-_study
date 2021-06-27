#include <iostream>

using namespace std;

/* ͨ����Ԫ������ģ���е�˽�г�Ա */

// ��ģ������
template <class T, class Y> class Person;

// 1. ������ģ�����Ԫȫ�ֺ���(1)����
template <class T,class Y>
void visitMethod(const Person<T,Y> &p);


// 2. ������ģ�����Ԫȫ�ֺ���(2)ʵ��
template <class T,class Y>
void visitMethod_other(const Person<T,Y> &p){
    cout << "name: " << p.name << "  age: " << p.age << endl;
}


// ��ģ�嶨��
template <class T, class Y>
class Person{

    // ��Ԫȫ�ֺ���(1)����ʵ��
    friend void visitMethod(const Person<T,Y> &p){
        cout << "name: " << p.name << "  age: " << p.age << endl;
    }

    // ��Ԫȫ�ֺ���(2)����ʵ��
    friend void visitMethod_other<>(const Person<T,Y> &p);

private:
    T name;
    Y age;
public:
    Person(T name,Y age):name(name),age(age){}
};


int main()
{
    Person<string,int> p = {"nanami", 18};
    visitMethod(p);
    visitMethod_other(p);

    system("pause");
    return 0;
}
