#include <iostream>
using namespace std;

int main()
{
  // *** Program menentukan vaksin yang sesuai dengan usia ***
  /*
    * Vaksin sesuai berdaarkan umur *
    Pfizer        : 12 tahun ke atas
    Moderna       : 18 tahun ke atas
    Sinovac       : 18 tahun ke atas
    AstraZeneca   : 18-55 tahun
    Novavax       : 18-59 tahun
    Sinopharm     : 18-80 tahun
  */

  // deklarasi variabel
  short thnLahir, umur;
  short thnIni = 2021;

  // user memasukkan tahun lahir
  cout << "\nMasukkan tahun lahir : ";
  cin >> thnLahir;

  // menentukan umur user dan assigmnet variabel umur
  umur = thnIni - thnLahir;

  if (umur >= 12 && umur <= 18)
  {
    cout << "\nHasil:\n";
    cout << "Umur Anda : " << umur << " tahun" << endl;
    cout << "Vaksin yang cocok:\n";
    cout << "- Pfizer\n";
  }
  else if (umur >= 18 && umur <= 55)
  {
    cout << "\nHasil:\n";
    cout << "Umur Anda : " << umur << " tahun" << endl;
    cout << "Vaksin yang cocok:\n";
    cout << "- Pfizer\n";
    cout << "- Moderna\n";
    cout << "- Sinovac\n";
    cout << "- AstraZeneca\n";
  }
  else if (umur >= 18 && umur <= 59)
  {
    cout << "\nHasil:\n";
    cout << "Umur Anda : " << umur << " tahun" << endl;
    cout << "Vaksin yang cocok:\n";
    cout << "- Pfizer\n";
    cout << "- Moderna\n";
    cout << "- Sinovac\n";
    cout << "- AstraZeneca\n";
    cout << "- Novavax\n";
  }
  else if (umur >= 18 && umur <= 80)
  {
    cout << "\nHasil:\n";
    cout << "Umur Anda : " << umur << " tahun" << endl;
    cout << "Vaksin yang cocok:\n";
    cout << "- Pfizer\n";
    cout << "- Moderna\n";
    cout << "- Sinovac\n";
    cout << "- Sinopharm\n";
  }
  else
  {
    cout << "\nHasil:\n";
    cout << "Umur Anda : " << umur << " tahun" << endl;
    cout << "\t\nTidak adan vaksin yang cocok\n";
  }
}