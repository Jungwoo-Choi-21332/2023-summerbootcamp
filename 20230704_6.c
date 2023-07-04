#include <stdio.h>

int main(void) {
	int a, b;
	a = 10;
	b = 2;
	printf("%d + %d = %d\n", a, b, a + b); //더하기
	printf("%d - %d = %d\n", a, b, a - b); //빼기
	printf("%d X %d = %d\n", a, b, a * b); //곱하기
	printf("%d / %d = %d\n", a, b, a / b); //나누기
	printf("%%d");
	return 0;
}