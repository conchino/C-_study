#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[100]= {4,10,11,30,69,70,96,100};

    int b=binary_search(a,a+9,11);//���ҳɹ�������1
    cout<<"�������в���Ԫ��4�����Ϊ��"<<b<<endl;

    int c=binary_search(a,a+9,40);//����ʧ�ܣ�����0
    cout<<"�������в���Ԫ��40�����Ϊ��"<<b<<endl;

    int d=lower_bound(a,a+9,10)-a;
    cout<<"�������в��ҵ�һ�����ڵ���10��Ԫ��λ�ã����Ϊ��"<<d<<endl;

    int e=lower_bound(a,a+9,101)-a;
    cout<<"�������в��ҵ�һ�����ڵ���101��Ԫ��λ�ã����Ϊ��"<<e<<endl;

    int f=upper_bound(a,a+9,10)-a;
    cout<<"�������в��ҵ�һ������10��Ԫ��λ�ã����Ϊ��"<<f<<endl;

    int g=upper_bound(a,a+9,101)-a;
    cout<<"�������в��ҵ�һ������101��Ԫ��λ�ã����Ϊ��"<<g<<endl;


    system("pause");
    return 0;
}
