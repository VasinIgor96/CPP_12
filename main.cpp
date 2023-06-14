#include <iostream>
using namespace std;

// Перевантажена функція для знаходження максимального значення в одновимірному масиві
int findMax(const int* arr, int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

// Перевантажена функція для знаходження максимального значення в двовимірному масиві
int findMax(const int** arr, int rows, int cols) {
    int maxVal = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > maxVal) {
                maxVal = arr[i][j];
            }
        }
    }
    return maxVal;
}

// Перевантажена функція для знаходження максимального значення в тривимірному масиві
int findMax(const int*** arr, int dim1, int dim2, int dim3) {
    int maxVal = arr[0][0][0];
    for (int i = 0; i < dim1; i++) {
        for (int j = 0; j < dim2; j++) {
            for (int k = 0; k < dim3; k++) {
                if (arr[i][j][k] > maxVal) {
                    maxVal = arr[i][j][k];
                }
            }
        }
    }
    return maxVal;
}

// Перевантажена функція для знаходження максимального значення двох цілих чисел
int findMax(int a, int b) {
    return (a > b) ? a : b;
}

// Перевантажена функція для знаходження максимального значення трьох цілих чисел
int findMax(int a, int b, int c) {
    int maxVal = a;
    if (b > maxVal) {
        maxVal = b;
    }
    if (c > maxVal) {
        maxVal = c;
    }
    return maxVal;
}

int main() {
    // Приклади використання перевантажених функцій

    // 1) Знаходження максимального значення в одновимірному масиві
    int arr[] = { 5, 2, 9, 1, 7 };
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int maxVal1D = findMax(arr, arrSize);
    cout << "Max value in 1D array: " << maxVal1D << endl;

    // 2) Знаходження максимального значення в двовимірному масиві
    int matrix[][3] = { {3, 9, 4}, {6, 1, 8}, {2, 7, 5} };
    int numRows = sizeof(matrix) / sizeof(matrix[0]);
    int numCols = sizeof(matrix[0]) / sizeof(matrix[0][0]);
    int maxVal2D = findMax((const int**)matrix, numRows, numCols);
    cout << "Max value in 2D array: " << maxVal2D << endl;

    // 3) Знаходження максимального значення в тривимірному масиві
    int cube[][2][2] = { {{1, 3}, {5, 7}}, {{2, 4}, {6, 8}} };
    int dim1 = sizeof(cube) / sizeof(cube[0]);
    int dim2 = sizeof(cube[0]) / sizeof(cube[0][0]);
    int dim3 = sizeof(cube[0][0]) / sizeof(cube[0][0][0]);
    int maxVal3D = findMax((const int***)cube, dim1, dim2, dim3);
    cout << "Max value in 3D array: " << maxVal3D << endl;

    // 4) Знаходження максимального значення двох цілих чисел
    int num1 = 10, num2 = 5;
    int maxVal2Num = findMax(num1, num2);
    cout << "Max value of two integers: " << maxVal2Num << endl;

    // 5) Знаходження максимального значення трьох цілих чисел
    int num3 = 7, num4 = 2, num5 = 9;
    int maxVal3Num = findMax(num3, num4, num5);
    cout << "Max value of three integers: " << maxVal3Num << endl;

    return 0;
}
