#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

class MyPrint{
public:
    void operator()(int val){
        cout << val << " ";
    }
};


void test_merge(){
    vector<int> vt1;
    vector<int> vt2;

    srand((unsigned int)time(NULL));
    for(int i = 0;i < 5;i++){
        vt1.push_back(rand()%20+1);
        vt2.push_back(rand()%20+1);
    }

    sort(vt1.begin(),vt1.end());
    sort(vt2.begin(),vt2.end());

    for_each(vt1.begin(),vt1.end(),MyPrint());
    cout << endl;
    for_each(vt2.begin(),vt2.end(),MyPrint());
    cout << endl;


    vector<int> vt3;
    // 合并的容器需要扩容大小为两个合并前容器之和
    vt3.resize(vt1.size()+vt2.size());

    merge(vt1.begin(),vt1.end(),vt2.begin(),vt2.end(),vt3.begin());
    for_each(vt3.begin(),vt3.end(),MyPrint());
    cout << endl;

}


int main()
{
    test_merge();

    system("pause");
    return 0;
}
