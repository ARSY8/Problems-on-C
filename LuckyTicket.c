#include <stdio.h>

int main(void) {

	int lucky_ticket = 0;
	int arr[28] = {0};

	for (int i = 0; i <= 999; ++i) {
		int whole_number = i;
		int sum = 0;
		while (whole_number >= 1) {
			int digit = whole_number % 10;
			sum += digit;
			whole_number /= 10;
		}
		arr[sum] += 1;
	}

	for (int i = 0; i <= 27; ++i) {
		lucky_ticket += arr[i] * arr[i];
	}


	float percent_of_lucky_tickets = 100.0f * lucky_ticket / 999999;


	printf("Колличество счастливых билетов: %d\n", lucky_ticket);
	printf("Процент счастливых билетов: %f", percent_of_lucky_tickets);
	return 0;
}