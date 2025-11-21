#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream plik("plik1.txt");
	if(!plik.is_open()){
	cout<<"plik nie dziala"<<endl;
	return 1;
}
	int liczba;
	int suma=0;



	while(plik>>liczba){
	suma+=liczba;
	}

	plik.close();
	cout<<suma<<endl;
	return 0;
}
