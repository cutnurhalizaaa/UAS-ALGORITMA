#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;

// Struktur data mahasiswa
struct Mahasiswa {
    string nim;
    string nama;
    double nilaiAkhir;
};

// Vektor untuk menyimpan data mahasiswa
vector<Mahasiswa> dataMahasiswa;

// Fungsi untuk menambahkan data mahasiswa
void tambahDataMahasiswa() {
    int jumlah;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlah;

    for (int i = 0; i < jumlah; i++) {
        Mahasiswa m;
        cout << "Masukkan NIM Mahasiswa ke-" << i + 1 << ": ";
        cin >> m.nim;
        cin.ignore(); // Mengabaikan newline setelah input NIM
        cout << "Masukkan Nama Mahasiswa ke-" << i + 1 << ": ";
        getline(cin, m.nama);
        cout << "Masukkan Nilai Akhir Mahasiswa ke-" << i + 1 << ": ";
        cin >> m.nilaiAkhir;

        dataMahasiswa.push_back(m);
        cout << "Data berhasil ditambahkan!\n";
    }
}

// Fungsi untuk menampilkan semua data mahasiswa
void tampilkanSemuaData() {
    if (dataMahasiswa.empty()) {
        cout << "Tidak ada data mahasiswa.\n";
        return;
    }

    cout << "Daftar Data Mahasiswa:\n";
    for (const auto& m : dataMahasiswa) {
        cout << "NIM: " << m.nim << ", Nama: " << m.nama << ", Nilai Akhir: " << m.nilaiAkhir << endl;
    }
}

// Fungsi untuk mencari data mahasiswa berdasarkan NIM
void cariDataMahasiswa() {
    string nimCari;
    cout << "Masukkan NIM yang ingin dicari: ";
    cin >> nimCari;

    bool ditemukan = false;
    for (const auto& m : dataMahasiswa) {
        if (m.nim == nimCari) {
            cout << "Data ditemukan:\n";
            cout << "NIM: " << m.nim << ", Nama: " << m.nama << ", Nilai Akhir: " << m.nilaiAkhir << endl;
            ditemukan = true;
            break;
        }
    }

    if (!ditemukan) {
        cout << "Data dengan NIM " << nimCari << " tidak ditemukan.\n";
    }
}

// Fungsi untuk mengurutkan data mahasiswa berdasarkan Nilai Akhir (descending)
void urutkanData() {
    if (dataMahasiswa.empty()) {
        cout << "Tidak ada data mahasiswa untuk diurutkan.\n";
        return;
    }

    sort(dataMahasiswa.begin(), dataMahasiswa.end(), [](const Mahasiswa& a, const Mahasiswa& b) {
        return a.nilaiAkhir > b.nilaiAkhir; // Urutkan menurun
    });

    cout << "Data berhasil diurutkan berdasarkan Nilai Akhir (descending).\n";
}

// Fungsi untuk menyimpan data mahasiswa ke dalam file
void simpanDataKeBerkas() {
    ofstream file("data_mahasiswa.txt");
    if (!file) {
        cout << "Gagal membuka file untuk menyimpan data.\n";
        return;
    }

    for (const auto& m : dataMahasiswa) {
        file << m.nim << "," << m.nama << "," << m.nilaiAkhir << endl;
    }

    file.close();
    cout << "Data berhasil disimpan ke dalam berkas.\n";
}

// Fungsi untuk membaca data mahasiswa dari file
void bacaDataDariBerkas() {
    ifstream file("data_mahasiswa.txt");
    if (!file) {
        cout << "Gagal membuka file untuk membaca data.\n";
        return;
    }

    dataMahasiswa.clear(); // Kosongkan data sebelum membaca dari file
    string nim, nama;
    double nilaiAkhir;

    while (file >> nim) {
        file.ignore(1); // Mengabaikan karakter koma
        getline(file, nama, ',');
        file >> nilaiAkhir;
        file.ignore(1); // Mengabaikan newline

        dataMahasiswa.push_back({nim, nama, nilaiAkhir});
    }

    file.close();
    cout << "Data berhasil dibaca dari berkas.\n";
}

// Fungsi utama
int main() {
    int pilihan;

    do {
        cout << "\nMenu Utama:\n";
        cout << "1. Tambah Data Mahasiswa\n";
        cout << "2. Tampilkan Semua Data\n";
        cout << "3. Cari Data Mahasiswa\n";
        cout << "4. Urutkan Data\n";
        cout << "5. Simpan Data ke Berkas\n";
        cout << "6. Baca Data dari Berkas\n";
        cout << "7. Keluar\n";
        cout << "Pilih opsi (1-7): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tambahDataMahasiswa();
                break;
            case 2:
                tampilkanSemuaData();
                break;
            case 3:
                cariDataMahasiswa();
                break;
            case 4:
                urutkanData();
                break;
            case 5:
                simpanDataKeBerkas();
                break;
            case 6:
                bacaDataDariBerkas();
                break;
            case 7:
                cout << "Terima kasih telah menggunakan program ini.\n";
                break;
            default:
                cout << "Pilihan tidak valid. Silakan pilih opsi antara 1 hingga 7.\n";
                break;
        }
    } while (pilihan != 7);

    return 0;
}
