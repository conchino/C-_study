#ifndef MYTEMPLATECLASS_H_INCLUDED
#define MYTEMPLATECLASS_H_INCLUDED

/* ��ģ����ļ���дר��.hpp��ʽ���������붨��д��һ�� */

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

#endif // MYTEMPLATECLASS_H_INCLUDED
