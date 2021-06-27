#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class MyClass{
public:

    // 一元谓词
    bool operator()(int val){
        return val > 5;
    }

    // 二元谓词
    bool operator()(int val, int num){
        return val > num;
    }
};


void test_predicate(){

    vector<int> vt;
    for(int i = 0;i < 10;i++){
        vt.push_back(i+1);
    }

    // find_if()  标准算法库中方法
    // 返回结果为符合条件的迭代器或 vector.end();
    vector<int>::iterator it =  find_if(vt.begin(),vt.end(), MyClass());      // 使用一元谓词作为判断规则
    cout << (*it) << endl;

    // 二元谓词使用 ---- 作为排序规则
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
