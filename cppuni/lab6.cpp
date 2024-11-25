#include <iostream>
using namespace std;

void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}


int countEven(int** matrix, int rows, int cols) {
    int count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] % 2 == 0) {
                count++;
            }
        }
    }
    return count;
}

// Функція для підрахунку кількості додатних елементів у кожному рядку
void countPositivePerRow(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        int count = 0;
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > 0) {
                count++;
            }
        }
        cout << "Кількість додатних елементів у рядку " << i + 1 << ": " << count << endl;
    }
}

// Функція для циклічного зсуву елементів кожного стовпця на N позицій вниз
void shiftColumnsDown(int** matrix, int rows, int cols, int shift) {
    for (int j = 0; j < cols; j++) {
        int* tempCol = new int[rows];
        
        // Зсув елементів вниз
        for (int i = 0; i < rows; i++) {
            tempCol[(i + shift) % rows] = matrix[i][j];
        }
        
        // Запис зсунутих значень назад у стовпець
        for (int i = 0; i < rows; i++) {
            matrix[i][j] = tempCol[i];
        }
        
        delete[] tempCol;
    }
}

int main() {
    int rows, cols;
    cout << "Введіть кількість рядків: ";
    cin >> rows;
    cout << "Введіть кількість стовпців: ";
    cin >> cols;

    // Динамічна алокація пам'яті для матриці
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    // Введення елементів матриці
    cout << "Введіть елементи матриці:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    // Обчислення та виведення кількості парних чисел
    cout << "Кількість парних елементів: " << countEven(matrix, rows, cols) << endl;
    countPositivePerRow(matrix, rows, cols);
    printMatrix(matrix, rows, cols);
    int shift;
    cout << "Введіть кількість позицій для зсуву: ";
    cin >> shift;
    shiftColumnsDown(matrix, rows, cols, shift);
    printMatrix(matrix, rows, cols);

    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}

