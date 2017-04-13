#include <stdio.h>
#include <stdlib.h>

int main (void) {
	int i;
	int j;
	char dan[10];

	FILE *fp = fopen("data.txt", "rt");
	if (fp == NULL) {
		puts("파일오픈 실패");
		return EXIT_FAILURE;
	}

	for (i = 0; i < 8; i++) {
		fscanf(fp, "%c", &dan[i]); // 23456789
		for (j = 1; j <= 9; j++) {
			printf("%d ", j * (dan[i] - '0'));
		}
		printf("\n");
	}

	fclose(fp);

	return EXIT_SUCCESS;
}
