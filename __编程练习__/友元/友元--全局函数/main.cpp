#include <iostream>
#include <string>

using namespace std;


class Building{

    // ��Ԫ��������
    // ��Ԫȫ�ֺ�����Ҫ���ʵ�����ʹ��friend��������������ʱ����Ҫfriend�ؼ���
    friend void normalMethod(Building &build);

private:
    string priVar;

public:
    string pubVar;

    // ���캯��
    Building(){
        pubVar = "���б���";
        priVar = "˽�б���";
    }

};

// ȫ�ֺ�������
void normalMethod(Building &build){
    cout << "���б�������: " <<  build.pubVar << "\n��Ԫ����˽�б���: " << "   " << build.priVar << endl;
}

int main()
{
    Building build;
    normalMethod(build);

    return 0;
}
