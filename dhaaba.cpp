#include <iostream>
using namespace std;
int aq,qq,cbq,cq,dq,aqq,mq,pq;
int mw,cd,ms,as,bs,ds,co,tea; 
int sum,sumaq,sumqq,sumcbq,sumcq,sumdq,sumaqq,summq,sumpq, summw,sumcd,summs,sumas,sumbs,sumds,sumco,sumtea;
int main();
void foodmenu(){
a:
system("CLS");
    int choice;


    cout << "\n\n\t\t\t____________________           FOODS             ____________________\n\n        ";
    cout << "                                                                           \n\n";
cout<<"\t\t 1. Anda chohla     / 80 \n";	
cout<<"\t\t 2. Qorma           / 150\n";
cout<<"\t\t 3. Chicken Briyani / 130 \n";
cout<<"\t\t 4. ChikenPolaoo    / 150 \n";
cout<<"\t\t 5. Daal Fry        / 120 \n";
cout<<"\t\t 6. Aloo Qeema      / 180 \n";
cout<<"\t\t 7. Mix Sabzi       / 90 \n";
cout<<"\t\t 8. Pakoora Cury    / 100 \n";
cout<<"\t\t 9. Exite\n";

    cout << "\n\t\t\t please enter your choice : ";
    cin >> choice;
    cout << endl;
    if (choice == 1) {
        system("CLS");
        cout<<"\n\t\tHow many plates  do you want : ";
		cin>>aq;
		
	cout<<"\n\t\tOrder is added to the cart ! ";
        goto a;
    }
    else if (choice == 2) {
        system("CLS");
	cout<<"\n  How many plates  do you want : ";
		cin>>qq;
			cout<<"\n\t\tOrder is added to the cart ! ";
        goto a;
}

else if (choice == 3) {
        system("CLS");
cout<<"\n  How many plates  do you want : ";
		cin>>cbq;
				cout<<"\n\t\tOrder is added to the cart ! ";
        goto a;
}

else if (choice == 4) {
        system("CLS");
	cout<<"\n  How many plates  do you want : ";
		cin>>cq;
			cout<<"\n\t\tOrder is added to the cart ! ";
        goto a;
}

else if (choice == 5) {
        system("CLS");
	cout<<"\n  How many plates  do you want : ";
		cin>>dq;
			cout<<"\n\t\tOrder is added to the cart ! ";
        goto a;
}

else if (choice == 6) {
        system("CLS");
	cout<<"\n  How many plates  do you want : ";
		cin>>aqq;
			cout<<"\n\t\tOrder is added to the cart ! ";
        goto a;
}
else if (choice == 7) {
        system("CLS");
	cout<<"\n  How many plates  do you want : ";
		cin>>mq;
			cout<<"\n\t\tOrder is added to the cart ! ";
        goto a;
}

else if (choice == 8) {
        system("CLS");
	cout<<"\n  How many plates  do you want : ";
		cin>>pq;
			cout<<"\n\t\tOrder is added to the cart ! ";
        goto a;
}
else if (choice == 9) {
        system("CLS");
	main() ;
}
}

void bevermenu(){
a:
system("CLS");
    int choice;

    cout << "\n\n\t\t\t____________________          BEVERAGES            ____________________\n\n        ";
    cout << "                                                                           \n\n";
cout<<"\t\t 1. Minral water 1LTR     / 80 \n";	
cout<<"\t\t 2. Cold drink  250M      / 50\n";
cout<<"\t\t 3. Mango milk shake      / 150 \n";
cout<<"\t\t 4. Apple milk shake      / 150 \n";
cout<<"\t\t 5. Banana milk shake     / 120 \n";
cout<<"\t\t 6. Dry fruit milk shake  / 200 \n";
cout<<"\t\t 7. Coffee                / 100 \n";
cout<<"\t\t 8. Tea                   / 100 \n";
cout<<"\t\t 9. Exite\n";

    cout << "\n\t\t\t please enter your choice : ";
    cin >> choice;
    cout << endl;
    if (choice == 1) {
        system("CLS");
        cout<<"\n\t\t How many  do you want : ";
		cin>>mw;
		
	cout<<"\n\t\tOrder is added to the cart ! ";
        goto a;
    }
    else if (choice == 2) {
        system("CLS");
	cout<<"\n  How many do you want : ";
		cin>>cd;
			cout<<"\n\t\tOrder is added to the cart ! ";
        goto a;
}

else if (choice == 3) {
        system("CLS");
cout<<"\n  How many do you want : ";
		cin>>ms;
				cout<<"\n\t\tOrder is added to the cart ! ";
        goto a;
}

else if (choice == 4) {
        system("CLS");
	cout<<"\n  How many do you want : ";
		cin>>as;
			cout<<"\n\t\tOrder is added to the cart ! ";
        goto a;
}

else if (choice == 5) {
        system("CLS");
	cout<<"\n  How many do you want : ";
		cin>>bs;
			cout<<"\n\t\tOrder is added to the cart ! ";
        goto a;
}

else if (choice == 6) {
        system("CLS");
	cout<<"\n  How many do you want : ";
		cin>>ds;
			cout<<"\n\t\tOrder is added to the cart ! ";
        goto a;
}
else if (choice == 7) {
        system("CLS");
	cout<<"\n  How many do you want : ";
		cin>>co;
			cout<<"\n\t\tOrder is added to the cart ! ";
        goto a;
}

else if (choice == 8) {
        system("CLS");
	cout<<"\n  How many do you want : ";
		cin>>tea;
			cout<<"qq\n\t\tOrder is added to the cart ! ";
        goto a;
}
else if (choice == 9) {
        system("CLS");
	main() ;
}
}

void recipt(){
 system("CLS");
    cout << "\t\t\t____________________     RECIPT     ___________________        ";
    cout << "                                                                           \n\n";
if(aq != 0){
    sumaq =aq*80;
    cout<<"\nYou have  bought "<<aq  <<" plcqates of Anda chohla = "<<sumaq;
}
 if(qq != 0){
    sumqq =qq*150;
    cout<<"\nYou have  bought "<<qq  <<" plates of Qorma = "<<sumqq;
}
 if(cbq != 0){
    sumcbq =cbq*130;
    cout<<"\nYou have  bought "<<cbq  <<" plates of Chicken Briyani = "<<sumcbq;
}
 if(cq != 0){
    sumcq =cq*150;
    cout<<"\nYou have  bought "<<cq  <<" plates of Chicken polaoo = "<<sumcq;
}
 if(dq != 0){
    sumdq =dq*120;
    cout<<"\nYou have  bought "<<dq  <<" plates of Daal fry = "<<sumdq;
}
 if(aqq != 0){
    sumaqq =aqq*180;
    cout<<"\nYou have  bought "<<aqq  <<" plates of Aloo Qeema = "<<sumaqq;
}
 if(mq != 0){
    summq =mq*90;
    cout<<"\nYou have  bought "<<mq  <<" plates of Mix Sabzi = "<<summq;
}
 if(pq != 0){
    sumpq =pq*100;
    cout<<"\nYou have  bought "<<pq  <<" plates of Pakoora qury = "<<sumpq;
}
 if(mw != 0){
    summw =mw*80;
    cout<<"\nYou have  bought "<<mw  <<" Minral water = "<<summw;
}
 if(cd != 0){
    sumcd =cd*50;
    cout<<"\nYou have  bought "<<cd  <<" bottle of Cold drink = "<<sumcd;
}
 if(ms != 0){
    summs =ms*150;
    cout<<"\nYou have  bought "<<ms  <<" glass of Mango shake = "<<summs;
}
 if(as != 0){
    sumas =as*150;
    cout<<"\nYou have  bought "<<as  <<" glass of Apple shake = "<<sumas;
}
 if(bs != 0){
    sumbs =bs*120;
    cout<<"\nYou have  bought "<<bs  <<" glass of Banana shake = "<<sumbs;
}
 if(ds != 0){
    sumds =ds*200;
    cout<<"\nYou have  bought "<<ds  <<" glass of Dry fruit shake = "<<sumds;
}
 if(co != 0){
    sumco =co*100;
    cout<<"\nYou have  bought "<<co  <<" cup of Coffee = "<<sumco;
}
 if(tea != 0){
    sumtea =tea*100;
    cout<<"\nYou have  bought "<<tea  <<" Cup of tea = "<<sumtea;
}
if (sum==0){
sum = sumaq+sumqq+sumcbq+sumcq+sumdq+sumaqq+summq+sumpq+summw+sumcd+summs+sumas+sumbs+sumds+sumco+sumtea;
cout <<"\n\nTotal bill is = "<<sum;
}
if (sum!=0){
                 
            	char y;
		cout<<"\n\nPress 'y' for MENU OR Press'n' for EXIT :";
		cin>>y;
		switch(y){
    case 'y':
        main();
    break;
    case 'n':
        return ;
    	}
   
}
}
int main(){
system("CLS");
    int choice;


    cout << "\t\t\t------------------------------------------------------------------\n\n\n";
    cout << "\t\t\t                      WELCOME TO TRADITIONAL DHAABA                   \n\n\n";
    cout << "\t\t\t________________________         CATEGORIES          ____________________\n\n        ";
    cout << "                                                                           \n\n";
    cout << "\t| Press 1 FOOD             |\n";
    cout << "\t| Press 2 BEVERAGES        |\n";
    cout << "\t| Press 3 RECIPT           |\n";
    cout << "\t| Press 4 Exit             |\n";


    cout << "\n\t\t\t please enter your choice : ";
    cin >> choice;
    cout << endl;
    if (choice == 1) {
        system("CLS");

foodmenu();
	
}

else if (choice == 2) {
        system("CLS");

bevermenu();
	
}

else if (choice==3){
    recipt();
}
    else if (choice == 4) {
        system("CLS");
return 0;
}
}
