#include <stdio.h>


void insertion_sort(int * arr, int len);

int main(void) {
	int arr[] = { 5, 7, 2, 10, -5, 3, 9, -8 };
	int len = sizeof(arr) / sizeof(arr[0]);

	insertion_sort(arr, len);
	
	return 0;
}


void insertion_sort(int * arr, int len){

	for (int i = 1; i < len; i++) {
		for (int j = i; j > 0; --j) {
			if (*(arr + j) < *(arr + j - 1)) {
				int temp = * (arr + j - 1);
				*(arr + j - 1) = *(arr + j);
				*(arr + j) = temp;
			}
			else {
				break;
			}
		}
	}
	for (int i = 0; i < len; ++i) {
		printf("%d ", *(arr + i));
	}
}