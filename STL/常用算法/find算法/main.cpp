#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void test_find(){

    vector<int> vt;
    for(int i = 0;i < 10;i++){
        vt.push_back(i+1);
    }

    vector<int>::iterator it = find(vt.begin(),vt.end(),6);

    cout << (*it) << endl;
}


int main()
{
    test_find();

    system("pause");
    return 0;
}
