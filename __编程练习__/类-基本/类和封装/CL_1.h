#ifndef CL_1_H_INCLUDED
#define CL_1_H_INCLUDED

#include <string>
#include <iostream>

using namespace std;


/*
    在头文件中定义类,
    类中成员变量及函数的具体定义在源文件中写明
*/

class MyClass_1{
    string name;
public:
    MyClass_1();
    void show();
};

#endif // CL_1_H_INCLUDED
