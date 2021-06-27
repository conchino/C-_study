#include <iostream>
#include <list>
#include <string>

using namespace std;

template <typename T>
void printList(const list<T> &lst){
    for(typename list<T>::const_iterator it = lst.begin(); it != lst.end();++it){
        cout << *it << " ";
    }
    cout << endl;
}


class Person{
public:
    string name;
    int age;
    int score;
    Person(string name, int age,int score):name(name),age(age),score(score){}
};


void test_assign(){

    list<int> lt1 = {7,4,1,2,5,8,9,6,3};

    list<int> lt2;
    lt2.assign(lt1.begin(), lt1.end());
    printList(lt2);

    list<int> lt3 = lt1;
    printList(lt3);

    list<int> lt4;
    lt4.assign(10,11);
    printList(lt4);

}


void test_swap(){

    list<int> lt1(6,11);
    list<int> lt2(6,9);
    cout << "lt1: " << endl;
    printList(lt1);

    lt1.swap(lt2);
    cout << "lt1: " << endl;
    printList(lt1);
    cout << "lt2: " << endl;
    printList(lt2);

}


void test_other_opera(){
    list<int> lst1 = {1,2,3,4,5,6,7,8,9,10};
    cout << lst1.size() << endl;

    if(!lst1.empty()){
        lst1.resize(15,100);
        printList(lst1);

        lst1.resize(6);
        printList(lst1);
    }

}


void test_delete(){
    list<int> lst = {1,1,2,3,4,5,67,8,9,1,10,21};
    cout << "size: " << lst.size() << endl;
    printList(lst);

    // removeɾ����������ֵ��Ӧ��Ԫ��
    lst.remove(1);
    cout << "size: " << lst.size() << endl;
    printList(lst);

    // ��Ϊlist ֻ֧��˫�����������˲�����vector����ʹ�� erase()
    lst.erase(lst.begin());
    printList(lst);

    lst.erase(lst.begin()++);
    printList(lst);

    lst.sort();
    printList(lst);

    lst.reverse();
    printList(lst);
}


// �Ȱ������������ٰ���score����
bool Person_compare(Person &p1, Person &p2){

    if(p1.age == p2.age){
        return p1.score > p2.score;
    }
    return p1.age < p2.age;
}


void test_sort(){

    list<Person> lst;

    Person p1{"С��",19,66};
    Person p2{"С��",18,76};
    Person p3{"С��",20,88};
    Person p4{"С��",21,91};
    Person p5{"С��",19,80};

    lst.push_back(p1);
    lst.push_back(p2);
    lst.push_back(p3);
    lst.push_back(p4);
    lst.push_back(p5);

    for(list<Person>::iterator it = lst.begin(); it != lst.end(); ++it){
        cout << (*it).name << "  " << (*it).age << "  " << (*it).score << endl;
    }

    cout << "\n-------------------------------------\n" << endl;

    lst.sort(Person_compare);

    for(list<Person>::iterator it = lst.begin(); it != lst.end(); ++it){
        cout << (*it).name << "  " << (*it).age << "  " << (*it).score << endl;
    }

}





// ����ָ��ı�ֵ
void change_value(int *p, int a){
    *p = a;
}

// ���ô��ݸ�ֵ
void change_ref_value(int &p,int num){
    p = num;
}


int main()
{
//    test_swap();

    // ָ�봫ֵ����
    int a = 123;
    int *p = &a;
    change_value(p, 321);
    cout << *p << endl;

    // ���øı�ֵ
    change_ref_value(a, 999);
    cout << a << endl;

    test_sort();

    system("pause");
    return 0;
}
