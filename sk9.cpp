#include <iostream>
#include <conio.h>
using namespace std;

class array{
	public:
		input();
		satu();
		konversi();
		dua();
	private:
		int a[10][10];
		int aray[10];
		int cur,cur2,z,temp;
		int tukar;
};

array::input(){
	cout<<"\t\nMasukkan Angka : ";
	cin>>z;
	
	for(int i=0;i<z;i++)
	for(int j=0;j<z;j++)
	{
		cout<<"\tAngka["<<i<<"]["<<j<<"] : ";
		cin>>a[i][j];
	}
}

array::satu(){
	cout<<"\n\tBentuk array 2 dimensi sebelum dikonversi : \t"<<endl;
	for(int i=0; i<z; i++){
		for(int j=0; j<z; j++ ){
			cout<<"\t";
			cout<<a[i][j]<<" ";
		}
		cout<< endl;
	}
}

array::konversi(){
	int k=0;
	for(int i=0; i<z; i++){
		for(int j=0; j<z; j++){
			aray[k]=a[i][j];
			k++;
		}
	}
}

array::dua(){
	cout<<" \n\tSetelah dikonversi menjadi array 1 dimensi dan sorting menggunakan bubble sort : \t"<<endl;
	for(int k=0; k<z*z; k++){
		tukar = k;
		int temp;
		for(int j= k+1; j < z*z; j++){
			if(aray[j]<aray[tukar]){
				tukar = j;
			}
		}
	temp = aray[tukar];
	aray[tukar] = aray[k];
	aray[k] = temp;
	cout<< "\t";
	cout<< aray[k]<<" ";	
	}
	cout<<endl;
}

int main(){
	array run;
	run.input();
	run.satu();
	run.konversi();
	run.dua();
	return 0;
}
