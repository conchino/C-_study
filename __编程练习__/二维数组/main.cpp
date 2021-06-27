#include <iostream>

using namespace std;

/* 二维数组 */
int main()
{
    int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};

    for(int i = 0;i < 3;i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "二维数组行数: " << sizeof(arr)/sizeof(arr[0]) << endl;
    cout << "二维数组列数: " << sizeof(arr[0])/sizeof(arr[0][0]) << endl;

    system("pause");
    return 0;
}
