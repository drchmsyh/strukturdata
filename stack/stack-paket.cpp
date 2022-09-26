#include <iostream>
#include <conio.h>
#define MAX 100

using namespace std;

struct paket{
    char jenis_brg[30];
    int berat;
    char kota[30];
};

struct paket kirim[MAX];

void pushdata(int top){
    if(top > MAX){
        cout << "Stack is Full";
    }else{
        cout << "Masukkan Jenis Barang  : ";
        cin >> kirim[top].jenis_brg;
        cout << "Masukkan Berat barang  : ";
        cin >> kirim[top].berat;
        cout << "Masukkan Kota Tujuan   : ";
        cin >> kirim[top].kota;
        cout << endl;
        top = top+1;
    }
}

void popdata(int top){
    cout << "Pop Data"<<endl;
    if(top == 1){
        cout << "Stack is Empty"<< endl << endl;
    }else{
        cout << "Data terakhir yang akan dihapus : " <<
        kirim[top-1].jenis_brg << ", " <<
        kirim[top-1].berat << " kg,"<<
        kirim[top-1].kota << endl << endl;
        top = top-1;
    }

}


void tampildata(int x){
    cout << "Daftar Kiriman Paket" << endl;
    for(int a=x-1; a>0; a--){
        cout << x-a << ". " << kirim[a].jenis_brg << ", " <<
        kirim[a].berat <<" kg,"<< " "<<
        kirim[a].kota << endl;
    }
    cout << endl << endl;
    cout << "Press any key to continue..." << endl;
    getch();
    cout << endl;
}



int main()
{
    int pilih;
    int datake = 1;
    do{
        cout << "Menu Utama"<< endl;
        cout << "1. Push Data"<< endl;
        cout << "2. Pop Data"<< endl;
        cout << "3. Tampil Data"<< endl;
        cout << "9. Keluar"<< endl;
        cout << "Pilihan Anda [ 1-9 ] : ";
        cin >> pilih;
        cout << endl;
        if(pilih == 1){
            cout << "Push Data" <<endl;
            pushdata(datake);
            datake++;
        }if(pilih == 2){
            popdata(datake);
            datake--;
        }if(pilih == 3){
            tampildata(datake);
        }

    }
    while (pilih!=9);


    return 0;
}
