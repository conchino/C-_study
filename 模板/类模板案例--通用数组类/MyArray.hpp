#ifndef MYARRAY_H_INCLUDED
#define MYARRAY_H_INCLUDED
#pragma once    //��ֹͷ�ļ��ظ�����

#include <iostream>
#include <string>
using namespace std;


template <class T>
class MyArray{

private:
    T *pAddress;     // ָ��������ٵ���ʵ����
    int capacity;   // ���������
    int arr_size;   // �����С

public:
    // ���캯��
    MyArray(int size):capacity(size){
        this->arr_size = 0;
        this->pAddress = new T[this->capacity];
    }

    // ��������
    MyArray(const MyArray &arr){
        this->capacity = arr.capacity;
        this->arr_size = arr.arr_size;

        // ���
        this->pAddress = new T[arr.capacity];
        for(int i = 0;i < this->arr_size;i++){
            this->pAddress[i] = arr.pAddress[i];
        }
    }

    // ��������
    ~MyArray(){
        if(this->pAddress != NULL){
            delete[] this->pAddress;
            this->pAddress = NULL;
        }
    }

    // ���������= ��&operator=, ��ֹǳ��������
    MyArray &operator=(const MyArray &arr){
        if(this->pAddress != NULL){
            delete[] this->pAddress;
            this->pAddress = NULL;
            this->capacity = 0;
            this->arr_size = 0;
        }
        // ���
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

    // β�巨
    void Push_Back(const T &val){
        if(this->capacity == this->arr_size){
            return;
        }
        this->pAddress[this->arr_size] = val;
        this->arr_size++;
    }
    // βɾ��
    void Pop_Back(){
        if(this->arr_size == 0){
            return;
        }
        this->arr_size--;
    }

    // ͨ���±����Ԫ��  ->  ����[]�����
    T &operator[](int index){
        return this->pAddress[index];
    }
    // ��ȡ����
    int getCapacity(){
        return this->capacity;
    }
    // ��ȡ��С
    int getSize(){
        return this->arr_size;
    }

};



#endif // MYARRAY_H_INCLUDED
