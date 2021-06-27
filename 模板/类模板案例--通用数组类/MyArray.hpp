#ifndef MYARRAY_H_INCLUDED
#define MYARRAY_H_INCLUDED
#pragma once    //防止头文件重复包含

#include <iostream>
#include <string>
using namespace std;


template <class T>
class MyArray{

private:
    T *pAddress;     // 指向堆区开辟的真实数组
    int capacity;   // 数组的容量
    int arr_size;   // 数组大小

public:
    // 构造函数
    MyArray(int size):capacity(size){
        this->arr_size = 0;
        this->pAddress = new T[this->capacity];
    }

    // 拷贝构造
    MyArray(const MyArray &arr){
        this->capacity = arr.capacity;
        this->arr_size = arr.arr_size;

        // 深拷贝
        this->pAddress = new T[arr.capacity];
        for(int i = 0;i < this->arr_size;i++){
            this->pAddress[i] = arr.pAddress[i];
        }
    }

    // 析构函数
    ~MyArray(){
        if(this->pAddress != NULL){
            delete[] this->pAddress;
            this->pAddress = NULL;
        }
    }

    // 重载运算符= ：&operator=, 防止浅拷贝问题
    MyArray &operator=(const MyArray &arr){
        if(this->pAddress != NULL){
            delete[] this->pAddress;
            this->pAddress = NULL;
            this->capacity = 0;
            this->arr_size = 0;
        }
        // 深拷贝
        this->capacity = arr.capacity;
        this->arr_size = arr.arr_size;
        this->pAddress = new T[this->arr_size];
        for(int i = 0;i < this->arr_size;i++){
            this->pAddress[i] = arr.pAddress[i];
        }
    }

    void show(){
        for(int i = 0;i < this->arr_size;i++){
            cout << this->pAddress[i] << " ";
        }
        cout << endl;
    }

    // 尾插法
    void Push_Back(const T &val){
        if(this->capacity == this->arr_size){
            return;
        }
        this->pAddress[this->arr_size] = val;
        this->arr_size++;
    }
    // 尾删法
    void Pop_Back(){
        if(this->arr_size == 0){
            return;
        }
        this->arr_size--;
    }

    // 通过下标访问元素  ->  重载[]运算符
    T &operator[](int index){
        return this->pAddress[index];
    }
    // 获取容量
    int getCapacity(){
        return this->capacity;
    }
    // 获取大小
    int getSize(){
        return this->arr_size;
    }

};



#endif // MYARRAY_H_INCLUDED
