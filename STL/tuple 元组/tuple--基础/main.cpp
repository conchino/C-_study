#include <iostream>
#include <string>
#include <tuple>
#include <functional>


using namespace std;

/* Ԫ��tuple���� */

/*
    tuple��һ���̶���С�Ĳ�ͬ����ֵ�ļ��ϣ��Ƿ����� pair
    �൱�ڲ���Ҫ�����Ľṹ��
    pair ֻ��������Ա��tuple ������ָ�������Ա
      tuple<Type,Type,...> tp;
*/


void test_tuple_base(){
    // Ԫ��
    tuple<int,string,bool> tp1(1,"ichigo",true);

    // ��ȡԪ����Ԫ�أ�get<[ָ��λ���±�]>([Ԫ��]);
    cout << get<0>(tp1) << " " << get<1>(tp1) << " " << get<2>(tp1) << endl;

    // �ı�Ԫ���е�ĳ��ֵ
    get<0>(tp1) = 2;
    cout << get<0>(tp1) << " " << get<1>(tp1) << " " << get<2>(tp1) << endl;

    // ��ȡԪ��Ԫ�ظ���     std::tuple_size<decltype(tuple)>::value
    cout << tuple_size<decltype(tp1)>::value << endl;

    // ������䣬tuple�������������Ѿ�ָ����ֵ�������������ڼ䶯̬����
//    for(int i = 0;i < tuple_size<decltype(tp1)>::value;i++){
//        cout << get<i>(tp1) << endl;
//    }

    // ��ȡtupleԪ������   tuple_element<0,decltype(tp1)>::type ��ȡtuple��һ��Ԫ�ص����ͣ����Դ˴�������t1
    tuple_element<0,decltype(tp1)>::type t1;
    t1 = get<0>(tp1);
    cout << t1 << endl;


    // ����tie���н��Ԫ��ֵ
    int v1;
    string v2;
    bool v3;
    // ͨ��tie�������Ԫ���Աֵ�������Ԫ��
    tie(v1,v2,v3) = tp1;
    cout << v1 << " " << v2 << " " << v3 << endl;
    // �������Ҫ��Ԫ��ͨ�� std::ignore ռλ��ռλ
    int b1;
    string b2;
    tie(b1,b2,ignore) = tp1;

}


void test_tuple_higher(){
    // ������������Ϊtuple ��Ա��ͨ�����make_tuple()ʹ�ã�������ȡԪ���������ʹ���ⲿ�����ı�Ԫ��
    tuple<int,string,bool> tp1(1,"ringo",true);

    int num;
    string str;
    bool flag;

    // ref() ������Ҫ <functional> ͷ�ļ�
    tuple<int &,string &,bool &> tp2 = make_tuple(ref(num),ref(str),ref(flag)) = tp1;

    cout << num << " " << str << " " << flag << endl;

    // ͨ�����ã�ʹ�ⲿ�����ò�Ԫ����ֵ
    num = 2;
    str = "ichigo";
    cout << get<0>(tp2) << " " << get<1>(tp2) << " " << get<2>(tp2) << endl;

}



int main()
{
    test_tuple_base();


    system("pause");
    return 0;
}
