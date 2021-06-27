#include <iostream>
#include <string>


using namespace std;

class Person{
public:
    string name;
    int score;
    Person() = default;
    Person(string name,int score):name(name),score(score){}
};



void test_init(){

    // pair ʹ�ò���Ҫ����ͷ�ļ�
    pair<string, int> p("Hello",0);
    cout << p.first << " " << p.second << endl;

    pair<string, int> pp = make_pair("World", 1);
    cout << pp.first << " " << pp.second << endl;

    pair<int, Person> np(1, Person("����",100));
    cout << np.first << " " << np.second.name << " " << np.second.score << endl;

    pair<int, Person> nnp;
    nnp = make_pair(2, Person("����",99));
    cout << nnp.first << " " << nnp.second.name << " " << nnp.second.score << endl;

}


int main()
{
    test_init();

    system("pause");
    return 0;
}
