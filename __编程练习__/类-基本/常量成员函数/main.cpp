#include <iostream>

using namespace std;

class Test{
    int intValue;
    mutable int numValue;    // 加上mutable后不受const限制, 在常函数中也可变
public:
//    Test();
    Test(int intValue);
    int getValue() const;
    int getValue_2();
    void setValue() const;
};

// 定义构造函数，使用初始化列表
//Test::Test():intValue(11){
//    cout << "Test类初始化 : " << Test::intValue << endl;
//}


// 有参构造函数，若没有无参构造函数，则设置默认初始化值
Test::Test(int intValue = 22){
    this->intValue = intValue;
    cout << "Test有参构造函数 : " << Test::intValue << endl;
}

int Test::getValue_2(){
    return intValue;
}

// 定义常量成员函数
int Test::getValue() const{
    return intValue;
}


void Test::setValue() const{
//    this->intValue = 111;    // 常函数无法修改一般变量
    this->numValue = 123;      // 变量前加上mutable修饰，则在常函数中也可修改
}


int main()
{
    Test tt;

    const Test tt1(33);
//    cout << tt1.getValue_2() << endl;    // 该语句非法，常量只能访问常量型成员函数

    system("pause");
    return 0;
}
