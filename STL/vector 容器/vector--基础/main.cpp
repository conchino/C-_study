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



// 赋值
void test_assign(){
    vector<int> vct1 = {1,2,3,4,5};
    printVector(vct1);

    // 等号赋值
    vector<int> vct2 = vct1;
    printVector(vct2);

    // assign(v.begin(),v.end()) 函数赋值
    vector<int> vct3;
    vct3.assign(vct1.begin(), vct1.end());
    printVector(vct3);


    // assign(n .typeVal)
    vector<int> vct4;
    vct4.assign(5, 10);
    printVector(vct4);
}


/* vector获取容量和大小 */
void test_size_capacity(){
    vector<int> vct;

    for(int i = 0;i < 10;i++){
        vct.push_back(i+1);
    }


    if(vct.empty()){
        cout << "vector为空..." << endl;
    }else{
        cout << "vector 不为空..." << endl;
        cout << "capacity = " << vct.capacity() << endl;
        cout << "size = " << vct.size() << endl;
        printVector(vct);
    }

    // 重新设定容器大小
    vct.resize(15, 6);
    printVector(vct);

    vct.resize(17);
    printVector(vct);

}


/*  vector插入删除操作 */
void test_insert_delete(){
    vector<int> vct;
    for(int i = 0;i < 10;i++){
        vct.push_back(i+1);
    }
    printVector(vct);

    // 使用迭代器在头部插入值
    vct.insert(vct.begin(), 0);
    printVector(vct);

    // 在头部插入n个值
    vct.insert(vct.begin(),3,12);
    printVector(vct);

    // 删除迭代器指向的元素
    vct.erase(vct.begin());
    printVector(vct);

    // 删除迭代器指向的区间元素
    vct.erase(vct.begin(), vct.begin()+2);
    printVector(vct);

    // 清空容器
    vct.clear();
    if(vct.empty()){
        cout << "vector 容器被清空了" << endl;
    }
}


// vector元素存取
void test_getElement(){

    vector<int> vct;
    for(int i = 0;i < 6;i++){
        vct.push_back(i+1);
    }

    // operator[]
    for(int i = 0;i < vct.size(); i++){
        cout << vct[i] << " ";
    }
    cout << endl;

    // at(index)
    for(int i = 0;i < vct.size();i++){
        cout << vct.at(i) << " ";
    }
    cout << endl;

    // front()
    cout << "第一个元素为: " << vct.front() << endl;
    // back()
    cout << "最后一个元素为: " << vct.back() << endl;

}



// 容器交换
void test_swap(){

    vector<int> vct;
    for(int i = 0;i < 6;i++){
        vct.push_back(i+1);
    }
    printVector(vct);

    vector<int> v;
    for(int i = 6;i > 0;i--){
        v.push_back(i);
    }
    printVector(v);

    vct.swap(v);
    printVector(vct);

}



// vector 扩容与预留空间
void test_reserve(){

    vector<int> vct;

    int count = 0;
    int *p = NULL;

    for(int i = 0;i < 100000;i++){
        vct.push_back(i);

        if(p != &vct[0]){
            p = &vct[0];
            count++;
        }
    }

    cout << "vector 扩容了: " << count << "次" << endl;


    vector<int> v;
    count = 0;
    p = NULL;

    // 提前预留空间，减少扩容次数
    v.reserve(200000);

    for(int i = 0;i < 100000;i++){
        v.push_back(i);

        if(p != &v[0]){
            p = &v[0];
            count++;
        }
    }

    cout << "预留空间后，vector 扩容了: " << count << "次" << endl;
    // 清除多余空间
    cout << v.capacity() << endl;
    vector<int> (v).swap(v);
    cout << v.capacity() << endl;


}



int main()
{
    test_reserve();

    system("pause");
    return 0;
}
