#include <iostream>
#include <string>

using namespace std;

/* 结构体嵌套 */
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


struct Teacher{
    int id;
    string name;
    int age;
    Student student;

    Teacher(int i = 0,string n1="xxx", int n2 = 10){
        id = i;
        name = n1;
        age = n2;
    }

    void init(int p,string p1,int p2,Student p3){
        this->id = p;
        this->name = p1;
        this->age = p2;
        this->student = p3;
    }

    string toString(){
        return "id: "+to_string(id)+" | name: "+name+" | age: "+to_string(age)+"\nstudent: "+student.toString();
    }
};



int main()
{
    Teacher teacher;

    cout << teacher.toString() << endl;

    int num = 10;
    cout << (num > 11 ? "男" : "女") << endl;

    system("pause");
    return 0;
}
