#include <iostream>
#include <string>
#include <tuple>
#include <functional>


using namespace std;

/* 元组tuple基础 */

/*
    tuple是一个固定大小的不同类型值的集合，是泛化的 pair
    相当于不需要创建的结构体
    pair 只有两个成员，tuple 可以有指定多个成员
      tuple<Type,Type,...> tp;
*/


void test_tuple_base(){
    // 元组
    tuple<int,string,bool> tp1(1,"ichigo",true);

    // 获取元组中元素，get<[指定位置下标]>([元组]);
    cout << get<0>(tp1) << " " << get<1>(tp1) << " " << get<2>(tp1) << endl;

    // 改变元组中的某个值
    get<0>(tp1) = 2;
    cout << get<0>(tp1) << " " << get<1>(tp1) << " " << get<2>(tp1) << endl;

    // 获取元组元素个数     std::tuple_size<decltype(tuple)>::value
    cout << tuple_size<decltype(tp1)>::value << endl;

    // 错误语句，tuple的索引必须是已经指定的值，不能在运行期间动态传递
//    for(int i = 0;i < tuple_size<decltype(tp1)>::value;i++){
//        cout << get<i>(tp1) << endl;
//    }

    // 获取tuple元素类型   tuple_element<0,decltype(tp1)>::type 获取tuple第一个元素的类型，并以此创建变量t1
    tuple_element<0,decltype(tp1)>::type t1;
    t1 = get<0>(tp1);
    cout << t1 << endl;


    // 利用tie进行解包元素值
    int v1;
    string v2;
    bool v3;
    // 通过tie解包，将元组成员值赋给解包元素
    tie(v1,v2,v3) = tp1;
    cout << v1 << " " << v2 << " " << v3 << endl;
    // 解包不需要的元素通过 std::ignore 占位符占位
    int b1;
    string b2;
    tie(b1,b2,ignore) = tp1;

}


void test_tuple_higher(){
    // 将引用类型作为tuple 成员、通过配合make_tuple()使用，可以提取元组变量，并使用外部变量改变元组
    tuple<int,string,bool> tp1(1,"ringo",true);

    int num;
    string str;
    bool flag;

    // ref() 函数需要 <functional> 头文件
    tuple<int &,string &,bool &> tp2 = make_tuple(ref(num),ref(str),ref(flag)) = tp1;

    cout << num << " " << str << " " << flag << endl;

    // 通过引用，使外部变量该部元组内值
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
