#include <iostream>
#include <queue>

using namespace std;


void test_queue(){

    queue<int> q;

    for(int i = 0;i < 6;i++){
        q.push(i+1);
    }

    while( !q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

}



int main()
{
    test_queue();

    system("pause");
    return 0;
}
