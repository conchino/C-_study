#include <iostream>
#include <stdexcept>
#include <limits>

using namespace std;


struct Books{
    char title[50];
    char content[60];
    char subject[20];

};

void input_1(char c[]);

int main(){
    char c[20];
    bool b1;

    cin >> b1;
    cout << b1 << endl;
//    input_1(c);
//    cin.ignore(numeric_limits<streamsize>::max(), '\n');    // ����л�����

    system("pause");
    return 0;
}


void input_1(char c[]){
    cin >> c;
    cout << "���������: " << c << endl;
}
