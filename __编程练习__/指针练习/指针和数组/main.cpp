#include <iostream>

using namespace std;

// ָ���������
int main()
{
    int *p;
    int arr[] = {4,10,5,7,91,84,56,71,35,46};

    // ָ��ָ�������׵�ַ
    p = arr;
    for(int i = 0;i < sizeof(arr)/sizeof(arr[0]); i++){
        cout << *p << " ";
        p++;
    }

    cout << endl;
    system("pause");
    return 0;
}
