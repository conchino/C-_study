#include <iostream>
#include <string>

using namespace std;


/* 结构体指针 */
struct Student{
    string name;
    int age;
    int score;

    Student(string n1="xxx", int n2 = 10, int n3 = 0){
        name = n1;
        age = n2;
        score = n3;
    }

    void init(string p1,int p2,int p3){
        this->name = p1;
        this->age = p2;
        this->score = p3;
    }
};

int main()
{
    Student stu;

    cout << stu.name << "  "
         << stu.age << "  "
         << stu.score << endl;

    // 创建结构体指针
//    struct Student *p = &stu;   //c++中可以直接省略struct
    Student *p = &stu;
    // 结构体通过 -> 操作符访问成员变量
    cout << p->name << endl;

    system("pause");
    return 0;
}
