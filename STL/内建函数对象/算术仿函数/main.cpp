#include <iostream>
#include <functional>   // 内建函数头文件<functional>

using namespace std;

/* 算术仿函数 */

// 一元运算
void test_negate(){
    // 取反仿函数 negate<T>();
    negate<int> n;
    cout << n(10) << endl;

    // 匿名调用内建函数
    cout << negate<int>()(10) << endl;
}

// 二元运算
void test_plus(){

    plus<int> p;
    cout << p(10,20) << endl;

    cout << plus<int>()(11,22) << endl;

}



int main()
{
    test_negate();
    test_plus();

    system("pause");
    return 0;
}
