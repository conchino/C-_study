#include <iostream>
#include <ctime>

using namespace std;

// ���ؾֲ������еĵ�ַ
// �����ֲ��������ں����������ú����٣���˷��ؾֲ�������ַ���ᱨ��
int * func_1(){
    int a = 10;
    return &a;
}

// new �ı��������ڶ����У��ֳ���Ա��������٣�������������ϵͳ����
// ���غ�����new �����ĵ�ַûʲô����
int * fun_c(){
    int *p = new int(10);
    return p;
}


int main()
{
    int *a = func_1();
    int *p = fun_c();

//    cout << *a << endl;     // �޷�ִ��
//    cout << *a << endl;

    cout << "--------------" << endl;
    cout << *p << endl;
    cout << *p << endl;

    /*
        new ��������������������
    */

    int *p1 = new int(10);
    cout << "new �ؼ��ִ����ı���ָ��:  " <<  *p1 << endl;

    int *p2 = new int[10];
    cout << "����: " << sizeof(p)/sizeof(p[0]) << endl;

    cout << "new --> ����: " << *p2 << endl;

//    srand((unsigned int)time(0));
//    for(int i = 0;i < sizeof(p)/sizeof(p[0]);i++){
//
//    }

    system("pause");
    return 0;
}
