#include <iostream>
#include <string>

using namespace std;

// 基类
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


// 以public方式继承，默认为private
// Dog类继承Animal基类
class Dog : public Animal{
    string typeName;
public:

    // 在子类构造函数后加上冒号(:), 然后加上父类的构造函数
    // 子类的构造函数被调用时，父类的构造函数也会被调用
    Dog(string typeName) : Animal("狗狗"){
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
    cout << this->name << " : 吃东西"<< endl;
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
    Animal ani_dog("小黄");
    ani_dog.eat();

    Dog dog("犬类");
    cout << dog.getName() << "\t" << dog.getTypeName() << endl;

    system("pause");
    return 0;
}
