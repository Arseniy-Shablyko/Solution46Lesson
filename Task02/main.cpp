#include <iostream>
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
		delete[] matrix[i];
	}
	delete[] matrix;
	return 0;
}