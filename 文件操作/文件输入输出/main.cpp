#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // ��ָ�������ļ����ļ�������(|)�ָ����ִ�ģʽ
    fstream fstrm("C:/Users/Cong/Desktop/Hello.txt",ios::in | ios::out | ios::ate);

    // �ж��ļ��Ƿ��
    if(fstrm.is_open()) cout << "true" << endl;
    else cout << "false" << endl;

    ofstream ofstrm;
    ofstrm.open("common.txt");
    if(ofstrm) cout << "true" << endl;
    else cout << "false" << endl;

    // �ر��ļ���
    fstrm.close();

    system("pause");
    return 0;
}
