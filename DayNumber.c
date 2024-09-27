#include <stdio.h>

int day_number(int day, int month, int year);

int main(void) {
	int day, month, year;

	printf("Введите день, месяц, год числами через пробел: \n");
	char addition;

	if (!scanf_s("%d%d%d%c", &day, &month, &year, &addition, 1) || addition != '\n') {
		printf("Ошибка: ведите корректные числа.");
		return 1;
	}
	else {
		if (day_number(day, month, year) != -1) {
			printf("Номер дня в году: %d", day_number(day, month, year));
			return 0;
		}
		else {
			printf("Ошибка: ведите корректные числа.");
			return 1;
		}
	}
}


int day_number(int day, int month, int year) {

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) { //Високосный год
		int arr[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		return count_day_sum(arr, day, month, year);
	}		
	else {
		int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		return count_day_sum(arr, day, month, year);
	}
}

int count_day_sum(int arr[], int day, int month, int year) {
	int day_sum = day;
	if ((month >= 1 && month <= 12) && (day <= arr[month - 1] && day > 0)) {
		for (int i = month - 1; i >= 1; i--) {
			day_sum += arr[i - 1];
		}
		return day_sum;
	}
	else {
		return -1;
	}
}