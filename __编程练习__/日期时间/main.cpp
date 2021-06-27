#include <iostream>
#include <ctime>

using namespace std;


/*  日期时间
    使用日期时间引入 <ctime> 头文件

*/
void show_time_1();
void show_time_2();

int main()
{
    show_time_2();

    system("pause");
    return 0;
}

// ctime基本的方法
void show_time_1(){

    cout << "当前时间戳: " << time(0) << "\n" << endl;    // 当前时间戳

    time_t now = time(0);

    char* dt = ctime(&now);    // 时间戳格式化
    cout << "本地日期和时间: " << dt << endl;

    // 把 now 转换为 tm 结构
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);   // 时间戳格式化
    cout << "UTC日期和时间: " << dt << endl;
}


// 格式化输出当前时间
void show_time_2(){
    time_t now = time(0);

    tm *ltm = localtime(&now);

    // 以标准格式输出当前时间
    cout << ltm->tm_year + 1900 << "-"
         << ltm->tm_mon + 1 << "-"
         << ltm->tm_mday << "  "
         << ltm->tm_hour << ":"
         << ltm->tm_min << ":"
         << ltm->tm_sec << endl;
}
