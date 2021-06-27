#include <iostream>
#include <string>

using namespace std;

class Person{
    string name;
    static int intNum;

public:
    // 静态成员变量
    static int number;
    int number_1;   // 非静态成员变量

    // 静态成员函数
    static void myMethod(){
        number = 100;
//        number_1 = 111;    // 静态成员函数不能调用非静态成员变量
    }

    static int getNum(){
        return intNum;
    }

};

// 类中定义, 类外初始化
int Person::number = 11;
int Person::intNum = 123;


int main()
{

    // 调用类的静态成员变量和静态函数  类::静态变量    ||  类::静态函数()
    cout << "Person 类的静态变量 number : " << Person::number << endl;

    Person::myMethod();   // 使用类作用域直接调用静态方法
    cout << Person::number << endl;

    cout << "类中静态方法 : " << Person::getNum() << endl;

    system("pause");
    return 0;
}
