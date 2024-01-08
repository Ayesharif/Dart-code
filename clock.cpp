#include<iostream>
#include<windows.h>

using namespace std;

int main(){
	
	int h,m,s,a,err;
	
	err = a = 0;
string n ,f, z, as, ma, i,per;
	f="Fajhar";
	z="Zohar";
	as="Asar";
	ma="Magrib";
	i="Isha";
	n="NO PRAYER";
	while(err==0){
		cout<<"\nEnter Hour : ";
		cin>>h;
		cout<<"\nEnter Minut : ";
		cin>>m;
		cout<<"\nEnter Second : ";
		cin>>s;
		
		if(h<24 && m<60 && s<60)
		{
				err++;
			}
			else{
			
			system("cls");
}
	}

while(a==0){


	system("cls");


	
	if(s>59){
		s=0;
		m++;
	}
	if(m>59){
		m=0;
		h++;
	}
	if(h>23){
		h=0;
		
	}
	
	else if(h=4&&m<=30){
		per =  f;
	}
	else if(h>12&&h<3){
		
		per = z;
	}
	else if(h>16&&m<=30){
		
		per = as;
	}
	else if( h >=19  && m <=30  ){
		per = ma;
	}
	else if( h >= 21 && h <=12  ){
		per = i;
	}
		
	else{
		per = n;
	}
	
	cout<<"\t\tHOURS : MINUTS : SECONDS : PRAYER\n";
cout<<"\t\t"<<h<<"    : "<<m<<"     : "<<s<<"      : "<<per;

	Sleep(1000);
	
	s++;
	
	
	}

}


