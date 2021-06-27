#include <iostream>
#include <set>

using namespace std;

template <typename T>
void printSet(set<T> &st){

    for(typename set<T>::iterator it = st.begin(); it != st.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;
}


void test_init(){

    set<int> st;
    st = {1,2,3,4,5,6,6,6};

    // set ��������ֻ��insert()����
    st.insert(77);
    printSet(st);

    // ������ͬ�����ݻ�ȥ��
    st.insert(77);
    printSet(st);

    // set������Բ��������Զ�����
    st.insert(11);
    printSet(st);

}


int main()
{
    test_init();

    system("pause");
    return 0;
}
