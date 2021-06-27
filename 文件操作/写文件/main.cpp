#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*  д���ļ�
    ofstream ����
    ofstream << "д������";
*/

int main()
{
    /*  д���ļ�  */
    // �����ļ������󣬴��ļ�
    ofstream ofs("Hello.txt", ios::out | ios::app);
    /*  ����
        ofstream ofs;
        ofs.open("C://Users//Cong//Desktop//Hello.txt", ios::out | ios::app);
    */

    // д������
    ofs << "����д���ļ�������..." << endl;
    ofs << "д��ĵڶ�������";

    // �ر��ļ�������
    ofs.close();


    /*  ��ȡ�ļ�  */
    ifstream ifs("Hello.txt", ios::in | ios::binary);

    if(ifs.good()){
        cout << "[�ļ��򿪳ɹ�]" << endl;
    }
    if(ifs.bad()){
        cout << "[�ļ���ʧ��]" << endl;
    }

    if(ifs.peek() == EOF){
        cout << "�ļ�Ϊ�գ���" << endl;
    }


    //  ���ļ�ָ��ӵ�ǰλ�����ļ�ĩ�����ƶ�10���ֽ�(һ�����������ֽ�)
    ifs.seekg(10,ios::cur);

    // ��ȡ�ļ�����(�������з��Ϳո�)
    string str;
    char ch;
    while(ifs.get(ch))
        str += ch;
    if(ifs.eof()){
        cout << "[��ȡ����]" << endl;
    }
    cout << "[�ļ�����]\n" << str << endl;
    system("pause");
    return 0;
}
