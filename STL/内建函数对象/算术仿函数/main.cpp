#include <iostream>
#include <functional>   // �ڽ�����ͷ�ļ�<functional>

using namespace std;

/* �����º��� */

// һԪ����
void test_negate(){
    // ȡ���º��� negate<T>();
    negate<int> n;
    cout << n(10) << endl;

    // ���������ڽ�����
    cout << negate<int>()(10) << endl;
}

// ��Ԫ����
void test_plus(){

    plus<int> p;
    cout << p(10,20) << endl;

    cout << plus<int>()(11,22) << endl;

}



int main()
{
    test_negate();
    test_plus();

    system("pause");
    return 0;
}
