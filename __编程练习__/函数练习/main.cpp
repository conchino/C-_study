#include <iostream>

#include "HE.h"
#include "VD.h"

/*
    函数的分文件编写
*/

//int max(int a,int b);     // 放在.h头文件中

//int max(int a,int b){     // 放在.c(或.cpp)同名文件中
//    return a > b ? a : b;
//}

int main()
{

    cout << max(10, 11) << endl;
    hello();

    system("pause");
    return 0;
}
