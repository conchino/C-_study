#include <iostream>
#include <string>

using namespace std;

/* �ṹ������ */
// �ṹ�嶨��
struct Human {
    string name;
    int age;
    bool sex;
    // Ĭ�ϸ�ֵ
    Human(string p1="xxx", int p2=0, bool p3=true){
        name = p1;
        age = p2;
        sex = p3;
    }
    // ��ʼ������
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
        {"�û�1",11,true},
        {"�û�2",12,false},
        {"�û�3",13,true}
    };

    for(int i = 0;i < 3; i++){
        cout << human[i].name << "  " << human[i].age << "  " << human[i].sex << endl;
    }

    system("pause");
    return 0;
}
