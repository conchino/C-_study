#include <iostream>

using namespace std;

// ��������������
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;

}

int main()
{
    int a = 11;
    int &b = a;

    cout << "a�ĵ�ַ: " << &a << endl;
    cout << "a��ֵ: " << a << endl;
    cout << "\nb ���� a : " << endl;
    cout << "b��ֵ: " << b << endl;
    cout << "b�ĵ�ַ: " << &b << endl;

    b = 22;
    cout << "b��ֵ: " << b << " | b���õĵ�ַ: " << &b << endl;
    cout << "a��ֵ: " << a << " | a���õĵ�ַ: " << &a << endl;

    int x = 22;
    int y = 33;
    swap(x, y);
    cout << "x: " << x << endl;
    cout << "y��" << y << endl;


    // ʹ��const �������ã����ò����޸�
    // �൱��  int temp = 10;
    //         const int & p = temp;
    const int & p = 10;


    system("pause");
    return 0;
}
