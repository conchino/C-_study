#include <iostream>
#include <list>


using namespace std;


template <typename T>
void printList(list<T> lst){
    for(list<int>::iterator it = lst.begin(); it != lst.end();++it){
        cout << *it << " ";
    }
    cout << endl;
}



void test_list(){

    list<int> lt;

    list<int> lt1 = {1,2,3,4,5,6};
    printList(lt1);

    list<int> lt2(6,9);
    printList(lt2);

    list<int> lt3(lt1);
    printList(lt3);

}



int main()
{
    test_list();

    system("pause");
    return 0;
}
