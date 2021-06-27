#include <iostream>
#include <string>

using namespace std;

// ����
class Animal{
    string name;
    int age;
public:
    Animal(string name);
    Animal(string name,int age);
    void eat();
    string getName();
    void setName(string name);
};


// ��public��ʽ�̳У�Ĭ��Ϊprivate
// Dog��̳�Animal����
class Dog : public Animal{
    string typeName;
public:

    // �����๹�캯�������ð��(:), Ȼ����ϸ���Ĺ��캯��
    // ����Ĺ��캯��������ʱ������Ĺ��캯��Ҳ�ᱻ����
    Dog(string typeName) : Animal("����"){
        this->typeName = typeName;
    }
    string getTypeName();
    void bark();
};


Animal :: Animal(string name){
    this->name =name;
}

Animal :: Animal(string name,int age){
    this->name = name;
    this->age = age;
}

void Animal :: eat(){
    cout << this->name << " : �Զ���"<< endl;
}

string Animal :: getName(){
    return this->name;
}

void Animal :: setName(string name){
    this->name = name;
}

string Dog :: getTypeName(){
    return this->typeName;
}

void Dog :: bark(){
    cout << "dog barking..." << endl;
}

int main()
{
    Animal ani_dog("С��");
    ani_dog.eat();

    Dog dog("Ȯ��");
    cout << dog.getName() << "\t" << dog.getTypeName() << endl;

    system("pause");
    return 0;
}
