#include <iostream>
#include <fstream>

using namespace std;

class Animal{
public:
    char aname[64];
    int aage;
};


int main()
{
    ifstream ifs("Hello.txt", ios::in | ios::binary);
//    ofstream ofs("Hello.txt", ios::out | ios::binary);
//
//    Animal animal = {"С��", 3};
//    ofs.write((const char *)&animal, sizeof(Animal));
//    ofs.close();


    // ��ȡ�Զ�������ʽд���ļ��Ķ���
    Animal animal;

    ifs.read((char *)&animal, sizeof(Animal));

    cout << "����: " << animal.aname << " ����: " << animal.aage << endl;

    ifs.close();

    system("pause");
    return 0;
}
