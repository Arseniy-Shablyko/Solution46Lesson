#include <iostream>
#include "logic.h"
using namespace std;

int main() {
	int number;
	int** matrix;
	int n, m;

	cout << "Input size of the matrix: ";
	cin >> n, m;

	matrix = new int* [n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new int[m];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			matrix[i][j] = rand() % 100;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	int* array = sum_row_elements(matrix, n, m);
	cout << "Sum of row elements: ";
	for (int i = 0; i < n; i++) {
		cout << array << " ";
	}

	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
	return 0;
}