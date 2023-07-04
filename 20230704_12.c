#include <stdio.h>

int main(void) {
	//연산자 누적(복합 대입 연산자)
	int a, b, c = 5;
	a = b = c;
	printf("%d\n", a -= c);
	printf("%d\n", a += c);
	printf("%d\n", a /= c);
	printf("%d\n", a %= c);
	printf("%d\n", a *= c);
	return 0;

}