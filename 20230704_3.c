#include <stdio.h>

int main(void) {
	//3가지의 진법
	printf("%d\n", 12); //10진수 정수를 출력해줌
	printf("%d\n", 014); //8진수 정수를 출력해줌
	printf("%d\n", 0xc); // 16진수 정수를 출력해줌

	//3type of base(radix)
	printf("%o\n", 12); // print octal number
	printf("%x\n", 12); // print hexadecimal number with small letter
	printf("%X\n", 12); // print hexadecimal number with capital letter

	return 0;