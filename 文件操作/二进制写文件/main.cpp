#include <iostream>
#include <fstream>
#include <string>
#include <string.h>

using namespace std;


class Animal{
public:
    char aname[64];
    int aage;
};


int main()
{
    ofstream ofs("Hello.txt", ios::binary | ios::out);
    if( !ofs.is_open()){
        cout << "�ļ���ʧ��!" << endl;
    }

    // ʹ��write()����д���ļ�����
    ofs.write("Hello World", sizeof("Hello World")-1);

    char *p = "\nHello, ���, ������д�������!\n";

    // strlen()���� �����ַ������ȣ�������string.hͷ�ļ���
    ofs.write(p, strlen(p));
    cout << strlen(p) << endl;

    string pp = p;
    cout << pp.length() << endl;

    Animal animal = {"С��", 3};
    ofs.write((const char *)&animal, sizeof(Animal));

    ofs.close();

    system("pause");
    return 0;
}
