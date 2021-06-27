#include <iostream>
#include <string>
#include <set>

using namespace std;

template <typename T>
void printSet(set<T> &st){

    for(typename set<T>::iterator it = st.begin(); it != st.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;
}

// 函数模板重载
template <typename T>
void printSet(multiset<T> &st){

    for(typename multiset<T>::iterator it = st.begin(); it != st.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;
}


// 插入和删除
void test_inser_delete(){

    set<int> st;
    st = {1,2,3,6,5,4};
    printSet(st);

    st.insert(11);
    printSet(st);

    // 同list的list.remove([值]);
    st.erase(5);
    printSet(st);

    st.erase(st.begin());
    printSet(st);

    // 同 st.clear();
    st.erase(st.begin(), st.end());
    printSet(st);

}



void test_differ(){
    // set 和 multiset的区别

    /* multiset允许数据重复，set不允许数据重复 */

    set<int> st{10};
    multiset<int> mtst{10};

    pair<set<int>::iterator, bool> flag = st.insert(10);

    if(flag.second)
        cout << "数据重复插入成功" << endl;
    else
        cout << "数据重复插入失败" << endl;

    mtst.insert(10);
    printSet(mtst);

}


// 自定义仿函数设置set排序规则
class MyCompare{
public:
    bool operator()(int v1,int v2){
        return v1 > v2;
    }

};


void test_sort(){
    set<int> st;
    for(int i = 0;i < 10;i++){
        st.insert(i+1);
    }
    // 默认排序为从小到大
    printSet(st);

    set<int,MyCompare> st1;
    for(int i = 0;i < 10;i++){
        st1.insert(i+1);
    }

    for(set<int,MyCompare>::iterator it = st1.begin(); it != st1.end();++it){
        cout << *it << " ";
    }
    cout << endl;
}


class Person{
public:
    string name;
    int score;
    Person() = default;
    Person(string name,int score):name(name),score(score){}
};

// 使用自定义仿函数来对自定义数据类型排序
class classCompare{
public:
    bool operator()(const Person &p1,const Person &p2){
        return p1.score > p2.score;
    }
};


void test_setPerson(){

    set<Person,classCompare> st;

    for(int i = 0;i < 10;i++){
        st.insert(Person{"xxx",i+1});
    }

    for(set<Person>::iterator it = st.begin(); it != st.end(); ++it){
        cout << (*it).name << " " << (*it).score << endl;
    }

}



int main()
{
    test_setPerson();


    system("pause");
    return 0;
}
