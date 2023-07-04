#include <stdio.h>

int main(void) {
	//문자와 문자열의 상수표현
	printf("%c\n", 'A'); // 문자를 표현하는 단어는 character
	printf("%s\n", "A"); // 문자열을 표현하는 단어는 string

	printf("%c 는 %s 입니다.", '1', "FIRST");
	// 문자를 입력할땐 '' 문자열을 입력할땐 ""
	return 0;
}