#include <iostream>

using namespace std;

class Aa{
protected:      // protected��Ա���ܱ���ʵ��ֱ�ӷ��ʣ����Ա���Ա�������������
    int element;
public:
    Aa(){
        cout << "Aa���캯��" << endl;
    }
};

class Bb{
protected:
    int element;
public:
    Bb(){
        cout << "Bb���캯��" << endl;
    }
};


// ��̳�
/*
    ��̳������ֲ�ͬ�̳л���ͬ����Ա����������
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
