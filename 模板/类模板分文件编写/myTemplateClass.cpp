#include "myTemplateClass.h"

// 类模板构造函数类外实现
template <class T, class Y>
Person<T, Y>::Person(T t,Y y):name(t),age(y){}

// 成员函数的类外实现
template <class T,class Y>
void Person<T, Y>::showPerson(){
    cout << "name: " << this->name << " age: " << this->age << endl;
}
