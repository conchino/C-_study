#include <iostream>
#include <ctime>

using namespace std;


/*  ����ʱ��
    ʹ������ʱ������ <ctime> ͷ�ļ�

*/
void show_time_1();
void show_time_2();

int main()
{
    show_time_2();

    system("pause");
    return 0;
}

// ctime�����ķ���
void show_time_1(){

    cout << "��ǰʱ���: " << time(0) << "\n" << endl;    // ��ǰʱ���

    time_t now = time(0);

    char* dt = ctime(&now);    // ʱ�����ʽ��
    cout << "�������ں�ʱ��: " << dt << endl;

    // �� now ת��Ϊ tm �ṹ
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);   // ʱ�����ʽ��
    cout << "UTC���ں�ʱ��: " << dt << endl;
}


// ��ʽ�������ǰʱ��
void show_time_2(){
    time_t now = time(0);

    tm *ltm = localtime(&now);

    // �Ա�׼��ʽ�����ǰʱ��
    cout << ltm->tm_year + 1900 << "-"
         << ltm->tm_mon + 1 << "-"
         << ltm->tm_mday << "  "
         << ltm->tm_hour << ":"
         << ltm->tm_min << ":"
         << ltm->tm_sec << endl;
}
