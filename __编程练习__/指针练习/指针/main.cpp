#include <iostream>

using namespace std;

/* ָ��

   �������� *������;

 */

int main()
{
    // ����ָ��
    int *p;
    int a = 100;

    // ʹָ��ָ������ĵ�ַ
    p = &a;
    cout << "*p : " << p << endl;
    cout << "*p��ֵ : " << *p << endl;    // ָ��ǰ��*�Ŵ���ʹ��ָ���ڴ��еĵ�ַ
    cout << "a = " << a  << endl;
    cout << "---------------------------\n" << endl;
    *p = 1000;
    cout << "��*p��Ϊ1000\np = " << p << endl;
    cout << "*p = " << *p << endl;
    cout << "a = " << a << endl;

    system("pause");
    return 0;
}
