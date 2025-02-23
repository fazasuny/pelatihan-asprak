#include "matrix.h"

// Membuat matrix baru dengan nilai yang diberikan
Matrix newMatrix(int a, int b, int c, int d) {
    Matrix m;
    m.a = a;
    m.b = b;
    m.c = c;
    m.d = d;
    return m;
}

// Menampilkan matriks
void printMatrix(Matrix m) {
    printf("[ %d %d ]\n", m.a, m.b);
    printf("[ %d %d ]\n", m.c, m.d);
}

// Menjumlahkan dua matriks
Matrix add(Matrix m1, Matrix m2) {
    return newMatrix(m1.a + m2.a, m1.b + m2.b, m1.c + m2.c, m1.d + m2.d);
}

// Mengurangkan dua matriks
Matrix subtract(Matrix m1, Matrix m2) {
    return newMatrix(m1.a - m2.a, m1.b - m2.b, m1.c - m2.c, m1.d - m2.d);
}

// Menghitung determinan matriks
int determinant(Matrix m) {
    return (m.a * m.d) - (m.b * m.c);
}

// Transposisi matriks (mengubah langsung nilai dalam struct)
void transpose(Matrix *m) {
    int temp = m->b;
    m->b = m->c;
    m->c = temp;
}
