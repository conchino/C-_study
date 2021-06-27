#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>
#include <functional>


using namespace std;

void test_equal(){
    int a = 10;

    equal_to<int> flag;
    cout << flag(a,10) << endl;

    cout << equal_to<int>()(a,10) << endl;

    srand((unsigned)time(NULL));
    vector<int> vt;
    for(int i = 0;i < 10;i++){
        vt.push_back(rand()%20+1);
    }
    for(vector<int>::iterator it = vt.begin(); it != vt.end();++it){
        cout << *it << " ";
    }
    cout << endl;

    // ʹ�ù�ϵ�º�����Ϊ�������
    // �˴�ʹ�õ����������ʷ�ʽ
    sort(vt.begin(),vt.end(),greater<int>());

    for(vector<int>::iterator it = vt.begin(); it != vt.end();++it){
        cout << *it << " ";
    }
    cout << endl;

}




int main()
{
    test_equal();

    system("pause");
    return 0;
}
