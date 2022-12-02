#include <iostream>
using namespace std;

int main()
{
  // ** Program menghitung berbagai macam bangun datar dengan swich **

  cout << "\nHitung Luas dan Keliling Bangun Datar\n";
  cout << "=====================================\n"
       << endl;

  // deklarasi variabel
  int pilihan, pilihanDua, sisiPersegi, le_persegi, k_persegi, lk_persegi, pj_persegi, lu_persegiPanjang, k_persegiPanjang;

  // deklarasi variable lingkaran
  const double phi = 3.14;
  double r, lu_lingkaran, k_lingkaran;

  // usur memilih pilihan yang ingin di hitung
  cout << "1. Persegi\n";
  cout << "2. Persegi Panjang\n";
  cout << "3. Lingkaran\n";
  cout << "Masukkan Pilihan [1..3] : ";
  cin >> pilihan;

  system("cls"); // membersihkan layar setelah user memilih

  // mendeteksi pilihan user
  switch (pilihan)
  {
  case 1: // persegi
    cout << "\nBangun Datar Persegi\n"
         << endl;
    cout << "Masukkan ukuran sisi : ";
    cin >> sisiPersegi;

    // user memilih apa yang ingin di kerjakan
    cout << "\n1. Hitung Luas\n";
    cout << "2. Hitung Keliling\n";
    cout << "3. Hitung Luas dan Keliling\n";
    cout << "Masukkan Pilihan [1..3] : ";
    cin >> pilihanDua;

    // menghitung pilihan user
    switch (pilihanDua)
    {
    case 1:
      le_persegi = sisiPersegi * sisiPersegi;
      cout << "\nLuas = " << le_persegi << endl;
      break;

    case 2:
      k_persegi = 4 * sisiPersegi;
      cout << "\nKeliling = " << k_persegi;
      break;

    case 3:
      le_persegi = sisiPersegi * sisiPersegi;
      cout << "\nLuas = " << le_persegi;

      k_persegi = 4 * sisiPersegi;
      cout << "\nKeliling = " << k_persegi;
      break;

    default:
      cout << "\t\nMaaf pilihan Anda tidak ditemukan" << endl;
      break;
    }
    break; // todo : akhir case 1

  case 2: // Persegi panjang
    cout << "\nBangun Datar Persegi Panjang" << endl;

    // user memasukan panjang dan lebar
    cout << "\nMasukkan Ukuran Panjang : ";
    cin >> pj_persegi;
    cout << "Msukkan Ukuran Lebar : ";
    cin >> le_persegi;

    // user memilih apa yang ingin di kerjakan
    cout << "\n1. Hitung Luas\n";
    cout << "2. Hitung Keliling\n";
    cout << "3. Hitung Luas dan Keliling\n";
    cout << "Masukkan Pilihan [1..3] : ";
    cin >> pilihanDua;

    switch (pilihanDua)
    {
    case 1:
      lu_persegiPanjang = pj_persegi * le_persegi;
      cout << "\nLuas = " << lu_persegiPanjang;
      break;

    case 2:
      k_persegiPanjang = (2 * pj_persegi) + (2 * le_persegi);
      cout << "\nKeliling = " << k_persegiPanjang;
      break;

    case 3:
      lu_persegiPanjang = pj_persegi * le_persegi;
      cout << "\nLuas = " << lu_persegiPanjang;

      k_persegiPanjang = (2 * pj_persegi) + (2 * le_persegi);
      cout << "\nKeliling = " << k_persegiPanjang;
      break;

    default:
      cout << "\n\tMaaf pilihan Anda tidak ditemukan" << endl;
      break;
    }
    break; // todo : akhir case 2

  case 3: // Lingkaran
    cout << "\nBangun Datar Lingkaran" << endl;

    // user memasukan jari-jari
    cout << "\nMasukkan ukuran jari-jari : ";
    cin >> r;

    // user memilih apa yang ingin di kerjakan
    cout << "\n1. Hitung Luas\n";
    cout << "2. Hitung Keliling\n";
    cout << "3. Hitung Luas dan Keliling\n";
    cout << "Masukkan Pilihan [1..3] : ";
    cin >> pilihanDua;

    switch (pilihanDua)
    {
    case 1:
      lu_lingkaran = phi * r * r;
      cout << "\nLuas = " << lu_lingkaran;
      break;

    case 2:
      k_lingkaran = 2 * phi * r;
      cout << "\nLuas = " << k_lingkaran;
      break;

    case 3:
      lu_lingkaran = phi * r * r;
      cout << "\nLuas = " << lu_lingkaran;

      k_lingkaran = 2 * phi * r;
      cout << "\nKeliling = " << k_lingkaran;
      break;

    default:
      cout << "\n\tMaaf pilihan Anda tidak ditemukan" << endl;
      break;
    }
    break; // todo : akhir case 3

  default:
    cout << "\t\nMaaf pilihan Anda tidak ditemukan" << endl;
    break;
  };

  cout << "\n\nTekan enter untuk keluar..." << endl;
  cin.get();
  cin.get();
  return 0;
}