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