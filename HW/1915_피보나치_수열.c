#include<stdio.h>

int f(int n) {
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 1;
	}
	return f(n - 1) + f(n - 2);
}

int main(void) {

	int n;

	scanf("%d", &n);
	printf("%d\n", f(n));
}
