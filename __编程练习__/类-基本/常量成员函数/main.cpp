#include <iostream>

using namespace std;

class Test{
    int intValue;
    mutable int numValue;    // ����mutable����const����, �ڳ�������Ҳ�ɱ�
public:
//    Test();
    Test(int intValue);
    int getValue() const;
    int getValue_2();
    void setValue() const;
};

// ���幹�캯����ʹ�ó�ʼ���б�
//Test::Test():intValue(11){
//    cout << "Test���ʼ�� : " << Test::intValue << endl;
//}


// �вι��캯������û���޲ι��캯����������Ĭ�ϳ�ʼ��ֵ
Test::Test(int intValue = 22){
    this->intValue = intValue;
    cout << "Test�вι��캯�� : " << Test::intValue << endl;
}

int Test::getValue_2(){
    return intValue;
}

// ���峣����Ա����
int Test::getValue() const{
    return intValue;
}


void Test::setValue() const{
//    this->intValue = 111;    // �������޷��޸�һ�����
    this->numValue = 123;      // ����ǰ����mutable���Σ����ڳ�������Ҳ���޸�
}


int main()
{
    Test tt;

    const Test tt1(33);
//    cout << tt1.getValue_2() << endl;    // �����Ƿ�������ֻ�ܷ��ʳ����ͳ�Ա����

    system("pause");
    return 0;
}
