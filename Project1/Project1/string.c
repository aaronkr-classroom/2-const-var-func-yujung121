// string.c
#include <stdio.h>

int main(void) {
	const char* GREETING = "Hello World!";

	printf("���ڿ��� ���ڿ� null ���ڵ� ���: \n");

	for (int i = 0; i <= strlen(GREETING); i++) {
		if (GREETING[i] == '\0') {
			printf("\\0");
		}
		else {
			printf("%c", GREETING[i]);
		}

		printf(" (ASCII: %d)\n", GREETING[i]);
	}

	return 0;
}