#include <iostream>
#include <stack>

using namespace std;


void test_stack(){

    stack<int> st;

    for(int i = 0;i < 6;i++){
        st.push(i+1);
    }
    cout << "size of etack is : " << st.size() << endl;
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}


int main()
{
    test_stack();

    system("pause");
    return 0;
}
