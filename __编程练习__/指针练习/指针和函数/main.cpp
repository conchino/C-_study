//#include <iostream>
#include "fun_bubble.h"
//using namespace std;

/*
    ��������ʹ��ָ�룬��ı�ʵ�ʲ�����ֵ
    * ʵ�����ǶԴ����ַ��Ӧ��ֵ���в���

*/
// ֵ����
void swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
}

// ��ַ����  ��������ʵ��s
void swap_1(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 11;
    int b = 22;
    swap(a,b);
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "--------------------\n" << endl;

    swap_1(&a, &b);
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

    int arr[] = {4,91,1,73,52,34,16,15,64,61,66,68,81,61,12};
    cout << (int)sizeof(arr)/sizeof(arr[0]) << endl;
    bubble_sort(arr, (int)sizeof(arr)/sizeof(arr[0]));

    int *pp = arr;
    for(int i = 0;i < sizeof(arr)/sizeof(arr[0]); i++){
        cout << *pp << " ";
        pp++;
    }
    cout << endl;

    system("pause");
    return 0;
}
