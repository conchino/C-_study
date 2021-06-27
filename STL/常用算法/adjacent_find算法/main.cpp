#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


void test_adjacent_find(){

    vector<int> vt;
    for(int i = 0;i < 10;i++){
        vt.push_back(i+1);
    }
    vt.insert(vt.begin()+3,4);

    // 查找容器中的相邻重复元素
    vector<int>::iterator it =adjacent_find(vt.begin(),vt.end());
    cout << *it << "  " << *(it+1) << endl;

}



int main()
{
    test_adjacent_find();

    system("pause");
    return 0;
}
