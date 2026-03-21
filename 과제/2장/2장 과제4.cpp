#include <stdio.h>

int fact(int n);

int main() {

	int num = 0;
	int result = 0;
	printf("정수를 입력하세요: ");
	scanf_s("%d", &num);

	for (int i = num; i > 0; i--) {
		printf("fact(%d) 함수 호출!\n", i);
	}

	for (int i = 0; i < num; i++) {
		int n = fact(i + 1);
		printf("fact(%d) 값 %d 반환!\n", i + 1, n);
	}

	result = fact(num);

	printf("\n%d의 팩토리얼 값은 %d입니다.\n", num, result);

	return 0;

}

int fact(int n) {
	if (n <= 1) {
		return(1);
	}
	else {
		return(n * fact(n - 1));
	}
}