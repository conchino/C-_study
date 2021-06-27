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


void test_set_union(){

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
    // 选择两个容器大小的和作为并集容器的大小
    vt3.resize(vt1.size()+vt2.size());

    // 并集计算的两个算法必须是有序序列
    // 并集算法返回的是交集容器的最后一个元素的迭代器
    vector<int>::iterator it = set_union(vt1.begin(),vt1.end(),vt2.begin(),vt2.end(),vt3.begin());

    for_each(vt3.begin(),it,MyPrint());
    cout << endl;

    cout << vt3.capacity() << " -- " << vt3.size() << endl;

    // 删除并集容器其余元素
    vt3.erase(it,vt3.end());

    cout << vt3.capacity() << " -- " << vt3.size() << endl;
    // 清除多余容量
    vector<int>(vt3).swap(vt3);

    cout << vt3.capacity() << " -- " << vt3.size() << endl;

    vector<int>(vt3).swap(vt3);
    for_each(vt3.begin(),vt3.end(),MyPrint());
    cout << endl;

}


int main()
{
    test_set_union();

    system("pause");
    return 0;
}
