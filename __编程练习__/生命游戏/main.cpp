#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <ctime>

#define Height 50 //��Ϸ����ߴ�
#define Width 50

using namespace std;

int Cells[Height][Width]; //����λ�������1��0

void startup() {
	for (int i = 0; i < Height; ++i) {
		for (int j = 0; j < Width; ++j) {
			Cells[i][j] = rand() % 2;
		}
	}
}
void show() {
	for (int i = 0; i < Height; ++i) {
		for (int j = 0; j < Width; ++j) {
			if (Cells[i][j]) printf("*"); //���ϸ�����
			else printf(" ");             //����ϸ��Ϊ��
		}
		printf("\n");
	}
	cout << "----------------------------------------------------------" << endl;
}
void updateWithoutInput() { //��Ϸ�ڲ�����

}
void updateWithInput() { //�û�������ظ���

}

int main() {
	srand((unsigned)time(0));
	startup();
	while (1) {

	    Sleep(1000);
		show();
		updateWithoutInput();
		updateWithInput();
	}
	return 0;
}
