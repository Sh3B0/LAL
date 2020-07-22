/*
 * LAL - Linear Algebra Library -- Project under development --
 * This file is a sample test client for the library.
 */

#include "Matrix/matrix.h"
#include <iostream>

using namespace std;

int main() {
    open_log();
    lg << "Test client started...\n";

    matrix<double> a(3, 3);
    cin >> a;
    try {
        cout << "Matrix Rank = " << a.getRank() << '\n';
        cout << "Matrix Trace = " << a.getTrace() << '\n';
        cout << "Matrix Determinant = " << a.getDeterminant() << '\n';
        cout << "Matrix in RREF:\n" << *new matrix<double>(a.getRREF());
        cout << "Matrix Transpose:\n" << *new matrix<double>(a.getTranspose());
        cout << "Matrix Inverse:\n" << *new matrix<double>(a.getInverse());
    }
    catch (error &e) {
        cout << e.what();
    }
    close_log();
    system("pause");
}
