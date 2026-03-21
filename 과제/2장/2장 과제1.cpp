#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
    char str[4][20];
    char* ptr[4];

    int i, j;

    for (i = 0; i < 4; i++) {
        scanf("%s", str[i]);
        ptr[i] = str[i];
    }
    printf("\n");

    for (j = 0; j < 4; j++) {
        printf("%s\n", ptr[j]);
    }

    return 0;
}