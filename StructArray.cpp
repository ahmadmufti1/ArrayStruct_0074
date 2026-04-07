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
    orang mhs[3];
    //isi objek
    for(int i = 0; i <= 2; i++){
    cout << "nama mahasiswa:";
    getline( cin, mhs[i].nama);
    cout << "Alamat Desa:";
    cin >> mhs[i].alamat.desa;
    getline (cin, mhs[i].alamat.desa);
    cin >> mhs[i].alamat.kota;
    cout << "umur:";
    cin >> mhs[i].umur;
    cin.ignore();
    }
    cout <<endl;
    // menampilkan isi objek
    for(int i = 0;i <= 2; i++){
    cout << "Nama Mahasiswa: " << mhs[i].nama<<endl;
    cout << "alamat Desa : " << mhs[i].alamat.desa<<endl;
    cout << "alamat Kota : " << mhs[i].alamat.kota<<endl;
    cout << "umur : " << mhs[i].umur<<endl;
    }
}