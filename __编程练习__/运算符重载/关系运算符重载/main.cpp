#include <iostream>
#include <string>

using namespace std;

class Person{
    int age;
    string name;

    friend ostream &operator<<(ostream &os, const Person &person);

    friend istream &operator>>(istream &os, Person &person);

public:
    Person();
    Person(int age,string name);
    string getName(){
        return name;
    }

    bool operator==(const Person &p);
    bool operator!=(const Person &p);

};

Person :: Person(){
    this->age = 0;
    this->name = "默认name";
}

Person :: Person(int age,string name){
    this->age = age;
    this->name = name;
}

ostream &operator<<(ostream &os, const Person &person){
    os << "age: " << person.age << " || name: " << person.name << endl;
    return os;
}

istream &operator>>(istream &os, Person &person){
    os >> person.age >> person.name;
    return os;
}

bool Person :: operator==(const Person &p){
    return (this->age == p.age);
}

bool Person :: operator!=(const Person &p){
    return (this->age != p.age);
}

int main(int argc, char *argv[])
{
    Person p1(18, "aymi");
    Person p2(20, "nanami");

    if(p1 == p2){
        cout << p1.getName()+" 与 "+p2.getName()+" 年龄相等" << endl;
    }else cout << p1.getName()+" 与 "+p2.getName()+" 年龄不等" << endl;

    system("pause");
    return 0;
}
