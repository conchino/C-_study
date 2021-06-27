#include <iostream>
#include <string>
#include <stdexcept>
#include <limits>


using namespace std;

int main()
{
    using namespace std;

    string str;
    cout << "输入字符串str: \n";
    cin >> str;
    cout << "str  ==  " << str << endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
//    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');     // 清空缓冲区当前行
//    cin.ignore(std::numeric_limits<std::streamsize>::max());           // 清空缓冲区所有
//    cin.sync();     // 清空缓冲区

//    string str_1;
    char str_1[20];
    cout << "//--------------------------------------//\n" << "输入str_1: " << endl;
    cin.getline(str_1, 3+1);   // str_1接收10个字符输入, 该方法不能使用string类型变量作为参数
    cout << "str_1 == " << str_1 << endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "//--------------------------------------//\n";
    string str_2;
    cout << "输入字符串str_2 : \n";
    getline(cin, str_2);
    cout << "str_2 == " << str_2 << endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    bool b1;
    cout << "输入bool类型变量值:  " << endl;
    cin >> b1;
    cout << "bool 变量值为 : " << b1 << endl;

    return 0;
}
