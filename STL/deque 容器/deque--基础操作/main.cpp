#include <iostream>
#include <deque>
#include <algorithm>
#include <ctime>

using namespace std;

template <typename T>
void printDeque(deque<T> dq){
    for(typename deque<T>::iterator it = dq.begin(); it != dq.end();++it){
        cout << *it << " ";
    }
    cout << endl;
}

// 自定义编写sort函数 -- 降序排序的回调函数
bool callBackCompare(int a, int b){
    return a > b;
}


// deque赋值 = || assign()
void test_assign(){
    deque<int> dq = {1,2,3,4,5,6,7};

    deque<int> dq1;
    dq1.assign(dq.begin(), dq.end());
    printDeque(dq1);

    deque<int> dq2;
    dq2 = dq;
    printDeque(dq2);

}



void test_normal_operator(){

    deque<int> dq;
    for(int i = 0;i < 3;i++){
        dq.push_back(i+1);
    }
    for(int i = 3;i < 6;i++){
        dq.push_front(i+1);
    }
    printDeque(dq);

    dq.pop_front();
    dq.pop_back();
    printDeque(dq);

    cout << "deque大小: " << dq.size() << endl;
    dq.resize(10, 10);
    printDeque(dq);


    dq.insert(dq.begin()+3, 999);
    printDeque(dq);

    dq.insert(dq.begin(), dq.begin(),dq.begin()+3);     // 在指定迭代器位置插入一个迭代器区间值
    printDeque(dq);

}


void test_sort(){
    srand((unsigned)time(NULL));

    deque<int> dq;
    for(int i = 0;i < 7;i++){
        dq.push_back(rand()%20+1);
    }
    printDeque(dq);

    // 默认升序排序
    sort(dq.begin(), dq.end());
    printDeque(dq);

    // 降序排序，调用回调函数
    sort(dq.begin(), dq.end(), callBackCompare);
    printDeque(dq);

    // 或者使用反向迭代器实现降序排序
    sort(dq.rbegin(),dq.rend());
    printDeque(dq);

    // 算法库中倒序函数 reverse()
    reverse(dq.begin(),dq.end());
    printDeque(dq);
}


int main()
{
    test_sort();

    system("pause");
    return 0;
}
