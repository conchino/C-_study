#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


class MyPrint{
public:
    void operator()(int val){
        cout << val << " ";
    }
};


void test_section(){

    vector<int> vt1;
    vector<int> vt2;

    for(int i = 0;i < 10;i++){
        vt1.push_back(i+1);
        vt2.push_back(i+5);
    }

    vector<int> vt3;
    // ѡ����С��������Ϊ����������С
    vt3.resize(min(vt1.size(),vt2.size()));

    // ��������������㷨��������������
    // �����㷨���ص��ǽ������������һ��Ԫ�صĵ�����
    vector<int>::iterator it = set_intersection(vt1.begin(),vt1.end(),vt2.begin(),vt2.end(),vt3.begin());

    for_each(vt3.begin(),it,MyPrint());
    cout << endl;

    // ɾ���������������С
    vt3.erase(it,vt3.end());

    vector<int>(vt3).swap(vt3);
    for_each(vt3.begin(),vt3.end(),MyPrint());
    cout << endl;

}



int main()
{
    test_section();


    system("pause");
    return 0;
}
