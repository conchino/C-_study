#include <iostream>
#include <string>

using namespace std;

// ��ģ�嶨��
template <class NameType, class AgeType>
class Person{
public:
    NameType name;
    AgeType age;
    Person(NameType name, AgeType age):name(name),age(age){}
};


int main()
{
    // ʹ����ģ��ʱ��ֻ����ʽ������ģ������� template<Type> obj;
    Person<string, int> p("����", 21);
    cout << p.name << " " << p.age << endl;

    system("pause");
    return 0;
}
