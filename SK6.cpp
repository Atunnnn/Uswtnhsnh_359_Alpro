#include <iostream>
using namespace std;

class mahasiswa{
public:
    int input();
    int proses();
    long output();
private:
    char nama_mhs[20], dosen[20], matkul[10];
    int nim;
	int jum;
	int nilai[2];
	int jml_nilai;
	int rata_rata;
	int nilai_max;
	int nilai_min;

};

int mahasiswa::input(){
	cout<<"Masukkan Nama Dosen : ";cin>>dosen;
	for(int i=0;i<2;i++){
		cout<<"Masukkan Nama Mahasiswa : ";cin>>nama_mhs;
	cout<<"Masukkan NIM : ";cin>>nim;
		cout<<"Masukkan Nama Mata Kuliah : ";cin>>matkul[i];
		cout<<"Masukkan Nilai : ";cin>>nilai[i];
	}
};

int mahasiswa::proses(){
	for (int i=0;i<2;i++){
		cout<<"Nilai Mahasiswa ke –  "<<i+1 << ": "<<nilai[i]<<endl;
		jml_nilai = jml_nilai + nilai[i];

		if(nilai_max < nilai[i]){
			nilai_max = nilai[i];
		}
		else if(nilai_min > nilai[i]){
			nilai_min = nilai[i];
		}
	}
	cout<<"Jumlah nilai mahasiswa : "<<jml_nilai<<endl;
	rata_rata = jml_nilai/2;
	cout<<"Rata-rata nilai mahsiswa : "<<rata_rata<<endl;
	cout<<"Nilai tertinggi mahasiswa : "<<nilai_max<<endl;
	cout<<"Nilai terendah mahasiswa : "<<nilai_min<<endl;
};

long mahasiswa::output(){
	cout<<"Nama Dosen : "<<dosen<<endl;
	for(int i=0;i<2;i++){
		cout<<"Mata Kuliah : "<<matkul<<endl;
		cout<<"Nilai : "<<nilai[i]<<endl;
	}
	cout<<"Masukkan Nama Mahasiswa : "<<nama_mhs<<endl;
	cout<<"Masukkan NIM : "<<nim<<endl;
};

int main(){
	mahasiswa a;
	cout<<a.input();
	cout<<endl;
	cout<<a.proses();
	cout<<endl;
	cout<<a.output();
	cout<<endl;
	
	return 0;
}

