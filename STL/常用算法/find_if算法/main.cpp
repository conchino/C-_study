#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


class MyFunc{
public:
    // Î½´Ê
    bool operator()(int val,int standard = 5){
        return val > standard;
    }
};


void test_find_if(){

    vector<int> vt;
    for(int i = 0;i < 10;i++){
        vt.push_back(i+1);
    }

    vector<int>::iterator it = find_if(vt.begin(),vt.end(),MyFunc());
    cout << *it << endl;
}


int main()
{
    test_find_if();

    system("pause");
    return 0;
}
