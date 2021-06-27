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
    // c++11 之后的map赋值方式
    map<string,int> mp = {
                    {"nanami",1},
                    {"takahara",2},
                    {"murasame",3}};

    // 单值插入[]
    // 如果已经存在键值，则会作赋值修改操作，如果没有则新插入
    mp["mashiro"] = 6;

    // insert单值与多值插入
    // 使用pair对组，因为map所有元素都是pair型
    mp.insert(pair<string, int>("sorata",5));
    // 使用value_type
    mp.insert(map<string, int>::value_type("mashimi",4));


    pair<map<string,int>::iterator,bool> ret;
    ret = mp.insert(pair<string, int>("mafuyu",7));
    if(ret.second == false){
        cout << "插入失败，值已经存在!" << endl;
        cout << "值为: " << ret.first->second << endl;
    }


    // 在指定位置插入
    map<string,int>::iterator it = mp.begin();
    mp.insert(it, pair<string,int>("ichiri",8));

    cout << "map的大小: " << mp.size() << endl;

    // 迭代遍历 map
    for(map<string,int>::iterator it = mp.begin(); it != mp.end();++it){
        cout << "key: " << it->first << " | value: " << it->second << endl;
    }


    // map删除  erase()
    // 迭代器删除
    map<string,int>::iterator iter = mp.find("takahara");
    mp.erase(iter);

    // 指定key删除
    bool flag = mp.erase("sorata");
    if(flag){
        cout << "删除成功!" << endl;
    }else cout << "删除失败!" << endl;

    printMap(mp);

    // count() 统计元素个数，因为map的key不重复，因此只返回1或0；在multimap中可用性高些
    cout << mp.count("mafuyu") << endl;
    if(mp.count("mafuyu")){
        cout << "mafuyu 存在于map中..." << endl;
    }

}


/* map 容器排序规则 */

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
