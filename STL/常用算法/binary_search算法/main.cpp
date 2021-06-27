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
    // binary_search 需要在有序容器中使用，用前需要先排序
    sort(vt.begin(),vt.end());

    bool flag = binary_search(vt.begin(),vt.end(),0);
    if(flag){
        cout << "数值存在" << endl;
    }else cout << "不存在" << endl;

}



int main()
{
    test_binary_search();

    system("pause");
    return 0;
}
