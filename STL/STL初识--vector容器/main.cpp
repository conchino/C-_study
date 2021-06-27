#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

/* vector容器与迭代器的使用 */

// 自定义的被回调函数, 用于for_each回调
void myPrint(int val){
    cout << val << " ";
}


void test_1(){
    vector<int> vct(3,1);  // 初始化vector容器，生成初始大小为3个1的vector的int型对象

    // 向容器中添加数据
    vct.push_back(2);
    vct.push_back(3);
    vct.push_back(4);
    vct.push_back(5);

    // 使用vector迭代器遍历vector数组
    // 声明迭代器时，需要指明迭代容器对应的迭代器类型与泛型类型
    vector<int>::iterator bit = vct.begin();    // 起始迭代器，指向容器中第一个元素；
    vct.push_back(6);
    vct.push_back(7);
    vector<int>::iterator eit = vct.end();      // 结束迭代器，指向容器中最后一个元素的下一个位置(一个不存在的值)

    // 遍历方式一
    while(bit != eit){
        cout << *bit << " ";    //使用迭代器取引用操作(*)取出迭代器对应的值  (类似于指针取值操作)
        bit++;
    }
    cout << endl;


    // 遍历方式二 (推荐)
    for(vector<int>::iterator it = vct.begin(); it != vct.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;


    // 遍历方式三  STL提供的遍历算法(for_each)(需要头文件<algorithm>)
    for_each(vct.begin(),vct.end(),myPrint);    // 回调了myPrint函数
    cout << endl;


    // 逆序遍历，需要反向迭代器 reverse_iterator, 并从vector.rbegin() 逆向迭代至 vector.rend();
    // vector.rbegin() 指向vector容器最后一个元素；vector.rend() 指向首元素的前一个位置;
    for(vector<int>::reverse_iterator it = vct.rbegin(); it != vct.rend(); ++it){
        cout << (*it) << " ";
    }
    cout << endl;

}




/* vecotr存放自定义数据类型 */

class Person{
    // 输出运算符重载
    friend ostream &operator<<(ostream &os, Person &p){
        os << "name: " << p.name << " age: " << p.age;
        return os;
    }
public:
    string name;
    int age;
    // 在类中定义了全部是默认参数的构造函数后，不能再定义重载构造函数
    Person(int age = 11,string name = "xxx"):name(name),age(age){}
};


// vector 容器自定义数据类型
void test_2(){

    vector<Person> vctp;

    for(int i = 0;i < 3;i++){
        Person p;
        vctp.push_back(p);
    }

    for(vector<Person>::iterator it = vctp.begin(); it != vctp.end(); it++){
        cout << *it << " " << endl;
    }

}


// vector 容器指针类型
void test_3(){

    vector<Person *> vctp;

    for(int i = 0;i < 5;i++){
        Person p;
        vctp.push_back(&p);
    }

    for(vector<Person *>::iterator it = vctp.begin(); it != vctp.end(); ++it){
        cout << (*(*it)).name << "   |   " << (*(*it)).age << endl;       // 或者 (*it)->name 的形式
    }
}


/* vector 容器嵌套 */
void test_4(){

    vector<vector<int>> vvct;

    for(int i = 0; i < 5;i++){
        vector<int> vct(5,i+1);  // 初始化容器为五个i+1元素的vector
        vvct.push_back(vct);
    }

    // 嵌套vector的迭代器
    // 外层大迭代器用于迭代外层vector容器；内层小迭代器用于迭代内部vector元素
    for(vector<vector<int>>::iterator vit = vvct.begin(); vit != vvct.end(); ++vit){
        for(vector<int>::iterator it = (*vit).begin(); it != (*vit).end(); ++it){
            cout << *it << " ";
        }
        cout << endl;
    }

}



void test_5(){

    vector<int> vct;
    for(int i = 0;i < 6;i++){
        vct.push_back(i+1);
    }

    for(int i = 0;i < 6;i++){
        cout << vct[i] << " ";
    }
    cout << endl;

    for(int i = 0;i < 6;i++){
        cout << vct.at(i) << " ";
    }
    cout << endl;

    // 下标访问 vector[位置]，不会检测位置的合理性
    // at访问vector.at(位置)，会进行位置合理性检测
//    cout << vct.at(66) << endl;
//    cout << vct[66] << endl;
}



int main()
{

    test_5();

    system("pause");
    return 0;
}
