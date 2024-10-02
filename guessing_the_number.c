#include <stdio.h>
#include <stdbool.h>

int main(void) {

	printf("Загадайте число от 1 до 100\n");

	int min_number = 1;
	int max_number = 100;
	bool is_ok = true;

	while (is_ok) {
		int mid_number = (max_number + min_number) / 2;
		printf("Ваше число больше или равно %d? (y/n)\n", mid_number);
		char user_response;
		scanf_s(" %c", &user_response, 1);

		if (min_number == max_number || min_number == max_number - 1) {
			printf("Загаданное число - %d", min_number);
			is_ok = false;
		}
		else {
			if (user_response == 'y' || user_response == 'Y') {
				min_number = mid_number;
			}
			else if (user_response == 'n' || user_response == 'N') {
				max_number = mid_number;
			}
			else {
				is_ok = false;
			}
		}
	}
	return 0;
}