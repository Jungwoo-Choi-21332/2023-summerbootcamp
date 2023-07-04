#include <stdio.h>

int main(void) {
	//여러개의 데이터 입력
	int a, b;  //실수형과 문자형도 동일하다
	scanf_s("%d, %d", &a, &b); //입력할때 데이터 사이에 , 가 있으면 데이터 사이에, 를 입력해야하고
	// 공백이 있으면 스페이스바를 눌러야 한다.
	printf("%d\n", a);
	printf("%d", b);
	return 0;
}