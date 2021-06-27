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

void test_set_difference(){

    vector<int> vt1;
    vector<int> vt2;

    for(int i = 0;i < 10;i++){
        vt1.push_back(i+1);
        vt2.push_back(i+5);
    }

    for_each(vt1.begin(),vt1.end(),MyPrint());
    cout << endl;

    for_each(vt2.begin(),vt2.end(),MyPrint());
    cout << endl;


    vector<int> vt3;
    // ѡ������������Ϊ����������С
    vt3.resize(max(vt1.size(),vt2.size()));

    // ��������������㷨��������������
    // �����㷨���ص��ǽ������������һ��Ԫ�صĵ�����
    vector<int>::iterator it = set_difference(vt1.begin(),vt1.end(),vt2.begin(),vt2.end(),vt3.begin());

    for_each(vt3.begin(),it,MyPrint());
    cout << endl;

    cout << vt3.capacity() << " -- " << vt3.size() << endl;

    // ɾ��������������Ԫ��
    vt3.erase(it,vt3.end());

    cout << vt3.capacity() << " -- " << vt3.size() << endl;
    // �����������
    vector<int>(vt3).swap(vt3);

    cout << vt3.capacity() << " -- " << vt3.size() << endl;

    vector<int>(vt3).swap(vt3);
    for_each(vt3.begin(),vt3.end(),MyPrint());
    cout << endl;

}


void test_set_difference_2(){

    vector<int> vt1;
    vector<int> vt2;

    for(int i = 0;i < 10;i++){
        vt1.push_back(i+1);
        vt2.push_back(i+5);
    }

    for_each(vt1.begin(),vt1.end(),MyPrint());
    cout << endl;

    for_each(vt2.begin(),vt2.end(),MyPrint());
    cout << endl;


    vector<int> vt3;
    // ѡ������������Ϊ����������С
    vt3.resize(max(vt1.size(),vt2.size()));

    // ��������������㷨��������������
    // �����㷨���ص��ǽ������������һ��Ԫ�صĵ�����
    vector<int>::iterator it = set_difference(vt2.begin(),vt2.end(),vt1.begin(),vt1.end(),vt3.begin());

    for_each(vt3.begin(),it,MyPrint());
    cout << endl;

    cout << vt3.capacity() << " -- " << vt3.size() << endl;

    // ɾ��������������Ԫ��
    vt3.erase(it,vt3.end());

    cout << vt3.capacity() << " -- " << vt3.size() << endl;
    // �����������
    vector<int>(vt3).swap(vt3);

    cout << vt3.capacity() << " -- " << vt3.size() << endl;

    vector<int>(vt3).swap(vt3);
    for_each(vt3.begin(),vt3.end(),MyPrint());
    cout << endl;

}





int main()
{
    test_set_difference();

    system("pause");
    return 0;
}
