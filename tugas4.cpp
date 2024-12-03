#include <iostream>
using namespace std;

// Deklarasi fungsi dan prosedur
void displayMenu();
void performOperation(int choice);
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    int choice;

    do {
        displayMenu();
        cout << "Pilih operasi (1-5): ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            performOperation(choice);
        } else if (choice == 5) {
            cout << "Keluar dari aplikasi. Terima kasih!" << endl;
        } else {
            cout << "Pilihan tidak valid. Coba lagi!" << endl;
        }

        cout << endl;
    } while (choice != 5);

    return 0;
}

// Prosedur untuk menampilkan menu
void displayMenu() {
    cout << "=== KALKULATOR SEDERHANA ===" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "5. Keluar" << endl;
}

// Prosedur untuk melakukan operasi berdasarkan pilihan
void performOperation(int choice) {
    double num1, num2, result;
    cout << "Masukkan angka pertama: ";
    cin >> num1;
    cout << "Masukkan angka kedua: ";
    cin >> num2;

    switch (choice) {
        case 1:
            result = add(num1, num2);
            cout << "Hasil Penjumlahan: " << result << endl;
            break;
        case 2:
            result = subtract(num1, num2);
            cout << "Hasil Pengurangan: " << result << endl;
            break;
        case 3:
            result = multiply(num1, num2);
            cout << "Hasil Perkalian: " << result << endl;
            break;
        case 4:
            if (num2 != 0) {
                result = divide(num1, num2);
                cout << "Hasil Pembagian: " << result << endl;
            } else {
                cout << "Error: Pembagian dengan nol tidak diperbolehkan!" << endl;
            }
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
    }
}

// Fungsi untuk penjumlahan
double add(double a, double b) {
    return a + b;
}

// Fungsi untuk pengurangan
double subtract(double a, double b) {
    return a - b;
}

// Fungsi untuk perkalian
double multiply(double a, double b) {
    return a * b;
}

// Fungsi untuk pembagian
double divide(double a, double b) {
    return a / b;
}
