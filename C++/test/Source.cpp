#include <iostream>
#include <time.h>
using namespace std;

int main() {

	srand(time(NULL));

	int rows = 4;
	int columns = 5;

	int** arr = new int* [rows];
	//arr[0] -> array

	for (int i = 0; i < rows; i++) {
		arr[i] = new int[columns];
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			arr[i][j] = rand() % 15;
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}

	for (int i = 0; i < rows; i++) {
		delete [] arr[i];
	}
	
	delete[] arr;

	return 0;
}