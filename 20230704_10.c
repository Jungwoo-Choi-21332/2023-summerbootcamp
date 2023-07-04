#include <stdio.h>

int main(void) {
	// 데이터 입력
	//scanf문에서 &를 써줘야함 
	int a;
	scanf_s("%d", &a);
	printf("%d\n", a);
	
	double b;
	scanf_s("%lf", &b);
	printf("%lf\n", b);

	char c;
	scanf_s(" %c", &c); // 문자열을 입력받을땐 맨 앞에 공백문자를 위해서 한칸 띄워줘야한다
	printf("%c", c);
	return 0;
}