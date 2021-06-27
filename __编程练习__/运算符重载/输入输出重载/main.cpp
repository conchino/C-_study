#include <iostream>
#include <string>

using namespace std;

/*
    C++ 能够使用流提取运算符 >> 和流插入运算符 << 来输入和输出内置的数据类型
    把运算符重载函数声明为类的友元函数，这样就能不用创建对象而直接调用函数
    istream  (input stream  输入流)
    ostream  (output stream  输出流)
*/


class Person{
    int age;
    string name;

    /* 将重载定义为友元，使之可直接调用 */
    // 重载对该类的输出运算符，对该类调用输出运算符时自动按指定的格式输出
    friend ostream &operator<<(ostream &os, const Person &person);

    // 重载对该类的输出运算符，对该类调用输入运算符时自动按指定格式读取
    friend istream &operator>>(istream &os, Person &person);

public:
    Person();
    Person(int age,string name);
    void show();

};

Person :: Person(){}

Person :: Person(int age,string name){
    this->age = age;
    this->name = name;
}

void Person :: show(){
    cout << "age: " << to_string(this->age) << " name: " << this->name << endl;
}

/* 类内友元函数定义 */
// 类输出运算符重载
ostream &operator<<(ostream &os, const Person &person){
    os << "age: " << person.age << " || name: " << person.name << endl;
    return os;
}
// 类输入运算符重载
istream &operator>>(istream &os, Person &person){
    os >> person.age >> person.name;
    return os;
}



int main()
{
    Person p1;
    cout << "请输入Person的 age和 name: " <<endl;
    cin >> p1;
    cout << p1;

    system("pause");
    return 0;
}
