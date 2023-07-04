#include <stdio.h>

int main(void) {
	//real constant with exponential type
	printf("%.1lf\n", 1e6); // print real number with decimal point type
	printf("%.7lf\n", 3.14e-5); //print decimal point under the 7th 
	printf("%le\n", 0.0000314); //print decimal nuber type real unmber with exp type 
	printf("%.2le\n", 0.0000314); // 지수 형태로 소수점이하 둘째 자리까지 출력
	return 0;
}