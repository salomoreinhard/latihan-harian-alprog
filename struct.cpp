#include <iostream>
using namespace std;

struct Buku {
    string judul;
    int jumlahHalaman;
    int tahunTerbit;
    string penulis;
};

void inputBuku(Buku buku[], int jumlah) {
    for (int i = 0; i < jumlah; i++) {
        cout << "\nBuku ke-" << i + 1 << endl;
        cout << "Judul: ";
        getline(cin >> ws, buku[i].judul); 
        cout << "Jumlah Halaman: ";
        cin >> buku[i].jumlahHalaman;
        cout << "Tahun Terbit: ";
        cin >> buku[i].tahunTerbit;
        cout << "Penulis: ";
        getline(cin >> ws, buku[i].penulis);
    }
}

void tampilkanBuku(const Buku buku[], int jumlah) {
    cout << "\nDaftar Buku:\n";
    for (int i = 0; i < jumlah; i++) {
        cout << "\nBuku ke - " << i + 1 << endl;
        cout << "Judul : " << buku[i].judul << endl;
        cout << "Jumlah Halaman : " << buku[i].jumlahHalaman << endl;
        cout << "Tahun Terbit : " << buku[i].tahunTerbit << endl;
        cout << "Penulis : " << buku[i].penulis << endl;
    }
}


int main() {
    int n;
    cout << "Masukkan jumlah buku : ";
    cin >> n;

    Buku daftarBuku[n]; 

    inputBuku(daftarBuku, n);
    tampilkanBuku(daftarBuku, n);

    return 0;
}
