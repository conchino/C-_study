#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[100]= {4,10,11,30,69,70,96,100};

    int b=binary_search(a,a+9,11);//查找成功，返回1
    cout<<"在数组中查找元素4，结果为："<<b<<endl;

    int c=binary_search(a,a+9,40);//查找失败，返回0
    cout<<"在数组中查找元素40，结果为："<<b<<endl;

    int d=lower_bound(a,a+9,10)-a;
    cout<<"在数组中查找第一个大于等于10的元素位置，结果为："<<d<<endl;

    int e=lower_bound(a,a+9,101)-a;
    cout<<"在数组中查找第一个大于等于101的元素位置，结果为："<<e<<endl;

    int f=upper_bound(a,a+9,10)-a;
    cout<<"在数组中查找第一个大于10的元素位置，结果为："<<f<<endl;

    int g=upper_bound(a,a+9,101)-a;
    cout<<"在数组中查找第一个大于101的元素位置，结果为："<<g<<endl;


    system("pause");
    return 0;
}
