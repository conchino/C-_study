#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class MyPrint{
public:
    void operator()(int val){
        cout << val << " ";
    }
};


class MyCondition{
public:
    bool operator()(int val, int standard = 6){
        return val > standard;
    }
};

bool MyFunc(int val){
    return val > 6;
}


void test_replace_if(){

    vector<int> vt;
    for(int i = 0;i < 10;i++){
        vt.push_back(i+1);
    }

    for_each(vt.begin(),vt.end(),MyPrint());
    cout << endl;

//    replace_if(vt.begin(),vt.end(),MyCondition(),11);
    replace_if(vt.begin(),vt.end(),MyFunc,11);

    for_each(vt.begin(),vt.end(),MyPrint());
    cout << endl;

}



int main()
{
    test_replace_if();

    system("pause");
    return 0;
}
