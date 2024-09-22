#include <stdio.h>

int input_check(const char* prompt, int* value);

int main(void) {
  int number;
  if (input_check("Введите номер числа фибоначчи от 0 до 93: \n", &number)) {
    return 1;
  }

  if (number < 0 || number > 93) {
    printf("Ошибка: введите число от 0 до 93.\n");
    return 1;
  }

  unsigned long long int arr[94] = {0, 1, 1};
  for (int i = 3; i <= 93; i++) {
    arr[i] = arr[i - 1] + arr[i - 2];
  }
  printf("Массив до  n:\n");
  for (int i = 0; i <= number; i++) {
    printf("%llu ", arr[i]);
  }
  //printf("Ваше число: %lld", arr[number]);
  return 0;
}

int input_check(const char *prompt, int* value) {
  printf("%s", prompt);
  char addition;
  if (scanf_s("%d%c", value, &addition, 1) != 2 || addition != '\n') {
    printf("Ошибка: введите один корректный номер числа.");
    return 1;
  }
  return 0;
}
