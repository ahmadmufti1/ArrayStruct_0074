#include <iostream>
using namespace std;

int main(){
    //Deklarasi Array dengan inisalisasi
    int dataku[5] ={10,20,330,40,50};
    //Deklarasi tanpa inisialisasi
    int datamu[5];
    int x;
    //cara membaca array dataku
    cout << "data ke - 3 : " << dataku[2]<<endl;
    
    //operasi matematika 
    x = dataku [2]*3;
    //cara menulis atau mengisi arrray
    dataku[2] = 600;
    cout << "data ke-3 yang baru : " <<dataku[2]<<endl;
    
    // tampilkan data array dalam satu per satu
    cout << "data ke -1 : "<<datamu[0]<<endl;
    cout << "data ke -2 : "<<datamu[1]<<endl;
    cout << "data ke -3 : "<<datamu[2]<<endl;
    cout << "data ke -4 : "<<datamu[3]<<endl;
    cout << "data ke -5 : "<<datamu[4]<<endl;
    
    cout <<endl;

    //isi data dengan perulangan for
    for (int i = 0 ; i<=4; i++)
    {
        cout << "Data Index ke - " <<i <<":";
        cin >> datamu[i];
    }

    cout<<endl;
    // menampilkan data denagn perulangan for
    for (int i =0; i<=4; i++)
    {
        cout << "data ke - "<< i+1 <<":"<<datamu[i]<<endl;
    }
}