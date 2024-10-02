#include <stdio.h>

int main(void) {

  int lucky_ticket = 0;

  int arr[1000];

  for (int i = 0; i <= 999; ++i) {
    int sum = 0;
    int whole_number = i;
    while (whole_number > 0) {
      int digit = whole_number % 10;
      sum += digit;
      whole_number /= 10;
    }
    arr[i] = sum;
  }

  for (int i = 0; i <= 999; ++i) {
    int current = arr[i];
    for (int j = 0; j <= 999; ++j) {
      if (current == arr[j]) {
        lucky_ticket += 1;
      }
    }
  }

  float percent_of_lucky_tickets = 100.0f * lucky_ticket / 999999;


  printf("Колличество счастливых билетов: %d\n", lucky_ticket);
  printf("Процент счастливых билетов: %f", percent_of_lucky_tickets);
  return 0;
}
