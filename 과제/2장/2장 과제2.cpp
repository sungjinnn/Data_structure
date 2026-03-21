#include <stdio.h>
#include <string.h> //strlen 함수를 위해 필요
#define _CRT_SECURE_NO_WARNINGS //scanf_s 대신 scanf 사용하기 위해 필요

int main() {
	char text[100];
	int length;

	printf("문자열을 입력하세요 : ");
	scanf_s("%s", text,100);
	length = strlen(text);

	printf("입력된 문자열은\n\"%s!\"\n입니다.\n", text);

	printf("입력된 문자열의 길이 = %d\n", length);

	return 0;
}