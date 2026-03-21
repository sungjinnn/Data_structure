#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int arr[2][3][4];
	int i, j, k;
	for (i = 0;i < 2; i++) {
		for (j = 0;j < 3;j++) {
			for (k = 0;k < 4;k++) {
				scanf_s(" %d", &arr[i][j][k]);
			}
		}
	}
	for (i = 0;i < 2; i++) {
		for (j = 0;j < 3;j++) {
			for (k = 0;k < 4;k++) {
				printf("array[%d][%d][%d] = %d\n", i, j, k, arr[i][j][k]);
			}
		}
	}
	return 0;
}
