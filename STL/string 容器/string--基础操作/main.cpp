#include <iostream>
#include <string>

using namespace std;


/* string ��ֵ */
void test_assign(){

    // ʹ�� =�Ÿ�ֵ
    string str;

    str = "Hello World";
    cout << str << endl;

    str = 'a';
    cout << str << endl;

    // ʹ�ó�Ա����assign()��ֵ
    string ss;
    ss.assign("��Ա������ֵ");
    cout << ss << endl;

    ss.assign(ss,2);
    cout << ss << endl;

    string s_str = "abcdefgh";
    // assign(const char *ch, int n) { ��char*ǰn���ַ������ַ��� };
    // ������������ֵ��string�Ļ������  { ��ǰ��n���ַ�ɾȥ������ʣ���ַ� }
    ss.assign("abcdefgh", 6);
    cout << ss << endl;

    ss.assign(1, 'a');      // assign(int n, char c)
    cout << ss << endl;

    cout << "\n--------------------------------------------\n" << endl;
}


/* string ƴ�� */
void test_append(){

    // +=ƴ��
    string str1 = "�ַ���1...";
    str1 += "�ַ���2...";
    cout << str1 << endl;

    // append() ��Ա����
    string str2 = "murasame";
    str2.append("���µ�һ");
    cout << str2 << endl;

    // append(const string &str, int begin, int end) ��ȡ�ӿ�ʼλ�õ�����λ�õ����ַ���
    str2.append("abcdefgh", 0, 3);
    cout << str2 << endl;

    cout << "\n--------------------------------------------\n" << endl;
}


/* �ַ������Һ��滻 */
void test_find_replace(){

    // string����

    /* find���� */
    string str = "abcdefgh,,1234567";
    int pos;    // ��¼����λ��

    // int find(const string &s, int begin);            // ���ҵ���ʼλ���±�
    // int find(const char *ch, int begin, int end);    // ���ҵ���ʼλ���±�ͽ���λ���±�
    pos = str.find(",");
    cout << "find pos = " << pos << endl;

    pos = str.find('z');    // ����ʧ�ܷ���-1
    cout << pos << endl;

    /* rfind ���� */
    // rfind(reverse find)
    // rfind �����ַ������һ�γ���λ��
    pos = str.rfind(",");
    cout << "rfind pos = " << pos << endl;



    /* �滻 */
    string ss = "abcdabcdabcdabcd";
    ss.replace(1,3,"@@@@@@");    // replace(int begin, int length, string &str)  �滻��beginλ�ÿ�ʼ�ģ�����Ϊlength���ַ���
    cout << ss << endl;

    cout << "\n--------------------------------------------\n" << endl;
}


/* �ַ����Ƚ� */
void test_compare(){
    string str1 = "string";
    string str2 = "string_s";
    string str3 = "strinz_sss";
    string str4 = "string";

    int flag = str1.compare(str2);
    cout << flag << endl;

    flag = str1.compare(str3);
    cout << flag << endl;

    flag = str1.compare(str4);
    cout << flag << endl;

    cout << "\n--------------------------------------------\n" << endl;
}


/* �ַ���ȡ */
void test_charAt(){

    string str = "abcdefg";

    str[0] = 'z';
    str.at(1) = 'y';

    for(int i = 0;i < str.size();i++){
        cout << str[i] << " ";
    }
    cout << endl;

    cout << "\n--------------------------------------------\n" << endl;
}


/* �ַ���������ɾ�� */
void test_insert_erase(){

    string str = "hello";

    str.insert(1,"@@@");
    cout << str << endl;

    str.insert(1,3,'%');
    cout << str << endl;

    str.erase(4,3);
    cout << str << endl;

    cout << "\n--------------------------------------------\n" << endl;
}


/* string �Ӵ���ȡ */
void test_substr(){

    // substr() ����
    string str = "hello,world";
    string sub_str = str.substr(0,5);
    cout << sub_str << endl;

}


int main()
{
    test_substr();

    system("pause");
    return 0;
}
