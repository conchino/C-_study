#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int a,int b);

int main()
{
    int arr[] = {21,45,87,96,36,25,84,51,56,12,20,11};
//    int address = upper_bound(arr, arr+20, 21)- arr;
//    cout << address << endl;

    // ��������������
    sort(arr, arr+(int)sizeof(arr)/sizeof(arr[0]));
    for(int i : arr){
        cout << i << " , ";
    }
    cout << endl;

    sort(arr, arr+(int)sizeof(arr)/sizeof(arr[0]), cmp);
    for(int i : arr){
        cout << i << " , ";
    }
    cout << endl;

    system("pause");
    return 0;
}

// �ú�������Ϊsort()�����еıȽ�������������Ԫ�ؽ�������
bool cmp(int a, int b){
    return a > b;
}
