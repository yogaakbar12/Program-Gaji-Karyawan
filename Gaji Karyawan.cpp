#include <iostream>
using namespace std;

int main(){
	int a,b;
	float bonus1,team2;
	cout<<"Program menghiotung gaji\n";
	cout<<"Gaji team 1 = 22 juta\n";
	cout<<"Gaji team 2 = 28 juta\n";
	cout<<"Bagi team yang dapat menyelesaikan dalam wakti kurang dari 5 bulan maka gaji ditambah 6%\n";
	cout<<"=============================================================\n";
	
	cout<<"apakah team 1 dapat menyelesaikan kurang dalam 5 bulan?\n";
	cin>>a;
	if (a == 1){
		bonus1=(6/100*22)+22;
		cout<<"Anda mendapatkan gaji bonus senilai "<<bonus1<<endl;
		
	}
	else{
		cout<<"Anda mendapatkan gaji normal\n";
	}
	
	cout<<"Apakah team 2 dapat mengerjakan kurang dalam 5 bulan?\n";
	cin>>b;
	
	if(b==1){
		cout<<"anjayy\n";
		// proses
	}
	
	else{
		cout<<"Anda mendapatkan gaji normal\n";
	}
	return 0;
}
