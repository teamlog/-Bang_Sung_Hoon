#include<stdio.h>

int f(int n) {
	if (n == 1) {
		return 1;
	}
	if (n % 2 == 0) {
		printf("%d\n", n);
		return f(n / 2);
	}
	else if (n % 2 == 1) {
		printf("%d\n", n);
		return f(n * 3 + 1);
	}
}

int main(void) {

	int n;

	scanf("%d", &n);
	printf("%d", f(n));
}
