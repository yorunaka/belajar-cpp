#include<iostream>
#include<cmath>
using namespace std;

//percobaan membuat program penghitung luas persegi panjang

int main (){
	int p,l,luas;
	
	cout<<"========================================================="<<endl;
	cout<<"Selamat Datang di Program Penghitung Luas Persegi Panjang"<<endl;
	cout<<"========================================================="<<endl;
	
	//mesin utama
	cout<<"Masukkan Panjang :";
	cin>>p; //pengguna bisa memasukkan panjang dari persegi yang akan dihitung
	
	cout<<"Masukkan Lebar :";
	cin>>l; //pengguna bisa memasukkan lebar dari persegi yang akan dihitung

	luas=p*l;
	//end of mesin utama
	
	cout<<"=================================="<<endl;
	cout<<"Luas Persegi Panjang Adalah "<<luas<<" cm";
	cout<<", Mantap Maszeh"<<endl;
	cout<<"=================================="<<endl;

	return 0;
}
