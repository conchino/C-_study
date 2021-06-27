#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int main()
{
    // 根据生成的时间戳来决定生成的随机种子
    srand((int)time(new time_t));
    cout << time(new time_t) << endl;

    int *arr = new int[100];

    for(int i = 0; i < 20; i++){
        arr[i] = rand()%25;
        cout << *(arr + i) << " -- " << i << endl;     // 生成[0, 100]的随机数
    }

    cout << "数组arr的长度为: " <<  sizeof(arr)/sizeof(arr[0]) << endl;

    int brr[] = {1,20,48,65,41,30,16,45,16,15,47};
//    cout << "数组brr的长度为: " << sizeof(brr) / sizeof(brr[0]) << endl;

    sort(brr, brr+sizeof(brr)/sizeof(brr[0]));
    cout << "查找结果为: " << binary_search(brr, brr+50, 20) << endl;
    cout << "大于指定值的下标: " << upper_bound(brr, brr+50, 1)-brr-(int)sizeof(brr)/sizeof(brr[0]) << endl;

    delete arr;

    system("pause");
    return 0;
}
