# UAS-ALGORITMA
Aplikasi Keuangan Harian

Deskripsi

Aplikasi Keuangan Harian adalah program sederhana berbasis C++ yang membantu pengguna mencatat dan menghitung pengeluaran harian mereka. Program ini memungkinkan pengguna untuk menambahkan pengeluaran, melihat total pengeluaran, dan menampilkan sisa saldo.

Fitur Utama

Tambah Pengeluaran

Pengguna dapat menambahkan pengeluaran dengan memasukkan nama kategori dan jumlah pengeluaran.

Program akan mengurangi saldo berdasarkan jumlah pengeluaran yang dimasukkan.

Program akan memberikan peringatan jika jumlah pengeluaran lebih besar dari saldo.

Tampilkan Total Pengeluaran

Menampilkan total pengeluaran yang telah dicatat sejauh ini.

Tampilkan Sisa Saldo

Menampilkan sisa saldo yang tersisa setelah dikurangi dengan total pengeluaran.

Keluar

Mengakhiri program dengan menampilkan pesan perpisahan.

Cara Menggunakan

Kompilasi program menggunakan compiler C++ seperti g++:

g++ -o keuangan_harian keuangan_harian.cpp

Jalankan program:

./keuangan_harian

Masukkan saldo awal saat diminta.

Pilih opsi yang tersedia di menu utama:

1 untuk menambah pengeluaran.

2 untuk menampilkan total pengeluaran.

3 untuk menampilkan sisa saldo.

4 untuk keluar dari aplikasi.

Program akan terus menampilkan menu utama hingga pengguna memilih opsi keluar.

Contoh Interaksi

Selamat datang di Aplikasi Keuangan Harian! Masukkan saldo awal Anda: 500000

Menu Utama:

Tambah Pengeluaran Tampilkan Total Pengeluaran Tampilkan Sisa Saldo Keluar Pilih opsi (1-4): 1 Masukkan nama kategori pengeluaran: Makanan Masukkan jumlah pengeluaran: 100000 Pengeluaran untuk Makanan sebesar 100000 berhasil ditambahkan! Menu Utama:

Tambah Pengeluaran Tampilkan Total Pengeluaran Tampilkan Sisa Saldo Keluar Pilih opsi (1-4): 3 Sisa saldo Anda: 400000 Menu Utama:

Tambah Pengeluaran Tampilkan Total Pengeluaran Tampilkan Sisa Saldo Keluar Pilih opsi (1-4): 4 Terima kasih telah menggunakan Aplikasi Keuangan Harian! Penanganan Error

Program akan menolak pengeluaran jika jumlah pengeluaran lebih besar dari saldo.

Program akan menolak pengeluaran jika jumlah yang dimasukkan kurang dari atau sama dengan nol.

Jika pengguna memasukkan opsi yang tidak valid, program akan memberikan pesan kesalahan dan meminta pengguna untuk memilih opsi yang benar.

Teknologi yang Digunakan

Bahasa Pemrograman: C++

Compiler: g++ atau compiler C++ lainnya

Program Pengelolaan Data Mahasiswa Program ini adalah aplikasi berbasis C++ yang digunakan untuk mengelola data mahasiswa. Program memiliki beberapa fitur seperti menambah data mahasiswa, mencari data berdasarkan NIM, mengurutkan data berdasarkan nilai akhir, serta menyimpan dan membaca data dari berkas (file).

Fitur Program Tambah Data Mahasiswa Memungkinkan pengguna untuk menambahkan data mahasiswa berupa:

NIM Nama Nilai Akhir Tampilkan Semua Data Menampilkan semua data mahasiswa yang telah dimasukkan.

Cari Data Mahasiswa Pencarian mahasiswa berdasarkan NIM menggunakan algoritma pencarian linear.

Urutkan Data Mengurutkan data mahasiswa berdasarkan Nilai Akhir dalam urutan menurun (descending) menggunakan algoritma Bubble Sort.

Simpan Data ke Berkas Menyimpan data mahasiswa ke dalam berkas (file) bernama data_mahasiswa.txt dengan format:

Copy code NIM,Nama,Nilai Akhir Baca Data dari Berkas Membaca data mahasiswa dari berkas data_mahasiswa.txt dan memuatnya kembali ke dalam program.

Keluar Mengakhiri program dengan menampilkan pesan perpisahan.

Cara Menggunakan Program Kompilasi Program Gunakan compiler C++ seperti g++ untuk mengompilasi program:

bash Copy code g++ -o pengelolaan_mahasiswa pengelolaan_mahasiswa.cpp Jalankan Program Jalankan program yang telah dikompilasi:

bash Copy code ./pengelolaan_mahasiswa Ikuti Instruksi Program akan menampilkan menu utama dengan beberapa pilihan:

markdown Copy code Menu Utama:

Tambah Data Mahasiswa Tampilkan Semua Data Cari Data Mahasiswa Urutkan Data Simpan Data ke Berkas Baca Data dari Berkas Keluar Pilih opsi (1-7): Pilih opsi yang diinginkan dengan memasukkan angka yang sesuai. Contoh Interaksi dengan Program yaml Copy code Menu Utama:

Tambah Data Mahasiswa Tampilkan Semua Data Cari Data Mahasiswa Urutkan Data Simpan Data ke Berkas Baca Data dari Berkas Keluar Pilih opsi (1-7): 1 Masukkan jumlah mahasiswa: 2 Masukkan NIM Mahasiswa ke-1: 12345 Masukkan Nama Mahasiswa ke-1: Budi Masukkan Nilai Akhir Mahasiswa ke-1: 85.0 Masukkan NIM Mahasiswa ke-2: 67890 Masukkan Nama Mahasiswa ke-2: Ani Masukkan Nilai Akhir Mahasiswa ke-2: 90.5 Data berhasil ditambahkan! Struktur Berkas Program menyimpan data ke dalam berkas data_mahasiswa.txt dengan format sebagai berikut: Copy code 12345,Budi,85.0 67890,Ani,90.5 Teknologi yang Digunakan Bahasa Pemrograman: C++ Compiler: g++
