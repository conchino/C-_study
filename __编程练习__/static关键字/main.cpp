#include <iostream>
#include <windows.h>

using namespace std;

// ��̬ȫ�ֱ���: ����ȫ�ֱ�������ʾ�ñ���ֻ�ڱ��ļ��ɼ� (������ͬ)
static int numVal = 123;

// static ��̬�ֲ�����
/* static ���εľֲ��������溯���Ľ��������� */
void func(){
    static int num = 1;
    cout << "num = " << num << endl;
    num++;
}

int main()
{
    int count = 0;
    while(count < 10){
        func();
        Sleep(1500);
    }

    system("pause");
    return 0;
}
