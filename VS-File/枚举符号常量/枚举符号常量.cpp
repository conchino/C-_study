#include <iostream>
#include <string>

using namespace std;

/*  enum  C++ 提供的创建常量的另一种方式
*  枚举常量只能被赋给数值，若赋予字符将会被转成整数\
*  若不显性赋值，则枚举常量的下一个则会默认比上一个多 1 ;
*/
enum MyEnum {
	aa, bb, cc, 
	dd=123 , ee, 
	ff = 11, gg

};


int main()
{
	cout << "Hello World!" << endl;

	cout << "枚举类常量 dd: " << dd << endl;
	cout << "枚举类常量 ee: " << ee << endl;
	cout << "枚举类常量 ff: " << ff << endl;
	cout << "枚举类常量 gg: " << gg << endl;

	system("pause");
	return 0;
}

