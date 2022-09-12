#include<iostream>
#include<cmath>
using namespace std;
//program penghitung luas dan keliling lingkaran


int main(){
	//deklarasi variabel
	int r,d, pil;
	float luas, keliling;
	const float phi=3.14159;
	
	//program
	cout<<"Program Penghitung Luas dan Keliling Lingkaran (dalam satuan cm)"<<endl;
	cout<<"Anda Ingin Menghitung Apa?"<<endl;
	cout<<"1. Luas Lingkaran"<<endl;
	cout<<"2. Keliling Lingkaran"<<endl;
	cout<<endl;
	cin>>pil;
	
	
	switch(pil){
		
		case 1:;
		cout<<"Masukkan Jari-Jari Lingkaran : ";
		cin>>r;
		luas=phi*r*r;
		cout<<endl;
		cout<<"Luas Lingkaran Adalah"<<luas<<"cm"<<endl; //satuan yg digunakan adalah cm
		break;
		
		case 2:;
		cout<<"Masukkan Diameter Lingkaran : ";
		cin>>d;
		keliling=phi*d;
		cout<<endl;
		cout<<"Keliling Lingkaran Adalah"<<keliling<<"cm"<<endl; //satuan yg digunakan adalah cm
		break;
		
	}
	
	return 0;
}
	
	
