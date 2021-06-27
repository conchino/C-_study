#include <iostream>
#include <string>

using namespace std;

/* 结构体数组 */
// 结构体定义
struct Human {
    string name;
    int age;
    bool sex;
    // 默认赋值
    Human(string p1="xxx", int p2=0, bool p3=true){
        name = p1;
        age = p2;
        sex = p3;
    }
    // 初始化函数
    void init(string str, int num, bool ss){
        this->name = str;
        this->age = num;
        this->sex = ss;
    }
};

int main()
{
//    struct Human human[3];
    Human human[3] = {
        {"用户1",11,true},
        {"用户2",12,false},
        {"用户3",13,true}
    };

    for(int i = 0;i < 3; i++){
        cout << human[i].name << "  " << human[i].age << "  " << human[i].sex << endl;
    }

    system("pause");
    return 0;
}
