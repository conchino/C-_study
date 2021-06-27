#include <iostream>
#include <string>

using namespace std;

/* 类模板成员函数类外实现 */
template <class T, class Y>
class Person{
public:
    T name;
    Y age;
    Person(T t, Y y);
    void showPerson();
};

// 类模板构造函数类外实现
template <class T, class Y>
Person<T, Y>::Person(T t,Y y):name(t),age(y){}

// 成员函数的类外实现
template <class T,class Y>
void Person<T, Y>::showPerson(){
    cout << "name: " << this->name << " age: " << this->age << endl;
}

void test(){
    Person<string, int> p("Tom", 3);
    p.showPerson();
}


int main()
{
    test();

    system("pause");
    return 0;
}
