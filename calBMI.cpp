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

  cin.get();     // tekan enter
  system("cls"); // membersihkan layar setelah menekan enter

  // input height
  cout << "\nMasukkan tinggi badan (cm)  : ";
  cin >> tinggi;

  //input berat
  cout << "Masukkan berat badan (kg)   : ";
  cin >> berat;

  // assigmnet var hasil
  hasil = (berat / (tinggi * tinggi)) * 10000;

  // Menentukkan BMI 
  if (hasil <= 18.5)
  {
    cout << "\nHasil : \n";
    cout << "BMI       = " << hasil << "\n";
    cout << "Kategori  = Berat badan kurang" << endl;
  }
  else if (hasil > 18.5 && hasil <= 22.9 )
  {
    cout << "\nHasil : \n";
    cout << "BMI       = " << hasil << "\n";
    cout << "Kategori  = Berat badan normal" << endl;
  }
  else if (hasil > 22.9 && hasil <= 29.9)
  {
    cout << "\nHasil : \n";
    cout << "BMI       = " << hasil << "\n";
    cout << "Kategori  = Berat badan berlebih" << endl;
  }
  else if (hasil >= 30 &)
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
