#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename T>
void printVector(vector<T> v){
    for(typename vector<T>::iterator it = v.begin(); it != v.end();++it){
        cout << *it << " ";
    }
    cout << endl;
}



// ��ֵ
void test_assign(){
    vector<int> vct1 = {1,2,3,4,5};
    printVector(vct1);

    // �ȺŸ�ֵ
    vector<int> vct2 = vct1;
    printVector(vct2);

    // assign(v.begin(),v.end()) ������ֵ
    vector<int> vct3;
    vct3.assign(vct1.begin(), vct1.end());
    printVector(vct3);


    // assign(n .typeVal)
    vector<int> vct4;
    vct4.assign(5, 10);
    printVector(vct4);
}


/* vector��ȡ�����ʹ�С */
void test_size_capacity(){
    vector<int> vct;

    for(int i = 0;i < 10;i++){
        vct.push_back(i+1);
    }


    if(vct.empty()){
        cout << "vectorΪ��..." << endl;
    }else{
        cout << "vector ��Ϊ��..." << endl;
        cout << "capacity = " << vct.capacity() << endl;
        cout << "size = " << vct.size() << endl;
        printVector(vct);
    }

    // �����趨������С
    vct.resize(15, 6);
    printVector(vct);

    vct.resize(17);
    printVector(vct);

}


/*  vector����ɾ������ */
void test_insert_delete(){
    vector<int> vct;
    for(int i = 0;i < 10;i++){
        vct.push_back(i+1);
    }
    printVector(vct);

    // ʹ�õ�������ͷ������ֵ
    vct.insert(vct.begin(), 0);
    printVector(vct);

    // ��ͷ������n��ֵ
    vct.insert(vct.begin(),3,12);
    printVector(vct);

    // ɾ��������ָ���Ԫ��
    vct.erase(vct.begin());
    printVector(vct);

    // ɾ��������ָ�������Ԫ��
    vct.erase(vct.begin(), vct.begin()+2);
    printVector(vct);

    // �������
    vct.clear();
    if(vct.empty()){
        cout << "vector �����������" << endl;
    }
}


// vectorԪ�ش�ȡ
void test_getElement(){

    vector<int> vct;
    for(int i = 0;i < 6;i++){
        vct.push_back(i+1);
    }

    // operator[]
    for(int i = 0;i < vct.size(); i++){
        cout << vct[i] << " ";
    }
    cout << endl;

    // at(index)
    for(int i = 0;i < vct.size();i++){
        cout << vct.at(i) << " ";
    }
    cout << endl;

    // front()
    cout << "��һ��Ԫ��Ϊ: " << vct.front() << endl;
    // back()
    cout << "���һ��Ԫ��Ϊ: " << vct.back() << endl;

}



// ��������
void test_swap(){

    vector<int> vct;
    for(int i = 0;i < 6;i++){
        vct.push_back(i+1);
    }
    printVector(vct);

    vector<int> v;
    for(int i = 6;i > 0;i--){
        v.push_back(i);
    }
    printVector(v);

    vct.swap(v);
    printVector(vct);

}



// vector ������Ԥ���ռ�
void test_reserve(){

    vector<int> vct;

    int count = 0;
    int *p = NULL;

    for(int i = 0;i < 100000;i++){
        vct.push_back(i);

        if(p != &vct[0]){
            p = &vct[0];
            count++;
        }
    }

    cout << "vector ������: " << count << "��" << endl;


    vector<int> v;
    count = 0;
    p = NULL;

    // ��ǰԤ���ռ䣬�������ݴ���
    v.reserve(200000);

    for(int i = 0;i < 100000;i++){
        v.push_back(i);

        if(p != &v[0]){
            p = &v[0];
            count++;
        }
    }

    cout << "Ԥ���ռ��vector ������: " << count << "��" << endl;
    // �������ռ�
    cout << v.capacity() << endl;
    vector<int> (v).swap(v);
    cout << v.capacity() << endl;


}



int main()
{
    test_reserve();

    system("pause");
    return 0;
}
