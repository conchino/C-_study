#include <iostream>
#include <malloc.h>

using namespace std;


template <typename T>
void mySwap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

// ƒ£∞Â≈≈–Ú£¨Ωµ–Ú≈≈–Ú
template <typename T>
void mySort(T *arr, int len){

    for(int i = 0; i < len ; i++){
        int max = i;
        for(int j = i+1;j < len;j++){
            if(arr[max] < arr[j]){
                max = j;
            }
        }
        if( max!=i){
            mySwap(arr[max], arr[i]);
        }
    }
}


template <typename T>
void printArray(T *arr, int len){
    for(int i = 0;i < len;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}



void stringTest(){
    char p[] = "bdfeagc";
    mySort(p, sizeof(p)/sizeof(p[0]));
    printArray(p, sizeof(p)/sizeof(p[0]));
}

void intTest(){
    int p[] = {2,4,1,5,6,3,9,8,7,0};
    mySort(p, sizeof(p)/sizeof(p[0]));
    printArray(p, sizeof(p)/sizeof(p[0]));
}

int main()
{
    // char[]
    stringTest();
    // int[]
    intTest();

    system("pause");
    return 0;
}
