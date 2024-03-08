#include <iostream>

using namespace std;

void user_init(int* array, int size);
bool same_element_array(int* array, int size);

int main() {
	int size;
	do
	{
		cout << "Input vector size : ";
		cin >> size;
	} while (size <= 0);

	int* array = new int[size];

	user_init(array, size);

	string msg = same_element_array(array, size) ? "n't" : "";
	cout << "Vector elements are" << msg << " different";

	delete[] array;

	return 0;
}