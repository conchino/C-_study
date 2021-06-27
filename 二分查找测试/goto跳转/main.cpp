#include <iostream>
#include <windows.h>

using namespace std;

/* goto 语句跳转 */
int main()
{
  FLAG:         // FLAG 跳转标志
    Sleep(1500);

    cout << "Hello World... 1" << endl;

    cout << "Hello World... 2" << endl;

    cout << "goto 跳转..." << endl;
  goto FLAG;    // 跳转到开头FLAG标志处

    cout << "Hello World... 3" << endl;

    system("pause");
    return 0;
}
