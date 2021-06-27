#include <iostream>

using namespace std;


class Person{
    int *aa;
    int *bb;

    // 输出操作符重载
    friend ostream& operator<<(ostream &os, const Person &person);

public:
    Person();
    Person(int aa,int bb);
    ~Person();

    // 赋值运算符重载，需要考虑深拷贝问题(new 堆地址)
    Person& operator=(Person& person){
        if(aa != NULL){
            delete aa;
            aa = NULL;
        }
        if(bb != NULL){
            delete bb;
            bb = NULL;
        }
        aa = new int(*person.aa);
        bb = new int(*person.bb);

        return *this;
    }

};

Person :: Person(){
    this->aa = new int(0);
    this->bb = new int(0);
}

Person :: Person(int aa,int bb){
    this->aa = new int(aa);
    this->bb = new int(bb);
}

// 析构函数回收new的对象
Person :: ~Person(){
    if(this->aa != NULL){
        delete aa;
        aa = NULL;
    }

    if(this->bb != NULL){
        delete bb;
        bb = NULL;
    }

    cout << "Person中new对象已被回收" << endl;
}

// << 运算符重载
ostream& operator<<(ostream &os, const Person &person){
    os << "aa: " << *person.aa << " || bb: " << *person.bb;
    return os;
}


int main()
{
    Person p1(10,20);
    cout << "p1: " << p1 << endl;

    Person p2 = p1;
    cout << "p2: " << p2 <<endl;
    system("pause");
    return 0;
}
