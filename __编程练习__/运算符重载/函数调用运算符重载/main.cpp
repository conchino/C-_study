#include <iostream>
#include <string>

using namespace std;

class PrintClass{
    string name;
public:
    PrintClass(){
        this->name = "默认用例";
    }
    PrintClass(string name){
        this->name = name;
    }
    // 函数调用运算符重载
    string operator()(string test){
        return "调用了["+name+"]的函数调用运算符重载..."+"\t内容: "+test;
    }
};


int main()
{
    PrintClass ptc("测试用例");

    // 使用对象调用，仿函数
    cout << ptc("你好啊!") << endl;

    // 匿名函数调用
    cout << PrintClass("nanami")("匿名函数调用对象") << endl;

    system("pause");
    return 0;
}
