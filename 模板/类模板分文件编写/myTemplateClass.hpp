#ifndef MYTEMPLATECLASS_HPP_INCLUDED
#define MYTEMPLATECLASS_HPP_INCLUDED

#include <iostream>
#include <string>
using namespace std;

/* ��ģ����ļ���д */
template <class T, class Y>
class Person{
public:
    T name;
    Y age;
    Person(T t, Y y);
    void showPerson();
};


// ��ģ�幹�캯������ʵ��
template <class T, class Y>
Person<T, Y>::Person(T t,Y y):name(t),age(y){}

// ��Ա����������ʵ��
template <class T,class Y>
void Person<T, Y>::showPerson(){
    cout << "name: " << this->name << " age: " << this->age << endl;
}


#endif // MYTEMPLATECLASS_HPP_INCLUDED
