#include <stdio.h>

int main(void) {
	int max_number = 100;
	int min_number = 1;
	int mid_number;
	char user_response;
	printf("Загадайте число от 1 до 100\n");
	while (min_number < max_number) {
		mid_number = ((max_number + min_number + 1) / 2);
		printf("Ваше число больше или равно %d? (y/n)\n", mid_number);
		scanf_s(" %c", &user_response, 1);

		if (user_response == 'y') {
			min_number = mid_number;
		}
		else if (user_response == 'n') {
			max_number = mid_number - 1;
		}
	}
	printf("Загаданное число - %d", min_number);
	return 0;
}
