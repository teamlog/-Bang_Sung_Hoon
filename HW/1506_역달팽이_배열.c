#include<stdio.h>

int main(void) {
    
    int arr[50][50] = { 0, };
	int i, j;
	int max;
	int x = -1, y = 0;
	int z = 1;
	int a = 1;
	int g;

	scanf("%d", &max);

	g = max;

	while (max != 0) {
		for (i = 0; i < max; i++) {
			x = x + z;
			arr[y][x] = a;
			a++;
		}
		max--;
		for (i = 0; i < max; i++) {
			y = y + z;
			arr[y][x] = a;
			a++;
		}
		z *= -1;
	}
	for (i = 0; i < g; i++) {
		for (j = 0; j < g; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
