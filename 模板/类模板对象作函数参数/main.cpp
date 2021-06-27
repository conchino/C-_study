#include <iostream>
#include <string>

using namespace std;

/* 类模板对象做函数参数 */
// 类模板
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

// 1.指定参数类型
void printPerson_1(Person<string, int> &p){
    p.showPerson();
}


// 2.函数模板化  (把调用函数写为模板，使用虚拟类型代替)
template <typename T1, typename T2>
void printPerson_2(Person<T1, T2> &p){
    p.showPerson();
    cout << "T1类型: " << typeid(T1).name() << endl;
    cout << "T2的类型: " << typeid(T2).name() << endl;
}

// 3.整个类模板化
template <class T>
void printPerson_3(T &p){
    p.showPerson();
}


void test_1(){
    Person<string,int> p = {"张三", 18};
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
