#include <iostream>
#include <string>

#include "CL_1.h"

using namespace std;

class Animal{

public:
    string type;
    string name;

    void shout(){
        cout << type +" - "+name+":  发出叫声..." << endl;
    }

};


class Student{

//private:    // 不必声明private，因为类的默认访问控制即为private  (结构体struct的默认访问控制为 public)
    string name;
    int score;

public:
    // 带参数的构造函数
    Student(string p1, int p2){
        this->name = p1;
        this->score = p2;
    }

    Student(string p1 = "hhhhhh"){
        this->name = p1;
    }

    void setName(string s_name){
        name = s_name;
    }

    void setScore(int s_score){
        score = s_score;
    }
    string getName(){
        return name;
    }

    int getScore(){
        return score;
    }

    void show(){
        cout << "Info:  " << name << " -- " << score << endl;
    }

};



int main()
{
//    Animal *dog = new Animal();
    Animal dog;
    dog.type = "狗";
    dog.name = "黄黄";
    dog.shout();

    Student *stu = new Student("张三", 90);
    //    stu.setName("张三");
    //    stu.setScore(91);
    stu->show();
//    cout << stu.name << endl; // 无法获取，因为类默认访问控制为 private

    delete stu;

    MyClass_1 myc;

    system("pause");
    return 0;
}
