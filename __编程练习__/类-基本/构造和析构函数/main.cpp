#include <iostream>
#include <string>

using namespace std;


class Person{
    string name;

public:
    Person(string p1){
        this->name = p1;
        cout << "对象调用 [构造函数]..." << endl;
    }

    ~Person(){
        cout << "对象销毁调用 [析构函数]..." << endl;
    }

    // 拷贝构造函数
    Person(const Person &p){
        this->name = p.name;
    }

    string getName(){
        return name;
    }

};


void test_01(){
    Person p("张某");
    Person p1 = Person("王某");
}

void test_02(Person p){
    Person p1(p);
    cout << p1.getName() << endl;
}


int main()
{
    test_01();

    Person p("王五");
    test_02(p);


    system("pause");
    return 0;
}
