#include <iostream>

using namespace std;

class Aa{
protected:      // protected成员不能被类实例直接访问，可以被成员函数和子类访问
    int element;
public:
    Aa(){
        cout << "Aa构造函数" << endl;
    }
};

class Bb{
protected:
    int element;
public:
    Bb(){
        cout << "Bb构造函数" << endl;
    }
};


// 多继承
/*
    多继承中区分不同继承基类同名成员变量的问题
*/
class Cc : public Aa , public Bb{
protected:
    int element;
public:
    Cc(){
        this->element = 333;
        Aa::element = 111;
        Bb :: element = 222;
    }

    void CcPrint(){
        cout << "Aa -- element : " << Aa::element << endl;
        cout << "Bb -- element : " << Bb::element << endl;
        cout << "Cc -- element : " << element << endl;
    }
};



int main()
{
    Cc cc;
    cc.CcPrint();

    system("pause");
    return 0;
}
