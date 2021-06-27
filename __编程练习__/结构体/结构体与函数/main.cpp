#include <iostream>

using namespace std;

/* 结构体作为函数参数值传递
    值传递
    地址传递
 */
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

    string toString(){
        return "name: "+name+" | age: "+to_string(age)+" | score: "+to_string(score);
    }
};


// 按地址传递，改变实参
void changeMethod(Student *student){
    student->name = "xxxxxx";
}

// 将函数中的形参设为指针，可以减少内存使用，且不会复制新的副本
// 结构体参数传递时使用const 限制，防止修改实参
void infoPrint(const Student *student){
//    student->age = 1000;    // 会报错 read-only
    cout << " output: [ name: " << student->name << " | age: " << student->age << " | score: " << student->score << " ] " << endl;
}

void changeMethod_111(const int *p){
    cout << *p << endl;
}

int main()
{
    Student student;
    student.init("张三", 18, 91);
    cout << student.toString() << endl;

    changeMethod(&student);
    cout << student.toString() << endl;

    int nnn = 111;
    int *p = &nnn;
    changeMethod_111(p);

    infoPrint(&student);
    system("pause");
    return 0;
}
