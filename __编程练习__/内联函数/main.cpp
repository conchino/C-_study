#include <iostream>
#include <ctime>

using namespace std;

// 内联函数
inline int myMethod_1(int num){
    return rand()%num + 1;
}

int myMethod_2(int num){
    return rand()%num + 1;
}


int main()
{
    srand((unsigned int)time(0));


    // clock_t  clock()计时函数
    // 计算程序运行耗时
    clock_t startTime,endTime;
    startTime = clock();        //开始计时

    int num;
    for(int i = 1; i <= 100000000; i++){
         num = myMethod_1(i);
    }

    endTime = clock();      // 计时结束

    cout << "程序1 - 运行耗时: " << (double)(endTime - startTime) / CLOCKS_PER_SEC << endl;


    clock_t startTime_2,endTime_2;
    startTime_2 = clock();        //开始计时

    int num_2;
    for(int i = 1; i <= 100000000; i++){
         num_2 = myMethod_2(i);
    }

    endTime_2 = clock();      // 计时结束

    cout << "程序2 - 运行耗时: " << (double)(endTime_2 - startTime_2) / CLOCKS_PER_SEC << endl;

    cout << "整个程序运行耗时: " << (double)clock() / CLOCKS_PER_SEC << endl;
    system("pause");
    return 0;
}
