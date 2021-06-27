#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int main()
{
    // �������ɵ�ʱ������������ɵ��������
    srand((int)time(new time_t));
    cout << time(new time_t) << endl;

    int *arr = new int[100];

    for(int i = 0; i < 20; i++){
        arr[i] = rand()%25;
        cout << *(arr + i) << " -- " << i << endl;     // ����[0, 100]�������
    }

    cout << "����arr�ĳ���Ϊ: " <<  sizeof(arr)/sizeof(arr[0]) << endl;

    int brr[] = {1,20,48,65,41,30,16,45,16,15,47};
//    cout << "����brr�ĳ���Ϊ: " << sizeof(brr) / sizeof(brr[0]) << endl;

    sort(brr, brr+sizeof(brr)/sizeof(brr[0]));
    cout << "���ҽ��Ϊ: " << binary_search(brr, brr+50, 20) << endl;
    cout << "����ָ��ֵ���±�: " << upper_bound(brr, brr+50, 1)-brr-(int)sizeof(brr)/sizeof(brr[0]) << endl;

    delete arr;

    system("pause");
    return 0;
}
