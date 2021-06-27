#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class MyClass{
public:

    // һԪν��
    bool operator()(int val){
        return val > 5;
    }

    // ��Ԫν��
    bool operator()(int val, int num){
        return val > num;
    }
};


void test_predicate(){

    vector<int> vt;
    for(int i = 0;i < 10;i++){
        vt.push_back(i+1);
    }

    // find_if()  ��׼�㷨���з���
    // ���ؽ��Ϊ���������ĵ������� vector.end();
    vector<int>::iterator it =  find_if(vt.begin(),vt.end(), MyClass());      // ʹ��һԪν����Ϊ�жϹ���
    cout << (*it) << endl;

    // ��Ԫν��ʹ�� ---- ��Ϊ�������
    sort(vt.begin(), vt.end(), MyClass());
    for(vector<int>::iterator it = vt.begin(); it != vt.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;

}


int main()
{
    test_predicate();

    system("pause");
    return 0;
}
