#include <iostream>

using namespace std;

/* �ṹ����Ϊ��������ֵ����
    ֵ����
    ��ַ����
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


// ����ַ���ݣ��ı�ʵ��
void changeMethod(Student *student){
    student->name = "xxxxxx";
}

// �������е��β���Ϊָ�룬���Լ����ڴ�ʹ�ã��Ҳ��Ḵ���µĸ���
// �ṹ���������ʱʹ��const ���ƣ���ֹ�޸�ʵ��
void infoPrint(const Student *student){
//    student->age = 1000;    // �ᱨ�� read-only
    cout << " output: [ name: " << student->name << " | age: " << student->age << " | score: " << student->score << " ] " << endl;
}

void changeMethod_111(const int *p){
    cout << *p << endl;
}

int main()
{
    Student student;
    student.init("����", 18, 91);
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
