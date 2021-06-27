#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


class MyFunc{
public:
    int operator()(int &v){
        v = -v;
        return v;
    }
};


class MyPrint{
public:
    void operator()(int n){
        cout << n << " ";
    }
};


void test_transform(){

    vector<int> vt;
    for(int i = 0;i < 10;i++){
        vt.push_back(i+1);
    }

    for_each(vt.begin(),vt.end(),MyPrint());
    cout << endl;

    vector<int> vt2;
    // �ڰ���ǰ��Ҫ�Ƚ�Ŀ����������
    vt2.resize(vt.size());

    // �Զ���º����������˵Ķ���ȫ��ȡ��������ԭ�����ֵҲȡΪ��
    transform(vt.begin(),vt.end(),vt2.begin(),MyFunc());


    for_each(vt2.begin(),vt2.end(),MyPrint());
    cout << endl;


    for_each(vt.begin(),vt.end(),MyPrint());
    cout << endl;

}



int main()
{
    test_transform();

    system("pause");
    return 0;
}
