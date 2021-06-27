#include <iostream>
#include <deque>

using namespace std;

template <typename T>
void printDeque(deque<T> dq){

    for(typename deque<T>::iterator it = dq.begin(); it != dq.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;
}


// deque 构造函数
test_init(){

    // 指定元素构造
    deque<int> dq = {1,2,3,4,5,6};
    printDeque(dq);

    deque<int> dq1(6, 10);
    printDeque(dq1);

    deque<int> dq2;
    dq2.assign(dq.begin(), dq.end());
    printDeque(dq2);

}



int main()
{
    test_init();

    system("pause");
    return 0;
}
