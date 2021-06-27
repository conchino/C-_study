#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*  写入文件
    ofstream 对象
    ofstream << "写入内容";
*/

int main()
{
    /*  写入文件  */
    // 创建文件流对象，打开文件
    ofstream ofs("Hello.txt", ios::out | ios::app);
    /*  或者
        ofstream ofs;
        ofs.open("C://Users//Cong//Desktop//Hello.txt", ios::out | ios::app);
    */

    // 写入内容
    ofs << "这是写入文件的内容..." << endl;
    ofs << "写入的第二段内容";

    // 关闭文件流对象
    ofs.close();


    /*  读取文件  */
    ifstream ifs("Hello.txt", ios::in | ios::binary);

    if(ifs.good()){
        cout << "[文件打开成功]" << endl;
    }
    if(ifs.bad()){
        cout << "[文件打开失败]" << endl;
    }

    if(ifs.peek() == EOF){
        cout << "文件为空！！" << endl;
    }


    //  让文件指针从当前位置向文件末方向移动10个字节(一个中文两个字节)
    ifs.seekg(10,ios::cur);

    // 读取文件内容(包括换行符和空格)
    string str;
    char ch;
    while(ifs.get(ch))
        str += ch;
    if(ifs.eof()){
        cout << "[读取结束]" << endl;
    }
    cout << "[文件内容]\n" << str << endl;
    system("pause");
    return 0;
}
