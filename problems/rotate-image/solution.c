void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    for (int i = 0; i < matrixSize; i++) {
        for (int j = i + 1; j < matrixSize; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    for (int i = 0; i < matrixSize; i++) {
        int s = 0, e = matrixSize - 1;
        while (s < e) {
            int t = matrix[i][s];
            matrix[i][s] = matrix[i][e];
            matrix[i][e] = t;
            s++;
            e--;
        }
    }
}
