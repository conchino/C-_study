#include <iostream>
#include <string>

using namespace std;


void myMethod(int a){
    cout << "��ͨ��������..." << endl;
}

template <typename T>
void myMethod(T a){
    cout << "����ģ�����..." << endl;
}



int main()
{
    // ȷ�����ͣ����ȵ�����ͨ����
    myMethod(123);

    // ͨ��<>ǿ�Ƶ��ú���ģ��
    myMethod<>(123);

    // ����ģ������ƥ��
    myMethod('A');


    string str = "abcdefg1234567";
    cout << str << endl;

    // ����������
    for(auto it = str.begin(); it != str.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}
