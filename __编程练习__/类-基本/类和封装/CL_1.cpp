#include "CL_1.h"

/*
    源文件中定义头文件声明的类中的内容
*/

// 类名::构造函数(){ 定义 }
MyClass_1::MyClass_1(){
    name = "MyClass 中的name成员变量";
    cout << "Hello MyClass !" << endl;
}

// 返回类型 类名::成员函数(){ 定义 }
void MyClass_1::show(){

    cout << name << endl;
}
