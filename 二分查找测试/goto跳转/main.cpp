#include <iostream>
#include <windows.h>

using namespace std;

/* goto �����ת */
int main()
{
  FLAG:         // FLAG ��ת��־
    Sleep(1500);

    cout << "Hello World... 1" << endl;

    cout << "Hello World... 2" << endl;

    cout << "goto ��ת..." << endl;
  goto FLAG;    // ��ת����ͷFLAG��־��

    cout << "Hello World... 3" << endl;

    system("pause");
    return 0;
}
