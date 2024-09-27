#include <stdio.h>

int main(void) {

	int sum_left;
	int sum_right;
	int lucky_ticket = 0;

	for (int i = 0; i <= 999; ++i) {
		int whole_number1 = i;
		sum_left = 0;
		while (whole_number1 > 0) {
			int digit1 = whole_number1 % 10;
			sum_left += digit1;
			whole_number1 /= 10;
		}
		for (int j = 0; j <= 999; ++j) {
			int whole_number2 = j;
			sum_right = 0;
			while (whole_number2 > 0) {
				int digit2 = whole_number2 % 10;
				sum_right += digit2;
				whole_number2 /= 10;
			}
			if (sum_left == sum_right) {
				lucky_ticket += 1;
			}

		}
	}

	float percent_of_lucky_tickets = 100 * lucky_ticket / 999999;


	printf("Колличество счастливых билетов: %d\n", lucky_ticket);
	printf("Процент счастливых билетов: %f", percent_of_lucky_tickets);
	return 0;
}