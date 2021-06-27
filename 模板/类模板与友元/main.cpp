#include <iostream>

using namespace std;

/* 通过友元访问类模板中的私有成员 */

// 类模板声明
template <class T, class Y> class Person;

// 1. 访问类模板的友元全局函数(1)声明
template <class T,class Y>
void visitMethod(const Person<T,Y> &p);


// 2. 访问类模板的友元全局函数(2)实现
template <class T,class Y>
void visitMethod_other(const Person<T,Y> &p){
    cout << "name: " << p.name << "  age: " << p.age << endl;
}


// 类模板定义
template <class T, class Y>
class Person{

    // 友元全局函数(1)类内实现
    friend void visitMethod(const Person<T,Y> &p){
        cout << "name: " << p.name << "  age: " << p.age << endl;
    }

    // 友元全局函数(2)类外实现
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
