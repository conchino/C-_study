#include <iostream>

using namespace std;

/* ģ�庯����
   ��������������ֵ
   ʹ��һ��ͨ�õ����ͣ����Դ����κ����͵ı�����������
 */

template <typename T>      // ����һ��ģ��
void swapVar(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}


class ABC{
public:
    ABC(int i):data(i){}
    int data;
};


template <typename T>
void func(){
    cout << "����ģ�巽��..." << endl;
}


int main()
{
    int a = 11;
    int b = 22;

    /* ʹ�ú���ģ��ķ�ʽ */
    // 1.�Զ������Ƶ�
    swapVar(a, b);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    ABC abc1(33);
    ABC abc2(44);

    // 2. ��ʽָ������
    swapVar<ABC>(abc1, abc2);
    cout << "ABC1: " << abc1.data << endl;
    cout << "ABC2: " << abc2.data << endl;

    // ģ�����ȷ�� T���������Ͳ���ʹ��
    func<int>();


    system("pause");
    return 0;
}
