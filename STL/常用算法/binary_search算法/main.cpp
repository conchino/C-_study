#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


void test_binary_search(){

    vector<int> vt;
    for(int i = 0;i < 10;i++){
        vt.push_back(i+1);
    }

    vt.push_back(0);
    // binary_search ��Ҫ������������ʹ�ã���ǰ��Ҫ������
    sort(vt.begin(),vt.end());

    bool flag = binary_search(vt.begin(),vt.end(),0);
    if(flag){
        cout << "��ֵ����" << endl;
    }else cout << "������" << endl;

}



int main()
{
    test_binary_search();

    system("pause");
    return 0;
}
