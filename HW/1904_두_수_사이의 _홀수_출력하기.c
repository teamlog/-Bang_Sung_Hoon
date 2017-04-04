#include<stdio.h>

//함수를 선언함.
int f(int a, int b) {
	//탈출식
	if (a > b) {
		return 0;
	}
	//a가 짝수일때
	if (a % 2 == 0) {
		f(a + 1, b);
	}
	//a가 홀수일때
	else if (a % 2 == 1) {
		printf("%d ", a);
		f(a + 2, b);
	}
}
int main(void) {

	int a;
	int b;

	scanf("%d %d", &a, &b);
	f(a, b);
}
