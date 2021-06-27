#include <iostream>

using namespace std;

/* ��ģ����̳� */
template <class T>
class Base{
public:
    Base() = default;
    Base(T var):variable_1(var){}
    T variable_1;
};

// ����Ϊһ����ʱ����Ҫָ������ģ���е�T����
class Son : public Base<int>{
public:
    int data;
    Son() = default;
    Son(int data):data(data){}
    Son(int data, int var):data(data),Base(var){}
};


// ����Ϊģ��ʱ���������ָ�������е�T����
template <class T, class Y>
class TempSon : public Base<T>{
public:
    Y m;
    TempSon(Y y):m(y){}
};


void test_1(){
    Son son = {22, 11};
    cout << son.data << " " << son.variable_1 << endl;
}


void test_2(){
    TempSon<string, int> ts = {18};
    ts.variable_1 = "����";
    cout << ts.variable_1 << " " << ts.m << endl;
}

int main()
{

    test_2();

    system("pause");
    return 0;
}
