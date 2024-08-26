// 9) Write a Program of Two 1D Matrix Addition using Operator Overloading

#include <iostream>
#include <vector>

using namespace std;

class Matrix {
	private:
    vector<int> data;
    int size;

	public:
    // Constructor to initialize matrix with a given size
    Matrix(int n) : size(n) {
        data.resize(n);
    }

    // Operator to access elements (indexing)
    int& operator[](int index) {
        return data[index];
    }

    // Overloading the + operator to add two matrices
    Matrix operator+(const Matrix& other) {
        Matrix result(size);
        for (int i = 0; i < size; i++) {
            result[i] = this->data[i] + other.data[i];
        }
        return result;
    }

    // Function to display the matrix
    void display() const {
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int n;

    cout << "Enter the size of the matrices: ";
    cin >> n;

    Matrix mat1(n), mat2(n);

    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> mat1[i];
    }

    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> mat2[i];
    }

    Matrix result = mat1 + mat2;

    cout << "Resultant Matrix after Addition:" << endl;
    result.display();

    return 0;
}
