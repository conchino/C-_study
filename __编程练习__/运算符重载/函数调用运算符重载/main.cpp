#include <iostream>
#include <string>

using namespace std;

class PrintClass{
    string name;
public:
    PrintClass(){
        this->name = "Ĭ������";
    }
    PrintClass(string name){
        this->name = name;
    }
    // �����������������
    string operator()(string test){
        return "������["+name+"]�ĺ����������������..."+"\t����: "+test;
    }
};


int main()
{
    PrintClass ptc("��������");

    // ʹ�ö�����ã��º���
    cout << ptc("��ð�!") << endl;

    // ������������
    cout << PrintClass("nanami")("�����������ö���") << endl;

    system("pause");
    return 0;
}
