#include <iostream>
#include <string>
#include <map>

using namespace std;


template <typename T,typename Y,class C>
void printMap(map<T,Y,C> &m){
    for(typename map<T,Y,C>::iterator it = m.begin(); it != m.end();++it){
        cout << "key: " << it->first << " | value: " << it->second << endl;
    }
}


void test_map_base(){
    // c++11 ֮���map��ֵ��ʽ
    map<string,int> mp = {
                    {"nanami",1},
                    {"takahara",2},
                    {"murasame",3}};

    // ��ֵ����[]
    // ����Ѿ����ڼ�ֵ���������ֵ�޸Ĳ��������û�����²���
    mp["mashiro"] = 6;

    // insert��ֵ���ֵ����
    // ʹ��pair���飬��Ϊmap����Ԫ�ض���pair��
    mp.insert(pair<string, int>("sorata",5));
    // ʹ��value_type
    mp.insert(map<string, int>::value_type("mashimi",4));


    pair<map<string,int>::iterator,bool> ret;
    ret = mp.insert(pair<string, int>("mafuyu",7));
    if(ret.second == false){
        cout << "����ʧ�ܣ�ֵ�Ѿ�����!" << endl;
        cout << "ֵΪ: " << ret.first->second << endl;
    }


    // ��ָ��λ�ò���
    map<string,int>::iterator it = mp.begin();
    mp.insert(it, pair<string,int>("ichiri",8));

    cout << "map�Ĵ�С: " << mp.size() << endl;

    // �������� map
    for(map<string,int>::iterator it = mp.begin(); it != mp.end();++it){
        cout << "key: " << it->first << " | value: " << it->second << endl;
    }


    // mapɾ��  erase()
    // ������ɾ��
    map<string,int>::iterator iter = mp.find("takahara");
    mp.erase(iter);

    // ָ��keyɾ��
    bool flag = mp.erase("sorata");
    if(flag){
        cout << "ɾ���ɹ�!" << endl;
    }else cout << "ɾ��ʧ��!" << endl;

    printMap(mp);

    // count() ͳ��Ԫ�ظ�������Ϊmap��key���ظ������ֻ����1��0����multimap�п����Ը�Щ
    cout << mp.count("mafuyu") << endl;
    if(mp.count("mafuyu")){
        cout << "mafuyu ������map��..." << endl;
    }

}


/* map ����������� */

class MyCompare{
public:
    bool operator()(int v1,int v2){
        return v1 > v2;
    }
};


void test_map_sort(){

    map<int, int, MyCompare> mp;

    for(int i = 0;i < 10;i++){
        mp.insert(map<int, int>::value_type(i+1,0));
    }
    printMap(mp);

}



int main()
{
    test_map_sort();

    system("pause");
    return 0;
}
