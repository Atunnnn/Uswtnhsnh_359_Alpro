#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

class Elektronik{	
	public:
		void Barang();
		void Pesanan();
		void Belanja();
		
	private:
		string barang[100]={"Samsung Evo","SanDisk 16GB","Logitech M170","WD Green 120GB","Garmin Venu SQ","Epson L3210 AIO"};
      int harga[100]={200,60,120,400,3100,2500};
    	int stok[100]={30,45,55,23,12,14};
    	string cart_barang[100];
    	int cart_harga[100];
    	int jumlah,indeks=-1,N;
    	string barang_nama;
    	int barang_harga,barang_stok;
};

void Elektronik::Barang(){ 
	cout<<"______________________________________________________\n";
    cout<<"Kode\t  Barang\t\t\tHarga\t\t\tStok Barang|\n";
    cout<<"___________________________________________________\n";
   	for(int i=0;i<6;i++){
        cout<<" "<<i<<"\t\t"<<barang[i]<<"\t\tRp. "<<harga[i]<<".000\t\t\t"<<stok[i]<<" "<<endl;
   }
   cout<<"___________________________________________________\n";
   cout<<endl;
   
}

void Elektronik::Pesanan(){
// untuk Keranjang Pesanan 
    char lagi;
    char input;
    do{
        int N[100];
        int kode;
        cout<<"Masukkan kode barang : ";
        cin>>kode;
        if(stok[kode]==0){
            cout<<"Barang yang anda pilih ‘Out Of Stock'"<<endl;
        }else{
        	cout<<"Nama barang \t: "<<barang[kode]<<endl;
        	cout<<"Harga barang \t: "<<harga[kode]<<endl;
        	cout<<"Stok barang \t: "<<stok[kode]-1<<endl;
        	indeks=indeks+1;
        	cart_barang[indeks]=barang[kode];
        	cart_harga[indeks]=harga[kode];
        	stok[kode]=stok[kode]-1;
        	jumlah=jumlah+harga[kode];
        	cout<<"Total harga \t: "<<jumlah<<endl;
        }
        cout<<"Belanja lagi?[y/t] ";
        cin>>lagi;
        cout<<endl;
    }while(lagi=='Y' || lagi=='y');
  
}	

void Elektronik::Belanja(){
// untuk Keranjang Belanja 
    cout<<endl;
    cout<<"__________________________________________________\n";
    cout<<"Daftar Barang yang anda beli:"<<endl;
    for(int i=0;i<=6;i++){
        cout<<"\t"<<i+1<<" . "<<cart_barang[i]<<"\t\t\tRp. "<<cart_harga[i]<<endl;
      }
}

int main() {
	Elektronik x;
  x.Barang();
  cout<<endl;
  x.Pesanan();
  cout<<endl;
  x.Belanja();
  cout<<endl;

	return 0;
}
