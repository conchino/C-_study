#include "MyArray.hpp"
#include <ctime>
#include <string>

class Person{
    // 重载输出运算符，以友元形式方便访问私有成员
    friend ostream &operator<<(ostream &os, const Person &person){
        os << "age: " << person.age << " || name: " << person.name << endl;
        return os;
    }
public:
    string name;
    int age;
    Person() = default;
    Person(int age, string name = "xxx"):name(name),age(age){}
};


void test_1(){
    srand((unsigned)time(0));

    MyArray<int> marr(10);
    for(int i = 0;i < marr.getCapacity(); i++){
        marr.Push_Back(rand()%30+1);
    }
    marr.show();
}

void test_2(){
    MyArray<Person> arr(3);
    for(int i = 0;i < arr.getCapacity();i++){
        Person p(rand()%20+1, "default");
        arr.Push_Back(p);
    }
    arr.show();
}

int main()
{
    test_1();
    test_2();

    system("pause");
    return 0;
}
