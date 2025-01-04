#include <iostream>
#include <string>

using namespace std;

int main() {
    double saldoAwal, saldo, totalPengeluaran = 0;
    int pilihan;

    cout << "Selamat datang di Aplikasi Keuangan Harian!" << endl;
    cout << "Masukkan saldo awal Anda: ";
    cin >> saldoAwal;
    saldo = saldoAwal;

    do {
        cout << "\nMenu Utama:" << endl;
        cout << "1. Tambah Pengeluaran" << endl;
        cout << "2. Tampilkan Total Pengeluaran" << endl;
        cout << "3. Tampilkan Sisa Saldo" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih opsi (1-4): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                string kategori;
                double jumlahPengeluaran;
                cout << "Masukkan nama kategori pengeluaran: ";
                cin.ignore(); // Mengabaikan karakter newline dari input sebelumnya
                getline(cin, kategori);
                cout << "Masukkan jumlah pengeluaran: ";
                cin >> jumlahPengeluaran;

                if (jumlahPengeluaran <= 0) {
                    cout << "Jumlah pengeluaran harus lebih besar dari 0." << endl;
                } else if (jumlahPengeluaran > saldo) {
                    cout << "Saldo tidak mencukupi untuk pengeluaran ini." << endl;
                } else {
                    saldo -= jumlahPengeluaran;
                    totalPengeluaran += jumlahPengeluaran;
                    cout << "Pengeluaran untuk " << kategori << " sebesar " 
                         << jumlahPengeluaran << " berhasil ditambahkan!" << endl;
                }
                break;
            }
            case 2:
                cout << "Total pengeluaran Anda sejauh ini: " << totalPengeluaran << endl;
                break;

            case 3:
                cout << "Sisa saldo Anda: " << saldo << endl;
                break;

            case 4:
                cout << "Terima kasih telah menggunakan Aplikasi Keuangan Harian!" << endl;
                break;

            default:
                cout << "Pilihan tidak valid. Silakan pilih opsi antara 1 hingga 4." << endl;
                break;
        }
    } while (pilihan != 4);

    return 0;
}

