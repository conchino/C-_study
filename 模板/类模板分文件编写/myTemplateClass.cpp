#include "myTemplateClass.h"

// ��ģ�幹�캯������ʵ��
template <class T, class Y>
Person<T, Y>::Person(T t,Y y):name(t),age(y){}

// ��Ա����������ʵ��
template <class T,class Y>
void Person<T, Y>::showPerson(){
    cout << "name: " << this->name << " age: " << this->age << endl;
}
