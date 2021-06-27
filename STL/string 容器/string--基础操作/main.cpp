#include <iostream>
#include <string>

using namespace std;


/* string 赋值 */
void test_assign(){

    // 使用 =号赋值
    string str;

    str = "Hello World";
    cout << str << endl;

    str = 'a';
    cout << str << endl;

    // 使用成员函数assign()赋值
    string ss;
    ss.assign("成员函数赋值");
    cout << ss << endl;

    ss.assign(ss,2);
    cout << ss << endl;

    string s_str = "abcdefgh";
    // assign(const char *ch, int n) { 把char*前n个字符赋给字符串 };
    // 但是如果传入的值是string的话则会变成  { 将前面n个字符删去，留下剩余字符 }
    ss.assign("abcdefgh", 6);
    cout << ss << endl;

    ss.assign(1, 'a');      // assign(int n, char c)
    cout << ss << endl;

    cout << "\n--------------------------------------------\n" << endl;
}


/* string 拼接 */
void test_append(){

    // +=拼接
    string str1 = "字符串1...";
    str1 += "字符串2...";
    cout << str1 << endl;

    // append() 成员函数
    string str2 = "murasame";
    str2.append("天下第一");
    cout << str2 << endl;

    // append(const string &str, int begin, int end) 截取从开始位置到结束位置的子字符串
    str2.append("abcdefgh", 0, 3);
    cout << str2 << endl;

    cout << "\n--------------------------------------------\n" << endl;
}


/* 字符串查找和替换 */
void test_find_replace(){

    // string查找

    /* find查找 */
    string str = "abcdefgh,,1234567";
    int pos;    // 记录查找位置

    // int find(const string &s, int begin);            // 查找的起始位置下标
    // int find(const char *ch, int begin, int end);    // 查找的起始位置下标和结束位置下标
    pos = str.find(",");
    cout << "find pos = " << pos << endl;

    pos = str.find('z');    // 查找失败返回-1
    cout << pos << endl;

    /* rfind 查找 */
    // rfind(reverse find)
    // rfind 查找字符串最后一次出现位置
    pos = str.rfind(",");
    cout << "rfind pos = " << pos << endl;



    /* 替换 */
    string ss = "abcdabcdabcdabcd";
    ss.replace(1,3,"@@@@@@");    // replace(int begin, int length, string &str)  替换从begin位置开始的，长度为length的字符串
    cout << ss << endl;

    cout << "\n--------------------------------------------\n" << endl;
}


/* 字符串比较 */
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


/* 字符存取 */
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


/* 字符串插入与删除 */
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


/* string 子串截取 */
void test_substr(){

    // substr() 函数
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
