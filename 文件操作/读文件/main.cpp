#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream ifs("G://CppFile//�ļ�����//д�ļ�//Hello.txt", ios::in);

    if(ifs.is_open()){
        cout << "[�ļ��򿪳ɹ�]" << endl;
    }

    string str;
    while(getline(ifs, str)){
        cout << str << endl;
    }

    system("pause");
    return 0;
}
