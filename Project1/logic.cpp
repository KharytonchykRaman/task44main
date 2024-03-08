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

double array_sum(int* array, int size) {
	double sum = 0;
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

bool same_element_array(int* array, int size) {

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (array[i] == array[j]) {
				return true;
			}
		}
	}
	return false;
}