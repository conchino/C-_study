#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // 打开指定名称文件，文件名后以(|)分隔多种打开模式
    fstream fstrm("C:/Users/Cong/Desktop/Hello.txt",ios::in | ios::out | ios::ate);

    // 判断文件是否打开
    if(fstrm.is_open()) cout << "true" << endl;
    else cout << "false" << endl;

    ofstream ofstrm;
    ofstrm.open("common.txt");
    if(ofstrm) cout << "true" << endl;
    else cout << "false" << endl;

    // 关闭文件流
    fstrm.close();

    system("pause");
    return 0;
}
