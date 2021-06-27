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
        cout << "文件打开失败!" << endl;
    }

    // 使用write()函数写入文件内容
    ofs.write("Hello World", sizeof("Hello World")-1);

    char *p = "\nHello, 你好, 这里是写入的内容!\n";

    // strlen()函数 计算字符串长度；包含在string.h头文件中
    ofs.write(p, strlen(p));
    cout << strlen(p) << endl;

    string pp = p;
    cout << pp.length() << endl;

    Animal animal = {"小狗", 3};
    ofs.write((const char *)&animal, sizeof(Animal));

    ofs.close();

    system("pause");
    return 0;
}
