int* sum_row_elements(int** matrix, int n, int m) {
	int* sums = new int[n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			sums[i] += matrix[i][j];
		}
	}

	return sums;
}

int* sum_column_elements(int** matrix, int n, int m) {
	int* sums = new int[n];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			sums[i] += matrix[j][i];
		}
	}

	return sums;
}