#include <iostream>
#include <string>

#include "CL_1.h"

using namespace std;

class Animal{

public:
    string type;
    string name;

    void shout(){
        cout << type +" - "+name+":  ��������..." << endl;
    }

};


class Student{

//private:    // ��������private����Ϊ���Ĭ�Ϸ��ʿ��Ƽ�Ϊprivate  (�ṹ��struct��Ĭ�Ϸ��ʿ���Ϊ public)
    string name;
    int score;

public:
    // �������Ĺ��캯��
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
    dog.type = "��";
    dog.name = "�ƻ�";
    dog.shout();

    Student *stu = new Student("����", 90);
    //    stu.setName("����");
    //    stu.setScore(91);
    stu->show();
//    cout << stu.name << endl; // �޷���ȡ����Ϊ��Ĭ�Ϸ��ʿ���Ϊ private

    delete stu;

    MyClass_1 myc;

    system("pause");
    return 0;
}
