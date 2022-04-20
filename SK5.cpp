#include<iostream>
#include<string.h>

using namespace std;
class mahasiswa{
public:
	long pembayaran();
	int biodata();
	int matakuliah();
  
private:
	int  jml_sks, ttl_byr,mtkl ;
	string n, matkul[20];
	long nim;
};
int mahasiswa::biodata(){
	cout<<"nama : "; cin>>n;
	cout<<"NIM 	: "; cin>>nim;
	cout<<"nama : "<<n<<endl;
	cout<<"NIM	: ";
	return nim;
	
}
int mahasiswa::matakuliah(){
	cout<<"berapa matkul : ";	cin>>mtkl;
	for(int i=0; i<mtkl; i++){
		cout<<"matkul "<<i+1<<":";cin>>matkul[i];
		cout<<endl;
    
	}
  
  return mtkl;	
}


long mahasiswa::pembayaran()
{
  cout<<"masukan total sks : "; cin>>jml_sks;
  cout<<"harga per sks = Rp.120.000"<<endl;
  cout<<"diskon 15%"<<endl;
  	ttl_byr = jml_sks*120000*15/100;
  
  return ttl_byr; 
}

int main(){

	mahasiswa b;
	cout<<b.biodata();
	cout<<endl;
	cout<<b.matakuliah();
	cout<<endl;
  	cout<<b.pembayaran();
 	cout<<endl;
  
	return 0;	
}

