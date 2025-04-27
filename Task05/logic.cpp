#include "logic.h"

int count_zero_elements(double* array, int size) {
	if (size <= 0 || array == nullptr) {
		return -1;
	}

	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (*(array + i) == 0) {
			count++;
		}

		/*if (array[i] == 0) {
			count++;
		}*/
	}

	return count;
}