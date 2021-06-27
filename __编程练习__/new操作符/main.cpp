#include <iostream>
#include <ctime>
#include <malloc.h>


using namespace std;

int main()
{
    int *p = new int[10];
    int arr[20];

    srand((unsigned int)time(NULL));

    cout << sizeof(p)/sizeof(p[0]) << endl;
    // 计算指针数组的长度    _msize() 函数 (Windows 专属)
    cout <<  _msize(p) / sizeof(*p) << endl;     // _msize() 函数存在于 <malloc.h> 头文件中


    delete p;

    system("pause");
    return 0;
}
