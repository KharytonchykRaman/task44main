#include <iostream>

using namespace std;

void user_init(int* array, int size) {
	cout << "Input array elements : \n";
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << ". ";
		cin >> array[i];
	}
}

int array_sum(int* array, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += array[i];
	}
	return sum;
}

int number_non_zero_elements(int* array, int size) {
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (array[i] != 0)
		{
			count++;
		}
	}
	return count;
}

double arithmetic_mean_non_zero_elements(int* array, int size) {
	return array_sum(array, size) / number_non_zero_elements(array, size);
}