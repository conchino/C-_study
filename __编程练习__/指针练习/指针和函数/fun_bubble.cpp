#include "fun_bubble.h"


// 冒泡排序
// 调用时传入一个数组，指针参数接收数组的首地址
void bubble_sort(int *arr, int len){
    for(int i = 0;i < len -1; i++){
        for(int j = 0;j < len -1 -i;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
