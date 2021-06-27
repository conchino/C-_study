#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <ctime>

#define Height 50 //游戏画面尺寸
#define Width 50

using namespace std;

int Cells[Height][Width]; //所有位置随机置1或0

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
			if (Cells[i][j]) printf("*"); //活的细胞输出
			else printf(" ");             //死的细胞为空
		}
		printf("\n");
	}
	cout << "----------------------------------------------------------" << endl;
}
void updateWithoutInput() { //游戏内部更新

}
void updateWithInput() { //用户输入相关更新

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
