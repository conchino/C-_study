#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

/* vector�������������ʹ�� */

// �Զ���ı��ص�����, ����for_each�ص�
void myPrint(int val){
    cout << val << " ";
}


void test_1(){
    vector<int> vct(3,1);  // ��ʼ��vector���������ɳ�ʼ��СΪ3��1��vector��int�Ͷ���

    // ���������������
    vct.push_back(2);
    vct.push_back(3);
    vct.push_back(4);
    vct.push_back(5);

    // ʹ��vector����������vector����
    // ����������ʱ����Ҫָ������������Ӧ�ĵ����������뷺������
    vector<int>::iterator bit = vct.begin();    // ��ʼ��������ָ�������е�һ��Ԫ�أ�
    vct.push_back(6);
    vct.push_back(7);
    vector<int>::iterator eit = vct.end();      // ������������ָ�����������һ��Ԫ�ص���һ��λ��(һ�������ڵ�ֵ)

    // ������ʽһ
    while(bit != eit){
        cout << *bit << " ";    //ʹ�õ�����ȡ���ò���(*)ȡ����������Ӧ��ֵ  (������ָ��ȡֵ����)
        bit++;
    }
    cout << endl;


    // ������ʽ�� (�Ƽ�)
    for(vector<int>::iterator it = vct.begin(); it != vct.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;


    // ������ʽ��  STL�ṩ�ı����㷨(for_each)(��Ҫͷ�ļ�<algorithm>)
    for_each(vct.begin(),vct.end(),myPrint);    // �ص���myPrint����
    cout << endl;


    // �����������Ҫ��������� reverse_iterator, ����vector.rbegin() ��������� vector.rend();
    // vector.rbegin() ָ��vector�������һ��Ԫ�أ�vector.rend() ָ����Ԫ�ص�ǰһ��λ��;
    for(vector<int>::reverse_iterator it = vct.rbegin(); it != vct.rend(); ++it){
        cout << (*it) << " ";
    }
    cout << endl;

}




/* vecotr����Զ����������� */

class Person{
    // ������������
    friend ostream &operator<<(ostream &os, Person &p){
        os << "name: " << p.name << " age: " << p.age;
        return os;
    }
public:
    string name;
    int age;
    // �����ж�����ȫ����Ĭ�ϲ����Ĺ��캯���󣬲����ٶ������ع��캯��
    Person(int age = 11,string name = "xxx"):name(name),age(age){}
};


// vector �����Զ�����������
void test_2(){

    vector<Person> vctp;

    for(int i = 0;i < 3;i++){
        Person p;
        vctp.push_back(p);
    }

    for(vector<Person>::iterator it = vctp.begin(); it != vctp.end(); it++){
        cout << *it << " " << endl;
    }

}


// vector ����ָ������
void test_3(){

    vector<Person *> vctp;

    for(int i = 0;i < 5;i++){
        Person p;
        vctp.push_back(&p);
    }

    for(vector<Person *>::iterator it = vctp.begin(); it != vctp.end(); ++it){
        cout << (*(*it)).name << "   |   " << (*(*it)).age << endl;       // ���� (*it)->name ����ʽ
    }
}


/* vector ����Ƕ�� */
void test_4(){

    vector<vector<int>> vvct;

    for(int i = 0; i < 5;i++){
        vector<int> vct(5,i+1);  // ��ʼ������Ϊ���i+1Ԫ�ص�vector
        vvct.push_back(vct);
    }

    // Ƕ��vector�ĵ�����
    // ������������ڵ������vector�������ڲ�С���������ڵ����ڲ�vectorԪ��
    for(vector<vector<int>>::iterator vit = vvct.begin(); vit != vvct.end(); ++vit){
        for(vector<int>::iterator it = (*vit).begin(); it != (*vit).end(); ++it){
            cout << *it << " ";
        }
        cout << endl;
    }

}



void test_5(){

    vector<int> vct;
    for(int i = 0;i < 6;i++){
        vct.push_back(i+1);
    }

    for(int i = 0;i < 6;i++){
        cout << vct[i] << " ";
    }
    cout << endl;

    for(int i = 0;i < 6;i++){
        cout << vct.at(i) << " ";
    }
    cout << endl;

    // �±���� vector[λ��]��������λ�õĺ�����
    // at����vector.at(λ��)�������λ�ú����Լ��
//    cout << vct.at(66) << endl;
//    cout << vct[66] << endl;
}



int main()
{

    test_5();

    system("pause");
    return 0;
}
