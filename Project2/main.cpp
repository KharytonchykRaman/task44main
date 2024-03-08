#include <iostream>

using namespace std;

void user_init(int* array, int size);
int max_element(int* array, int size);
int min_element(int* array, int size);
double arithmetic_mean_without_min_max(int* array, int size);

int main() {
	int size;
	do
	{
		cout << "Input vector size : ";
		cin >> size;
	} while (size <= 0);

	int* array = new int[size];

	user_init(array, size);

	cout << "\nMinimum vector element: " << min_element(array, size);
	cout << "\nMaximum vector element: " << max_element(array, size);
	cout << "\nArithmetic mean without min and max values of the vector: "
		<< arithmetic_mean_without_min_max(array,size);

	delete[] array;

	return 0;
}