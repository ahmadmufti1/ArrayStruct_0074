#include <iostream>
using namespace std;

struct DetailAlamat{
    string desa;
    string kota;
};

struct orang{
    string nama;
    DetailAlamat alamat;
    int umur;
};

int main()
{
    //deklarasi obyek dengan struct orang
    orang mhs;
    //isi objek
    cout << "nama mahasiswa:";
    getline( cin, mhs.nama);
    cout << "Alamat Desa:";
    cin >> mhs.alamat.desa;
    getline (cin, mhs.alamat.desa);
    cin >> mhs.alamat.kota;
    cout << "umur:";
    cin >> mhs.umur;
    cout <<endl;
    // menampilkan isi objek
    cout << "Nama Mahasiswa: " << mhs.nama<<endl;
    cout << "alamat Desa : " << mhs.alamat.desa<<endl;
    cout << "alamat Kota : " << mhs.alamat.kota<<endl;
    cout << "umur : " << mhs.umur<<endl;
}