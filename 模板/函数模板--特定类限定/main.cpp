#include <iostream>
#include <string>

using namespace std;


class Person{
public:
    string name;
    int age;
};


template <typename T>
bool myCompared(T &a, T &b){
    if(a == b){
        return true;
    }else{
        return false;
    }
}


// �ض��޷��Ƚ���ʹ�þ��廯ʵ�ְ汾
template <>
bool myCompared(Person &p1, Person &p2){
    if(p1.name == p2.name && p1.age == p2.age){
        return true;
    }else return false;
}


int main()
{

    int a = 11;
    int b =22;
    if(myCompared(a, b)){
        cout << "a == b" << endl;
    }else cout << "a != b" << endl;

    Person p1 = {"����",11};
    Person p2 = {"����",11};

    if(myCompared(p1, p2)){
        cout << "p1 == p2" << endl;
    }else cout << "p1 != p2" << endl;

    system("pause");
    return 0;
}
