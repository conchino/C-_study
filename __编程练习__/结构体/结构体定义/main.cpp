#include <iostream>
#include <string>

using namespace std;

// ����ṹ��
struct Human{
    string name;
    int age;
    bool sex;

    // struct ͬ�����캯�����ṩĬ��ֵ
    Human(string n = "",int num = 0,bool s = true){
        name = n;
        age = num;
        sex = s;
    }

    // �Զ����ʼ������
    void init(string str,int num,bool b){
        this->name = str;
        this->age = num;
        this->sex = b;
    }

}hhm;

int main()
{
    Human human = {"����", 18};
    cout << "name: " << human.name << endl;
    cout << "age: " << human.age << endl;
    if(human.sex == true){
        cout << "sex:  ��" << endl;
    }else {
        cout << "sex:  Ů" << endl;
    }

    cout << "-------------------------------------" << endl;

    Human human_1;
    human_1.init("����",20,true);
    cout << human_1.name << endl;
    cout << "age: " << human_1.age << endl;
    if(human_1.sex == 1){
        cout << "sex:  ��" << endl;
    }else {
        cout << "sex:  Ů" << endl;
    }

    cout << "-------------------------------------" << endl;
    cout << "name: " << hhm.name << "  age:  " << hhm.age << "  sex: " << hhm.sex << endl;

    system("pause");
    return 0;
}
