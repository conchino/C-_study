#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename T>
void printVector(vector<T> v){
    for(typename vector<T>::iterator it = v.begin(); it != v.end();++it){
        cout << *it << " ";
    }
    cout << endl;
}

/* vector的构造函数 */
void test_init(){

    /* 默认构造，无参构造 */
    vector<int> vct1;
    for(int i =0 ;i < 5;i++){
        vct1.push_back(i+1);
    }
    printVector(vct1);


    /* 区间构造 */
    // 利用其他容器的迭代器作为区间构造
    vector<int> vct2(vct1.begin(),vct1.end());
    printVector(vct2);


    /* 多个重复值构造 */
    vector<int> vct3(5,10);
    printVector(vct3);


    /* 拷贝构造 */
    vector<int> vct4(vct3);
    printVector(vct4);


}



int main()
{
    test_init();

    system("pause");
    return 0;
}
