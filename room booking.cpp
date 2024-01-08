#include <iostream>
using namespace std;
class hotel{
	
public:
	void bookerdata(){
	string n,fn, address;
	double cnic, phone;
	
	cout<<" Hotel Entry \n\n";
	cout<<" Name: ";
	cin>>n;
		cout<<" Father name: ";
	cin>>fn;
		cout<<" CNIC number: ";
	cin>>cnic;
		cout<<" Curreent address: ";
	cin>>address;
		cout<<" Phone number: ";
	cin>>phone;
	
}

void bookroom(){

int choice;
double n;

	cout<<" Room charges are given below \n\n";
	cout << "\t| Press 1 Normal Room   per day = 500    |\n";
	cout << "\t| Press 2 Luxury Room   per day = 1500   |\n";
    cout << "\t| Press 3 Exit                   |\n";


    cout << "\n\t please enter your choice : ";
    cin >> choice;
    cout << endl;
    if (choice == 1) {
        
	cout<<"You havee booked a Normal Room!/n";
	cout<<"Your room number is ";
	cin>>n;
}
else if (choice==2){
    cout<<"You havee booked a Luxury Room!/n";
	cout<<"Your room number is ";
	cin>>n;
}
    
}
};



int main()
{
system("CLS");
    int choice;


    cout << "\t\t\t------------------------------------------------------------------\n\n\n";
    cout << "\t\t\t                      Welcome to the NEW EVERLASH HOTEL                 \n\n\n";
    cout << "\t\t\t____________________           MENU             ____________________\n\n        ";
    cout << "                                                                           \n\n";
    cout << "\t| Press 1 ROOM BOOKING               |\n";
    cout << "\t| Press 2 Exit                       |\n";


    cout << "\n\t\t\t please enter your choice : ";
    cin >> choice;
    cout << endl;
    if (choice == 1) {
        system("CLS");
hotel cls;
	cls.bookerdata();
	cls.bookroom();
}
	else if (choice == 2){
		return 0;
	}
	
	else{
	main();
	}

}













