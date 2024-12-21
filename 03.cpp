#include <iostream>
#include <vector>
using namespace std;

void inputMatrix(vector<vector<int>>& matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        vector<int> row;
        for (int j = 0; j < cols; ++j) {
            int val;
            cin >> val;
            row.push_back(val);
        }
        matrix.push_back(row);
    }
}

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (const auto& val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

vector<vector<int>> addMatrices(const vector<vector<int>>& mat1, const vector<vector<int>>& mat2) {
    int rows = mat1.size();
    int cols = mat1[0].size();
    vector<vector<int>> result(rows, vector<int>(cols));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    return result;
}

vector<vector<int>> multiplyMatrices(const vector<vector<int>>& mat1, const vector<vector<int>>& mat2) {
    int rows1 = mat1.size();
    int cols1 = mat1[0].size();
    int cols2 = mat2[0].size();
    vector<vector<int>> result(rows1, vector<int>(cols2, 0));

    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    return result;
}

int main() {
    int rows, cols;

    cout << "Matrix Addition:\n";
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    cout << "Enter elements of first matrix:\n";
    vector<vector<int>> mat1;
    inputMatrix(mat1, rows, cols);

    cout << "Enter elements of second matrix:\n";
    vector<vector<int>> mat2;
    inputMatrix(mat2, rows, cols);

    vector<vector<int>> sum = addMatrices(mat1, mat2);
    cout << "Sum of matrices:\n";
    printMatrix(sum);

    cout << "\nMatrix Multiplication:\n";
    int rows1, cols1, rows2, cols2;
    cout << "Enter rows and columns for first matrix: ";
    cin >> rows1 >> cols1;

    cout << "Enter rows and columns for second matrix: ";
    cin >> rows2 >> cols2;

    if (cols1 != rows2) {
        cout << "Matrix multiplication not possible!\n";
        return 0;
    }

    cout << "Enter elements of first matrix:\n";
    vector<vector<int>> matA;
    inputMatrix(matA, rows1, cols1);

    cout << "Enter elements of second matrix:\n";
    vector<vector<int>> matB;
    inputMatrix(matB, rows2, cols2);

    vector<vector<int>> product = multiplyMatrices(matA, matB);
    cout << "Product of matrices:\n";
    printMatrix(product);

    return 0;
}
