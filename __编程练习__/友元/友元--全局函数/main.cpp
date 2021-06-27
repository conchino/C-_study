#include <iostream>
#include <string>

using namespace std;


class Building{

    // 友元函数声明
    // 友元全局函数在要访问的类中使用friend修饰声明，定义时不需要friend关键字
    friend void normalMethod(Building &build);

private:
    string priVar;

public:
    string pubVar;

    // 构造函数
    Building(){
        pubVar = "公有变量";
        priVar = "私有变量";
    }

};

// 全局函数定义
void normalMethod(Building &build){
    cout << "公有变量访问: " <<  build.pubVar << "\n友元访问私有变量: " << "   " << build.priVar << endl;
}

int main()
{
    Building build;
    normalMethod(build);

    return 0;
}
