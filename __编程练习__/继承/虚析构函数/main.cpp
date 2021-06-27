#include <iostream>

using namespace std;

/*
    ����������ʹ����ɾ��ָ�� ������� �� ����ָ�� ʱ��
    ���Ե��� ������������� ��ʵ�� �ͷ����� �ж��ڴ��Ŀ��
*/


class Base{
public:
    Base(){
        cout << "Base ���캯��..." << endl;
    }
    void func(){
        cout << "Base -- func ..." << endl;
    }

    // ����������
    virtual ~Base(){
        cout << "Base ����������..." << endl;
    }
};

class Son : public Base {
public:
    Son(){
        cout << "Son���캯��" << endl;
    }
    ~Son(){
        cout << "Son��������" << endl;
    }
};


class Interface{
public:
    Interface();  // ���캯����������Ϊ�麯��
    // ������������
    virtual ~Interface() = 0;
};

Interface::Interface(){
    cout << "Interface���캯��" << endl;
}

// �����������������ⶨ��
Interface::~Interface(){
    cout << "Interface������������..." << endl;
}

class Implement : public Interface{
public:
    Implement(){
        cout << "ʵ���๹�캯��" << endl;
    }
    ~Implement(){
        cout << "ʵ������������..." << endl;
    }
};


int main()
{
    Base *b = new Son;
    delete b;     // ��û����������������delete ֻ����û������������������������������������

    cout << "-----------------------------" << endl;
    Interface *itf = new Implement;
    delete itf;

    system("pause");
    return 0;
}
