#include <iostream>

using namespace std;

void user_init(int* array, int size);
double array_sum(int* array, int size);
int number_non_zero_elements(int* array, int size);
double arithmetic_mean_non_zero_elements(int* array, int size);

int main() {

	int size;
	do
	{
		cout << "Input array size: ";
		cin >> size;
	} while (size<=0);

	int* array = new int[size];

	user_init(array, size);

	cout << "Sum of vector elements: " << array_sum(array, size);
	cout << "\nNumber of non-zero vector elements: "
		<< number_non_zero_elements(array, size);
	cout << "\nThe arithmetic mean of the non-zero elements of the vector is "
		<< arithmetic_mean_non_zero_elements(array, size);

	return 0;
}