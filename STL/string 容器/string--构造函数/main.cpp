#include <iostream>
#include <string>

using namespace std;

/* string 构造函数 */
/*
    string();
    string (const string& str);
    string (const string& str, size_t pos, size_t len = npos);
    string (const char* s);
    string (const char* s, size_t n);
    string (size_t n, char c);
*/

void test_1(){

    const char *ch = "hello world";

    string s1(ch);
    cout << s1 << endl;

    string s2(s1);
    cout << s2 << endl;

    string s3(6,'a');   // 以6个a作为字符串
    cout << s3 << endl;

    const char *ch1 = "hahahaha";
    string s4(ch1, 3);      // 初始化字符，初始化长度
    cout << s4 << endl;
}


int main()
{
    test_1();

    system("pause");
    return 0;
}
