#include <iostream>

using namespace std;

/* const 修饰指针

    const int *p;               // 常量指针              指向值不可变
    int* const p;               // 指针常量              地址不可变
    const int* const p;     // 指向常量的常量指针    地址与指向值不可变

*/

int main()
{
    int a = 100;
    int b = 101;
    // 常量指针，地址可变
    const int *p1 = &a;
    cout << "p1 : 常量指针，地址可变\n";
    cout << "p1 -> a : " << p1 << endl;
    p1 = &b;
    cout << "p1 -> b : " << p1 << endl;

    int* const p2 = &a;
    cout << "p2 : 指针常量，值可变\n";
    cout << "p2 -> a : " << *p2 << endl;
    *p2 = 111;
    cout << "p2 -> 111 ; a = " << a << endl;

    const int * const p3 = &a;
    cout << "p3 : " << p3 << " || *p3 : " << *p3 << endl;

    system("pause");
    return 0;
}
