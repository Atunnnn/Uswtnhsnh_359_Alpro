#include <iostream>
using namespace std;
class studi{
	public:
		void proses();
	private:
		int A [10];
		string nama[10];
		int nim;
};

void studi::proses(){
	nim=5;
	int *pInt=A;
	for(int i=0; i<nim; i++){
		cout<<"Masukkan NIM : ";cin>>A[i];
		cout<<"Masukkan Nama : ";cin>>nama[i];
	}
	cout<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<"Nama Para Finalis Lomba Paramatika"<<endl;
	cout<<"----------------------------------"<<endl;
	for(int n=0; n<nim; n++){
		cout<<"Masukkan Nama Mahasiswa : "<<nama[n]<<endl;
		cout<<"Masukkan NIM Mahasiswa : "<<*(pInt)<<endl;
		pInt++;
	}
}

int main(){
	studi x;
	x.proses();
}
