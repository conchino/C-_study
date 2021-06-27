#include <iostream>
#include <string>

using namespace std;


void myMethod(int a){
    cout << "普通函数调用..." << endl;
}

template <typename T>
void myMethod(T a){
    cout << "函数模板调用..." << endl;
}



int main()
{
    // 确定类型，优先调用普通函数
    myMethod(123);

    // 通过<>强制调用函数模板
    myMethod<>(123);

    // 函数模板优先匹配
    myMethod('A');


    string str = "abcdefg1234567";
    cout << str << endl;

    // 迭代器测试
    for(auto it = str.begin(); it != str.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}
