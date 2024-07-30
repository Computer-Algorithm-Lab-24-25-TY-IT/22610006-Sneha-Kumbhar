#include <iostream>

using namespace std;

const int MAX = 100; 

int main() {
    int r1, c1, r2, c2;
    
    cout << "Enter the number of rows and columns of the first matrix: ";
    cin >> r1 >> c1;
    
    cout << "Enter the number of rows and columns of the second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Matrices cannot be multiplied!" << endl;
        return 0;
    }
    
    int matrix1[MAX][MAX];
    int matrix2[MAX][MAX];
    int result[MAX][MAX] = {0};
    
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cin >> matrix1[i][j];
        }
    }
    
    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < r2; ++i) {
        for (int j = 0; j < c2; ++j) {
            cin >> matrix2[i][j];
        }
    }
    
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            for (int k = 0; k < c1; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    
    cout << "Resultant matrix:" << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
