#include <iostream>
#include <string>

using namespace std;

// 类模板定义
template <class NameType, class AgeType>
class Person{
public:
    NameType name;
    AgeType age;
    Person(NameType name, AgeType age):name(name),age(age){}
};


int main()
{
    // 使用类模板时，只能显式调用类模板的属性 template<Type> obj;
    Person<string, int> p("张三", 21);
    cout << p.name << " " << p.age << endl;

    system("pause");
    return 0;
}
