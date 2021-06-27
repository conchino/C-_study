#include <iostream>

using namespace std;

/* 菱形继承
   类Aa 和Bb继承基类Base
   类Cc继承Aa和Bb
*/
class Base{
public:
    int m_Age;
    Base(){
        m_Age = 111;
    }
};

class Aa : public Base{
public:
    Aa(){
        m_Age = 222;
    }
};

class Bb : public Base{
public:
    Bb(){
        m_Age = 333;
    }
};

class Cc : public Aa , public Bb{
public:
    int m_Age;
    Cc(){
        m_Age = 123;
    }
};


/* 使用关键字virtual 实现[虚继承]，来解决菱形继承二义性问题
                                (多个继承类中继承的相同重复成员属性) */
class Dd : virtual public Base{
public:
    Dd(){
        m_Age = 445;
    }
};

class Ee : virtual public Base{
public:
    Ee(){
        m_Age = 555;
    }
};

class Ff : public Dd , public Ee{
};

int main()
{
    Cc cc;
    cout << cc.m_Age << endl;

    cc.m_Age = 147;
    cout << cc.Aa::m_Age << endl;
    cout << cc.Bb::m_Age << endl;

    Ff ff;
    cout << ff.m_Age << endl;

    system("pause");
    return 0;
}
