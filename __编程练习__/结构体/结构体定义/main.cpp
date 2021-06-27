#include <iostream>
#include <string>

using namespace std;

// 定义结构体
struct Human{
    string name;
    int age;
    bool sex;

    // struct 同名构造函数，提供默认值
    Human(string n = "",int num = 0,bool s = true){
        name = n;
        age = num;
        sex = s;
    }

    // 自定义初始化函数
    void init(string str,int num,bool b){
        this->name = str;
        this->age = num;
        this->sex = b;
    }

}hhm;

int main()
{
    Human human = {"张三", 18};
    cout << "name: " << human.name << endl;
    cout << "age: " << human.age << endl;
    if(human.sex == true){
        cout << "sex:  男" << endl;
    }else {
        cout << "sex:  女" << endl;
    }

    cout << "-------------------------------------" << endl;

    Human human_1;
    human_1.init("李四",20,true);
    cout << human_1.name << endl;
    cout << "age: " << human_1.age << endl;
    if(human_1.sex == 1){
        cout << "sex:  男" << endl;
    }else {
        cout << "sex:  女" << endl;
    }

    cout << "-------------------------------------" << endl;
    cout << "name: " << hhm.name << "  age:  " << hhm.age << "  sex: " << hhm.sex << endl;

    system("pause");
    return 0;
}
