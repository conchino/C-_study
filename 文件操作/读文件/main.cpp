#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream ifs("G://CppFile//文件操作//写文件//Hello.txt", ios::in);

    if(ifs.is_open()){
        cout << "[文件打开成功]" << endl;
    }

    string str;
    while(getline(ifs, str)){
        cout << str << endl;
    }

    system("pause");
    return 0;
}
