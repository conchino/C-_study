#include <iostream>

using namespace std;

class Base{
public:
    int member;
    static int smber;
    Base(){
        member = 11;
    }
    void func(){
        cout << "Base���func����..." << endl;
    }
    static void method(){
        cout << "Base��̬��Ա����..." << endl;
    }
    static void method(int num){
        cout << "Base��̬�вγ�Ա����..." << endl;
    }
};

int Base::smber = 111;

class Son : public Base{
public:
    int member;
    static int smber;
    Son(){
        member = 22;
    }
    void func(){
        cout << "Son���func����..." << endl;
    }
    static void method(){
        cout << "Son��̬��Ա����..." << endl;
    }
};

int Son::smber = 222;

int main()
{
    Son ss;

    // ͬ�������Ա���� ʹ��������(::)����
    cout << ss.member << endl;
    cout << ss.Base::member << endl;

    cout << "--------------------------------" << endl;
    // ͬ�������Ա��������  Ҳʹ��������(::)����
    ss.func();
    ss.Base::func();

    cout << "--------------------------------" << endl;
    ss.method();
    ss.Base::method();
    ss.Base::method(0);

    // ��̬��Ա���Ե���
    cout << ss.smber << endl;
    cout << ss.Base::smber << endl;
    cout << Son::smber << endl;
    cout << Base::smber << endl;

    system("pause");
    return 0;
}
