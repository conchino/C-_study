#include <iostream>
#include <string>

using namespace std;


/* �ṹ��ָ�� */
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

    // �����ṹ��ָ��
//    struct Student *p = &stu;   //c++�п���ֱ��ʡ��struct
    Student *p = &stu;
    // �ṹ��ͨ�� -> ���������ʳ�Ա����
    cout << p->name << endl;

    system("pause");
    return 0;
}
