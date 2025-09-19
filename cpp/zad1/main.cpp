#include <iostream>

using namespace std;

int main(){
	int x;
	int y;
	cout<<"podaj wiek"<<endl;
	cin>>x;
	cout<<"podaj wiek nastepnej osoby"<<endl;
	cin>>y;
	cout<<"w sumie macie lat "<<x + y<<endl;
	if(x + y > 100){
	cout<<"macie wiecej niz 100 lat"<<endl;
	}
	else{
	cout<<"macie mniej lub 100 lat"<<endl;
	}
	if(x > y){
	cout<<"osoba pierwsza ma wiecej lat"<<endl;
	}
	if(y > x){
	cout<<"osoba druga ma wiecej lat"<<endl;
	}
	if (x == y){
	cout<<"macie tyle samo lat"<<endl;
	}
	return 0;
}
