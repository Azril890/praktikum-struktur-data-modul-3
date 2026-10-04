#include <iostream>
using namespace std;

// Menampilkan array 2D
void tampilArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Menukar isi 2 array pada posisi tertentu
void tukarArray(int arr1[3][3], int arr2[3][3], int baris, int kolom) {
    int temp = arr1[baris][kolom];
    arr1[baris][kolom] = arr2[baris][kolom];
    arr2[baris][kolom] = temp;
}

// Menukar isi variabel menggunakan pointer
void tukarPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    // 2 array 2D ukuran 3x3
    int array1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int array2[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    cout << "Array 1 sebelum ditukar:" << endl;
    tampilArray(array1);

    cout << "\nArray 2 sebelum ditukar:" << endl;
    tampilArray(array2);

    // Menukar posisi baris 1 kolom 1
    tukarArray(array1, array2, 1, 1);

    cout << "\nArray 1 setelah ditukar:" << endl;
    tampilArray(array1);

    cout << "\nArray 2 setelah ditukar:" << endl;
    tampilArray(array2);

    // Contoh penggunaan pointer
    int a = 100;
    int b = 200;

    cout << "\nSebelum tukar pointer:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    tukarPointer(&a, &b);

    cout << "Setelah tukar pointer:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}