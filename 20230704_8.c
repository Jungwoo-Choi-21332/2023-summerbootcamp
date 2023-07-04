#include <stdio.h>

int main(void) {
	//정수형 포맷팅
	printf("123\n"); //123 그대로 출력
	printf(" 678\n"); //한칸 띄고 678 출력
	printf("12345678901234\n"); // 그대로 출력
	printf("ABC%8dDEF\n",123); // ABC 출력후 8개의 칸을 만들고 오른쪽으로 정렬
	//8개의 칸 생성 후 두에서 부터
	printf("ABC%-8dDEF\n", 123); //위와 동일하지만 8 앞에 - 가 붙어있으니 왼쪽으로 정렬 
	//8개의칸 생성 후 앞에서부터
	printf("ABC%2dDEF\n", 123); //%nd 의 경우 자릿수만큼 n을 써줘야함
	return 0;
}