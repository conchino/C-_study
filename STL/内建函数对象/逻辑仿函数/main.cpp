#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;


void test_logical(){
    vector<bool> vt;
    bool flag = true;
    for(int i = 0;i < 5;i++){
        vt.push_back(flag);
        flag = !flag;
    }

    for(vector<bool>::iterator it = vt.begin(); it != vt.end();++it){
        cout << *it << " ";
    }
    cout << endl;

    vector<bool> vt2;
    vt2.resize(vt.size());

    // 赋值容器元素，并取反
    transform(vt.begin(),vt.end(),vt2.begin(),logical_not<bool>());

    for(vector<bool>::iterator it = vt2.begin(); it != vt2.end();++it){
        cout << *it << " ";
    }
    cout << endl;

    cout << flag << endl;
    cout << logical_not<bool>()(flag) << endl;

}


int main()
{
    test_logical();

    system("pause");
    return 0;
}
