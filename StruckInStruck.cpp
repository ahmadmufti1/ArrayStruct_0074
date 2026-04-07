#include <iostream>
using namespace std;

//deklarasi struct DetailAlamat dengan anggota desa dan kota
struct DetailAlamat{
    string desa;
    string kota;
};

//deklarasi struct orang dengan anggota nama, alamat (yang bertipe DetailAlamat), dan umur
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
    cin >> mhs.nama;
    cout << "Alamat Desa:";
    cin >> mhs.alamat.desa;
    cout << "Alamat Kota:";
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