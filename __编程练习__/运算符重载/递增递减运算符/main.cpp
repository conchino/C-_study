#include <iostream>

using namespace std;

/* 重载++ / -- 运算符
   前置++ / --
   后置++ / --
 */

class Person{
    int aa;
    int bb;

    // 输出操作符重载
    friend ostream& operator<<(ostream &os, const Person &person);

public:
    Person();
    Person(int aa,int bb);
    Person& operator++();
    Person operator++(int);

};

Person :: Person(){
    this->aa = 0;
    this->bb = 0;
}

Person :: Person(int aa,int bb){
    this->aa = aa;
    this->bb = bb;
}

// << 运算符重载定义
ostream& operator<<(ostream &os, const Person &person){
    os << "aa: " << person.aa << " || bb: " << person.bb;
    return os;
}

// 重载前置++
Person& Person :: operator++(){
    this->aa++;
    this->bb++;
    return *this;
}

// 重载后置++
Person Person :: operator++(int){
    Person temp = *this;
    this->aa++;
    this->bb++;
    return temp;
}


int main()
{
    Person person(10, 20);
    cout << person << endl;

    person++;
    cout << person << endl;
    system("pause");
    return 0;
}
