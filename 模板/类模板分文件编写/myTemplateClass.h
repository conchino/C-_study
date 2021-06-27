#ifndef MYTEMPLATECLASS_H_INCLUDED
#define MYTEMPLATECLASS_H_INCLUDED

/* 类模板分文件编写专用.hpp格式，将声明与定义写在一起 */

#include <iostream>
#include <string>
using namespace std;

/* 类模板分文件编写 */
template <class T, class Y>
class Person{
public:
    T name;
    Y age;
    Person(T t, Y y);
    void showPerson();
};

#endif // MYTEMPLATECLASS_H_INCLUDED
