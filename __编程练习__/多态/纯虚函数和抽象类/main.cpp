#include <iostream>

using namespace std;

// ������
class Interface{
public:
    // ���麯��
    virtual void func(int num) = 0;

    virtual ~Interface() = default;    // ����������, ʹ��ָ������ĸ���ָ������ͷ�ʱ�ܵ����������������(��̬��)
};

class MyClass : public Interface{
public:
    // ������Դ��麯����ʵ��
    void func(int num){
        cout << "����Գ�����Ĵ��麯��(�ӿ�)��ʵ��..." << endl;
    }
    MyClass(){
        cout << "Hello MyClass..." << endl;
    }
};


int main()
{
    MyClass mcs;
    mcs.func(0);

    Interface *itfs = new MyClass;
    itfs->func(1);
    delete itfs;

    system("pause");
    return 0;
}
