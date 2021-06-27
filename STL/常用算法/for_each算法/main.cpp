#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


class MyPrint{
public:
    // ���غ����������ʵ�ַº���
    void operator()(int val){
        cout << val << " ";
    }
};


void print_func(int val){
    cout << val << " ";
}


void test_forEach(){
    vector<int> vt;

    for(int i =0;i < 10;i++){
        vt.push_back(i+1);
    }
    // for_ecah �е����������������ͨ�������ߺ�������(�º���)
    // ��������
    for_each(vt.begin(),vt.end(),MyPrint());
    cout << endl;

    // ����
    for_each(vt.begin(),vt.end(),print_func);
    cout << endl;
}


int main()
{
    test_forEach();

    system("pause");
    return 0;
}
