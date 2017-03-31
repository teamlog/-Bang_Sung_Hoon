#include<stdio.h>
int n;

int 함수(int n) {
	if (n <= 1) {
		return n;
	}
	else {
		return 함수(n - 1) + n;
	}
}

int main(void) {

	scanf("%d", &n);
	printf("%d", 함수(n));
	

	return 0;
}
