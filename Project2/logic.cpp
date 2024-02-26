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

int max_element(int* array, int size) {
	int max = array[0];
	for (int i = 1; i < size; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}
	return max;
}

int min_element(int* array, int size) {
	int min = array[0];
	for (int i = 1; i < size; i++)
	{
		if (array[i] < min)
		{
			min = array[i];
		}
	}
	return min;
}

double arithmetic_mean_without_min_max(int* array, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += array[i];
	}

	return (sum - min_element(array, size) - max_element(array, size)) / size;
}
