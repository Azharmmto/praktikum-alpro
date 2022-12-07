#include <iostream>
using namespace std;

int main() {

 // *** Membuat program kasir sederhana dari toko ATK ***

// var harga atk
int pulpen = 5000,
    pensil = 3000,
    buku = 15000,
     // var jmlh pembelian atk, hasil & total
    jmlh_pembelian_plp,
    jmlh_pembelian_psl,
    jmlh_pembelian_bk,
    hasil_pembelian_plp,
    hasil_pembelian_psl, 
    hasil_pembelian_bk,
    total_pembelian;

float diskon_bk, pajak;

     // input jumlah pembelian
     cout << "\nMasukkan jumlah pembelian:\n";

     cout << "Pulpen : ";
     cin >> jmlh_pembelian_plp;

     cout << "Pensil : ";
     cin >> jmlh_pembelian_psl;

     cout << "Buku   : ";
     cin >> jmlh_pembelian_bk;

     // menentukan detail harga
     hasil_pembelian_plp = jmlh_pembelian_plp * pulpen;
     hasil_pembelian_psl = jmlh_pembelian_psl * pensil;
     hasil_pembelian_bk  = jmlh_pembelian_bk * buku;

     // cout detail pembelian atk
     cout << "\nDetail pembelian:\n";
     cout << jmlh_pembelian_plp << " Pulpen    : " << "Rp" << hasil_pembelian_plp << endl;
     cout << jmlh_pembelian_psl << " Pensil    : " << "Rp" << hasil_pembelian_psl << endl;
     cout << jmlh_pembelian_bk  << " Buku      : " << "Rp" << hasil_pembelian_bk << endl;

      // menjumlahkan total pembelian atk
     total_pembelian = hasil_pembelian_plp + hasil_pembelian_psl + hasil_pembelian_bk;

     // * menentukan pajak pembelian jika Tidak ada diskon 
     pajak = total_pembelian * 0.1;

     //cout total pembelian
     cout <<"---------------------"<< endl;
     cout << "Total       : " << "Rp" << total_pembelian << endl;
     cout <<"---------------------"<< endl;

     // menentukan apkh ada pembelian buku dengan swich
     switch (hasil_pembelian_bk > 0)
     {
     case 1:
          diskon_bk = total_pembelian * 0.15;

            // * menentukan pajak pembelian jika ada diskon buku
          pajak = (total_pembelian - diskon_bk) * 0.1;
     break;
     }

     cout << "Diskon      : " << "Rp" << diskon_bk << endl;
     cout << "Pajak       : " << "Rp" << pajak << endl;
     cout <<"---------------------\n";

     // total final
     cout <<  "Grand Total : " << "Rp" << total_pembelian - diskon_bk + pajak << endl;


     cout << "\nTekan enter untuk keluar..." << endl;
     cin.get();
     cin.get();
     return 0;
}