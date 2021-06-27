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
//    Animal animal = {"小狗", 3};
//    ofs.write((const char *)&animal, sizeof(Animal));
//    ofs.close();


    // 读取以二进制形式写入文件的对象
    Animal animal;

    ifs.read((char *)&animal, sizeof(Animal));

    cout << "姓名: " << animal.aname << " 年龄: " << animal.aage << endl;

    ifs.close();

    system("pause");
    return 0;
}
