#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char arr[2][3][30];
	char c[3][10] = { "이름","학과","학번" };
	for (int i = 0;i < 2;i++) {
		for (int j = 0;j < 3;j++) {
			for (int k = 0;k < 1;k++) {
				printf("학생 %d의 %s :", i + 1, c[j]);
				gets_s(arr[i][j], sizeof(arr[i][j]));

			}
		}
		printf("\n");
	}
	for (int i = 0; i < 2; i++) {
		printf("학생 %d\n", i + 1);
		for (int j = 0; j < 3; j++) {
			printf("\t%s\n", arr[i][j]);
		}
		printf("\n");
	}
}
//다 하고 깃허브에 올리기


