#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


class MyPrint{
public:
    // 重载函数运算符，实现仿函数
    void operator()(int val){
        cout << val << " ";
    }
};


void print_func(int val){
    cout << val << " ";
}


void test_forEach(){
    vector<int> vt;

    for(int i =0;i < 10;i++){
        vt.push_back(i+1);
    }
    // for_ecah 中的输出函数可以用普通函数或者函数对象(仿函数)
    // 函数对象
    for_each(vt.begin(),vt.end(),MyPrint());
    cout << endl;

    // 函数
    for_each(vt.begin(),vt.end(),print_func);
    cout << endl;
}


int main()
{
    test_forEach();

    system("pause");
    return 0;
}
