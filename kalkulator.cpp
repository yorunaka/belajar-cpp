#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int bil1, bil2, pil;
	float hasil;
	string operasi;

    cout << "PILIH OPERATOR ARITMATIKA" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "5. Modulus" << endl;
    cout << "6. Akar Kuadrat" << endl;
    cout << endl;

    cout << "Masukan Pilihan : ";
    cin >> pil;
    cout << "Masukkan Bilangan Pertama :";
    cin >> bil1;
    cout << "Masukkan Bilangan Kedua :";
    cin >> bil2;

    switch (pil) {
    case 1: hasil = bil1 + bil2;
        operasi = "Tambah";
        break;
    case 2: hasil = bil1 - bil2;
        operasi = "Kurang";
        break;
    case 3: hasil = bil1 * bil2;
        operasi = "Kali";
        break;
    case 4: hasil = bil1 / bil2;
        operasi = "Bagi";
        break;
    case 5: hasil = bil1 % bil2;
        operasi = "Mod";
        break;
    case 6: hasil = sqrt(bil1);
    	operasi = "akar";
    	break;
    default:
    	cout << 'Salah woy' << endl;
    	
    }
    cout << "==========================" << endl;
    cout << "   " << bil1 << operasi << bil2 << '=' << hasil << endl;
    cout << "==========================" << endl;

    return 0;

}
