#include <iostream>
#include <fstream>
using namespace std;

int main(){
string imie;
string nazwisko;

cout<<"podaj imie"<<endl;
cin>>imie;
cout<<"podaj nazwisko"<<endl;
cin>>nazwisko;

fstream plik;
plik.open("text1.txt",ios::app);
if(!plik.is_open()){
cout<<"nie dziala";
return 1;
}

plik<<" " + imie + " " + nazwisko + "\n";

cout<<imie + " " + nazwisko + "\n"<<endl;
cout<<"czy dopisac cos jeszcze?"<<endl;
char x = 't';
cin>>x;
string nastepne;
if(x == 't'){
cin>>nastepne;
plik<<nastepne + "\n";
} else {
cout<<"OK"<<endl;}
return 0;
}




