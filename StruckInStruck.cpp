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
