#include <iostream>
#include <string>
#include <stdexcept>
#include <limits>


using namespace std;

int main()
{
    using namespace std;

    string str;
    cout << "�����ַ���str: \n";
    cin >> str;
    cout << "str  ==  " << str << endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
//    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');     // ��ջ�������ǰ��
//    cin.ignore(std::numeric_limits<std::streamsize>::max());           // ��ջ���������
//    cin.sync();     // ��ջ�����

//    string str_1;
    char str_1[20];
    cout << "//--------------------------------------//\n" << "����str_1: " << endl;
    cin.getline(str_1, 3+1);   // str_1����10���ַ�����, �÷�������ʹ��string���ͱ�����Ϊ����
    cout << "str_1 == " << str_1 << endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "//--------------------------------------//\n";
    string str_2;
    cout << "�����ַ���str_2 : \n";
    getline(cin, str_2);
    cout << "str_2 == " << str_2 << endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    bool b1;
    cout << "����bool���ͱ���ֵ:  " << endl;
    cin >> b1;
    cout << "bool ����ֵΪ : " << b1 << endl;

    return 0;
}
