#include <stdio.h>

int main(void) {
	//기본적인 변환문자(수)

	printf("%d\n", 10);
	// 10 이 %d의 위치에 출력된다. %는 printf문 안에 정수및 실수를 출력할때 사용한다.
	// 출력을 원하는 수가 정수라면 %d
	// 실수라면 %lf(소숫점 이하 6자리까지 출력), %.nlf(소숫점이하 n번째 자리까지 출력)
	printf("%lf\n", 3.141592);
	printf("%.1lf\n",3.141);
	printf("%.10lf\n",3.14159265358979);

	//변환문자 여러개 사용하기
	printf("%d 의 합과 %d 의 합은 %d 이다.\n", 10, 20, 10 + 20);
	//똑같은 순서의 위치해 있는 수가 같은 순서의 %d 에 출력된다.
	return 0;