#include <iostream>

using namespace std;


class Base{
    int *BNum;
public:
    Base(){
        BNum = new int(0);
        cout << "Base���캯��..." << endl;
    }
    ~Base(){
        delete BNum;
        cout << "Base��������..." << endl;
    }
};


class Son :public Base{

public:
    Son(){
        cout << "Son���캯��" << endl;
    }
    ~Son(){
        cout << "Son��������" << endl;
    }
};


int main()
{
    // �ȵ��ø���Ĺ��캯�����ٵ�������Ĺ��캯��
    // ����ʱ�ȵ�������������������ٵ��ø������������
    Son son;

    system("pause");
    return 0;
}
