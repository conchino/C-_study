#include <iostream>
#include <ctime>
#include <algorithm>

using namespace std;

int main()
{
    srand((int)time(new time_t));

//    int *arr = new int[15];
    int arr[15];
    for(int i = 0;i < 15; i++){
        arr[i] = rand()%30;
    }

    sort(arr, arr+15);
    for(int i = 0; i < 15; i++){
        cout << arr[i] << endl;
    }

    cout << "数组元素个数: " << sizeof(arr)/sizeof(arr[0]) << endl;

    system("pause");
    return 0;
}
