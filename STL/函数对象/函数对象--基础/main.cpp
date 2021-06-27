#include <iostream>
#include <string>

using namespace std;

/* 函数对象：重载了函数调用操作符的类 */

class MyClass{
string name;
public:
    MyClass() = default;
    MyClass(string name):name(name){}

    // 重载函数调用运算符()
    void operator()(string str){
        cout << "调用函数对象: [" << name << "] ,传入内容: " << str << endl;
    }
};


// 函数对象作为参数传递
void doOutPut(MyClass &mc,string str){
    mc(str);
}


void test_funcObj(){
    // 匿名函数对象调用法
    MyClass("nanami")("Hello , nanami !");

    // 函数对象作为参数传递
    MyClass mc("mabushi");
    doOutPut(mc, "Hello mabushi");

}



int main()
{
    test_funcObj();

    system("pause");
    return 0;
}
