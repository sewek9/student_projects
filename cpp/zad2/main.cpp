#include <iostream>

using namespace std;

int main(){

char x ='q';
int a = 0;
int b = 0;
while(x!='n') {
cout<<"czy podac nastepna liczbe: "<<endl;
cin>>x;
cout<<"podaj nastepna liczbe: "<<endl;
cin>>a;
if(a>0){
b+= a;
} else cout<<"blad";

cout<<b<<endl;
}
}
