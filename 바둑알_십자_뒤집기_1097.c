#include<stdio.h>

int main(void) {
    int arr[19][19] = { 0, };
	int i, j, k;
	int input;
	int x, y;

	for (i = 0; i < 19; i++) {
		for (j = 0; j < 19; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	scanf("%d", &input);
	for (k = 0; k < input; k++) {
		scanf("%d %d", &x, &y);
		x -= 1;
		y -= 1;
		for (j = 0; j < 19; j++) {
			if (arr[x][j] == 1) {
				arr[x][j] = 0;
			}
			else {
				arr[x][j] = 1;
			}
		}
		for (i = 0; i < 19; i++) {
			if (arr[i][y] == 1) {
				arr[i][y] = 0;
			}
			else {
				arr[i][y] = 1;
			}
		}
	}
	for (i = 0; i < 19; i++) {
		for (j = 0; j < 19; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
