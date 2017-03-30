#include<stdio.h>

int main(void) {
    int arr[19][19] = { 0, };
	int i, j, k;
	int input;
	int x, y;

	scanf("%d", &input);

	for (k = 0; k < input; k++) {
		scanf("%d %d", &x, &y);

		arr[x - 1][y - 1] = 1;
	}
	for (i = 0; i < 19; i++) {
		for (j = 0; j < 19; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
