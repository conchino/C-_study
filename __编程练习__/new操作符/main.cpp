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
    // ����ָ������ĳ���    _msize() ���� (Windows ר��)
    cout <<  _msize(p) / sizeof(*p) << endl;     // _msize() ���������� <malloc.h> ͷ�ļ���


    delete p;

    system("pause");
    return 0;
}
