#include <iostream>

using namespace std;

void user_init(int* array, int size);
int array_sum(int* array, int size);
int number_non_zero_elements(int* array, int size);
double arithmetic_mean_non_zero_elements(int* array, int size);

int main() {

	int size = 5;
	int* matrix = new int[size];

	user_init(matrix, size);

	cout << "Sum of vector elements: " << array_sum(matrix, size);
	cout << "\nNumber of non-zero vector elements: " << number_non_zero_elements(matrix, size);
	cout << "\nThe arithmetic mean of the non-zero elements of the vector is "
		<< arithmetic_mean_non_zero_elements(matrix, size);

	return 0;
}