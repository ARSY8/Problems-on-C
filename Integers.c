#include <stdio.h>

int main(void) {
	int whole_number;
	printf("������� ������������� ����� �����:");
	if (scanf_s("%d", &whole_number) != 1 || whole_number <= 0){
		printf("������� �� ��, ��� ����� ����.");
			return 1;
	}

	int sum = 0;
	int multiplication = 1;
	while (whole_number > 0) {
		int digit = whole_number % 10;
		sum += digit;
		multiplication *= digit;
		whole_number /= 10;
	}

	printf("����� ���� �����: %d\n", sum);
	printf("������������ ���� �����: %d", multiplication);
	return 0;
}