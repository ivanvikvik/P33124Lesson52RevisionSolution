#include  "logic.h"
#include <cmath>
int zero_elements(int* array, int size) {
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (array[i] == 0) {
			count++;
		}
	}

	return count;
}

int sum_elements(int* array, int size) {

	int sum = 0;

	int index = zero_elements(array, size);

	for (int i = index + 1; i < index; i++)
	{
		sum += abs(array[i]);
	}

	return sum;

}