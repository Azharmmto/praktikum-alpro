#include <iostream>
using namespace std;

int main()
{
  // *** Latihan Membuat Kalulator BMI (Body Mass Index) ***
  /*
    * Rumus *
    BMI = wight/height*height
      wight  : berat badan (kg)
      height : tinggi badan (cm)
  */

  // deklarasi variabel
  float tinggi, berat, hasil;

  cout << "\nNilai tinggi badan harus berupa angka desimal agar \ntidak terjadi kesalahan dalam perhitungan.\n \nMisalnya tinggi Anda 171cm maka nilai \ndesimalnya adalah 1.71 " << endl;

  cin.get();     // tekan enter
  system("cls"); // membersihkan layar setelah menekan enter

  // input height
  cout << "\nMasukkan tinggi badan (cm)  : ";
  cin >> tinggi;

  //input berat
  cout << "Masukkan berat badan (kg)   : ";
  cin >> berat;

  // assigmnet var hasil
  hasil = berat / (tinggi * tinggi);

  // Menentukkan BMI 
  if (hasil <= 18.5 && hasil >= 5)
  {
    cout << "\nHasil : \n";
    cout << "BMI       = " << hasil << "\n";
    cout << "Kategori  = Berat badan kurang" << endl;
  }
  else if (hasil <= 22.9 && hasil >= 5)
  {
    cout << "\nHasil : \n";
    cout << "BMI       = " << hasil << "\n";
    cout << "Kategori  = Berat badan normal" << endl;
  }
  else if (hasil <= 29.9 && hasil >= 5)
  {
    cout << "\nHasil : \n";
    cout << "BMI       = " << hasil << "\n";
    cout << "Kategori  = Berat badan berlebih" << endl;
  }
  else if (hasil >= 30 && hasil >= 5)
  {
    cout << "\nHasil : \n";
    cout << "BMI       = " << hasil << "\n";
    cout << "Kategori  = Obesitas" << endl;
  }
  else
  {
    cout << "\n\tMaaf BMI Anda tidak ditemukan" << endl;
  }

  return 0;
}
