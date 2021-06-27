#include <iostream>
#include <string>
#include <sstream>
#include <string.h>


using namespace std;

void InputMethod_1();
void InputMethod_2();
void InputMethod_3();


int main()
{

    InputMethod_3();


    system("pause");
    return 0;
}


void InputMethod_1(){

    string str_line;

    getline(cin,str_line);

    stringstream sstr(str_line);
    string str_tmp;

    cout << "str_line:  " << str_line << endl;

    while(getline(sstr, str_tmp, ',')){
        cout << "str_tmp: " << str_tmp << endl;
    }
}


void InputMethod_2(){

    string str_line;

    getline(cin,str_line);

    // strtok() 根据指定分隔符，分割字符串
    string str = strtok((char*)str_line.data(), "--");    // string转 char* : (char*)string.data()


    while(!str.empty()){
        cout << str << endl;
        str = strtok(NULL, "--");
    }
}


void InputMethod_3(){

    int n = 2, m = 2;
    cin >> n >> m;

    // 定义二维数组指针
    int **arr = new int* [n];
    for(int i = 0;i < n;i++){
        arr[i] = new int[m];
    }
//    int (* arr)[5] = new int[n][5];

    // 读取数据
    for(int i = 0;i < n; i++){
        for(int j = 0;j < m;j++){
            cin >> arr[i][j];
        }
    }

    // 输出数据
    for(int i = 0;i < n; i++){
        for(int j = 0;j < m;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "---------------------------------------------" << endl;

//    int ia[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
//    for(auto &p : ia){
//        for(auto &q : p){
//            cout << q << "  ";
//        }
//    }

//    for (int (*p)[4] = ia;p != ia+3;p++){
//        for (int *q = *p;q != *p+4;q++){
//            cout << *q << endl;
//        }
//    }


    // 二维数组指针释放空间
    for(int i = 0;i < n; i++)
        delete []arr[i];
    delete []arr;
}

