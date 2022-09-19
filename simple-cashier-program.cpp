#include <iostream>
#include <string>

using namespace std;

int main(){

    int x, count = 0, loop;
    float harga, keuntungan, biaya, total, bayar;
    string barang;

    cout << "================================================" << endl;
    cout << "Selamat Datang Di IndoApril, Selamat Berbelanja " << endl;
    cout << "================================================" << endl;
    cout << endl;
    cout << "Berapa Banyak Barang yang Anda Beli ? " << endl;
    cin >> loop;

    for (int count = 0; count < loop; count++){
    
    cout << "================================================" << endl;
    cout << "Silahkan Masukkan Nama Barang : ";
    cin >> barang;
    getline (cin, barang);
    cout << endl;

    cout << "Masukkan Harga : ";
    cin >> harga;
    cout << endl;

    cout << "Jumlah Barang Yang Dibeli : ";
    cin >> x;
    cout << "================================================" << endl;

    biaya = x*harga;
    total += biaya;
    bayar = 30*total/100+total;
    keuntungan = 30*total/100;

    }

    cout << endl;
    cout << endl;
    cout << "===================== TAGIHAN PEMBAYARAN =====================" << endl;
    cout << endl;
    cout << "Biaya yang Harus di Bayar Adalah Sebesar " << bayar << " Rupiah" << endl;
    cout << endl;
    cout << "Dengan Keuntungan yang Diperoleh Toko Sebesar " << keuntungan << " Rupiah" << endl;
    cout << endl;
    cout << "=======================  TERIMA KASIH  =======================" << endl;

    return 0;

}