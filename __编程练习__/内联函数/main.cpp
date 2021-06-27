#include <iostream>
#include <ctime>

using namespace std;

// ��������
inline int myMethod_1(int num){
    return rand()%num + 1;
}

int myMethod_2(int num){
    return rand()%num + 1;
}


int main()
{
    srand((unsigned int)time(0));


    // clock_t  clock()��ʱ����
    // ����������к�ʱ
    clock_t startTime,endTime;
    startTime = clock();        //��ʼ��ʱ

    int num;
    for(int i = 1; i <= 100000000; i++){
         num = myMethod_1(i);
    }

    endTime = clock();      // ��ʱ����

    cout << "����1 - ���к�ʱ: " << (double)(endTime - startTime) / CLOCKS_PER_SEC << endl;


    clock_t startTime_2,endTime_2;
    startTime_2 = clock();        //��ʼ��ʱ

    int num_2;
    for(int i = 1; i <= 100000000; i++){
         num_2 = myMethod_2(i);
    }

    endTime_2 = clock();      // ��ʱ����

    cout << "����2 - ���к�ʱ: " << (double)(endTime_2 - startTime_2) / CLOCKS_PER_SEC << endl;

    cout << "�����������к�ʱ: " << (double)clock() / CLOCKS_PER_SEC << endl;
    system("pause");
    return 0;
}
