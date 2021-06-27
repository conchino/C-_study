#include <iostream>

using namespace std;

/* const ����ָ��

    const int *p;               // ����ָ��              ָ��ֵ���ɱ�
    int* const p;               // ָ�볣��              ��ַ���ɱ�
    const int* const p;     // ָ�����ĳ���ָ��    ��ַ��ָ��ֵ���ɱ�

*/

int main()
{
    int a = 100;
    int b = 101;
    // ����ָ�룬��ַ�ɱ�
    const int *p1 = &a;
    cout << "p1 : ����ָ�룬��ַ�ɱ�\n";
    cout << "p1 -> a : " << p1 << endl;
    p1 = &b;
    cout << "p1 -> b : " << p1 << endl;

    int* const p2 = &a;
    cout << "p2 : ָ�볣����ֵ�ɱ�\n";
    cout << "p2 -> a : " << *p2 << endl;
    *p2 = 111;
    cout << "p2 -> 111 ; a = " << a << endl;

    const int * const p3 = &a;
    cout << "p3 : " << p3 << " || *p3 : " << *p3 << endl;

    system("pause");
    return 0;
}
