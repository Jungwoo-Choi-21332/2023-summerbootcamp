#include <stdio.h>

int main(void) {
	//여러가지 변수 선언
	int a, b; //정수형 변수
	a = 10;
	b = 2;
	printf("%d , %d\n", a, b);

	float c, d; //실수형 변수
	c = 1.1;
	d = 3.4;
	printf("%lf , %lf\n", c, d);

	double e, f; //실수형 변수2
	e = 10.55;
	f = 20.77;
	printf("%.2lf , %.2lf\n", e, f);

	char g, h; //문자형 변수
	g = 'A';
	h = 'B';
	printf("%c , %c\n", g, h);

	return 0;
}