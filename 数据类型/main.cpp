#include <iostream>
#include <stdlib.h>
#include <string>

// �곣������
#define NUM_1 11

// ��������
int ppa(int a, int b);

int main()
{
    using namespace std;

    // const ��������
    const string NUM_2 = "22";
    cout << "ʹ��define����ĳ���NUM_1 : "<< NUM_1 <<  endl;
    cout << "ʹ��const����ĳ���NUM_2 : "<< NUM_2 <<  endl;
    cout << endl;

    // ��������
    bool flag = true;
    // ����
    int n1 = 1;
    // long������
    long l1 = 10L;
    cout << "������Long : " << l1 << endl;
    // float ������
    float f1  = 3.14f;
    cout << "������float : " << f1 << endl;
    // ��ʽ�����
    double dd1 = 123456.01020304050612345;
    printf("��ʽ�����:  %.10f \n", dd1);

    if(flag){
        // �����������ʱֻ����� 1�� 0 ������true �� false
		cout << "��������flag: " << flag << endl;
    }

    // �ַ�char
    char ch = 'C';
    cout << "�ַ������� char : " << ch << endl;
    cout << "�ַ���ӦASCII�� : " << (int)ch << endl;

    // �ַ�����
    char str_1[] = "This is a char[]...";
    cout << "char[] �ַ���:  " << str_1 << endl;
    string str_2 = "This is a string...";
    cout << "string �ַ���..." << str_2 << endl;

//    cout << typeid(str_1).name() << endl;

    cout << endl;
    switch(ppa(1,0)){
        case 1 :
            cout << "num is 1..." << endl;
            break;
        case 2:
            cout << "num is 2..." << endl;
            break;
        case 3:
            cout << "num is 3..." <<endl;
            break;
        default:
            cout << "Output Default words..." << endl;
    }



    cout << "---------------------------------------------------" << endl;

    // �������ʱ���������̽����رմ��ڣ����ǻ���ͣ���ڣ�
	// ��ֹ���г���ʱ����һ������
	system("pause");

	// ����Ҳ����ʹ�ü򵥵� cin.get();
	// �����Ļ���Ļ�Ͻ�������ʾ�κ���ͣ��ʾ����
	cin.get();
    return 0;
}

// ��������
int ppa(int a, int b){
    return a+b;
}
