
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class issue{
public:
string name;
string authorn,date;
    string fatherName;
    string phoneNumber;
    double cnic;
    string memberNo;

void regmember() {
    cout << "\n\n\t\tName                 : ";
    cin >> name;
    cout << "\n\t\tFather Name            : ";
    cin >> fatherName;
    cout << "\n\t\tMobile Number          : ";
    cin >> phoneNumber;
    cout << "\n\t\tCNIC Number            : ";
    cin >> cnic;
    cout << "\n\t\tLibrary membership No. : ";
    cin >> memberNo;
}

void saveToFile() {
    ofstream outputFile("Members_record.txt", ios::app);
    if (outputFile.is_open()) {
        outputFile << "Name : " << name << " | "
                   << "Father Name : " <<fatherName << " | "
                   << "Mobile No. : " <<phoneNumber << " | "
                   << "CNIC No. : " << cnic << " | "
                   << "Membership No. : " << memberNo << endl;
        outputFile.close();
        cout << "Membership data successfully added!" << endl;
    } else {
        cout << "Error: Unable to save Membership data in file." << endl;
    }
}

    
    void boissue(){

    cout << "\n\n\t\tBook Name      : ";
cin.ignore();
    getline(cin , name);
    cout << "\n\t\tAuthor Name      : ";
    
    cin.ignore();
    getline(cin , authorn);
    cout << "\n\t\tIssue date       : ";
    cin.ignore();
    cin >> date;
    cout<<"\n\t\tMembership No. : ";
    cin>>memberNo;
        
    }
    
void saveToissueFile() {
    ofstream outputFile("Book_issue_record.txt", ios::app);
    if (outputFile.is_open()) {
        outputFile << "Book Name : " << name << " | "
                   << "Author Name : " <<authorn << " | "
                   << "Issue date : " <<date  << " | "
                   << "Member No.  : " <<memberNo <<endl;
        outputFile.close();
        cout << "Book issued  successfully !" << endl;
    } else {
        cout << "Error: Unable to Issue Book" << endl;
    }
}
    
    void book_issue(){
        
  	int count;
  	string userid,phone;
	  
    cout<<"\n\t\t\t Please enter your Membership no. :   ";

    cin>>userid;

  	
  	ifstream input("Members_record.txt");
  	
  	while(input>>phone){
	  
  	
  	if(phone == userid ){
  		count = 1;
  		system("cls");
  		
	  }

  }
    input.close();
    if(count == 1){
    	
    	boissue();
    	saveToissueFile();
    }
    else{
    	cout<<"\n LOGIN ERROR \n Please check your username and password\n";
    	
	}
	
    }
    
void viewmember(){
    system("CLS");
    	ifstream inputFile("Members_record.txt");
    string line;

    if (!inputFile.is_open()) {
        cout << "Error: Unable to open the Members record file." << endl;
        return;
    }

    cout << "\n\t\t\t Members data :\n";
    cout << "---------------------------------------------------------------------------------------------------------------------------\n";

    while (getline(inputFile, line)) {
        cout << line <<endl<< endl;
    }

    inputFile.close();
}


void viewissuedbook(){
    system("CLS");
    	ifstream inputFile("Book_issue_record.txt");
    string line;

    if (!inputFile.is_open()) {
        cout << "Error: Unable to open the issued book record file." << endl;
        return;
    }

    cout << "\n\t\t\t ISSUED BOOK data :\n";
    cout << "---------------------------------------------------------------------------------------------------------------------------\n";

    while (getline(inputFile, line)) {
        cout << line <<endl<< endl;
    }

    inputFile.close();
}
    
};
int main() {
	
	a:
	system("CLS");
	
	
cout<<"\n\n\t\t\t************************************************************************\n";
cout<<"\t\t\t*                       Welcome to the LIBRARY                         *\n";
cout<<"\t\t\t************************************************************************\n\n";
cout<<"             ";
    issue is;

    int choice;
cout<<"\n\n\t\t| Press 1 REGISTER MEMBER            |\n";
cout<<"\t\t| Press 2 ISSUE BOOK                 |\n";
cout<<"\t\t| Press 3 VIEW MEMBERS               |\n";
cout<<"\t\t| Press 4 VIEW ISSUED BOOK           |\n";
cout<<"\t\t| press 5 to EXIT                    |\n";

    cout << "\n\t\tEnter your choice: ";

    cin >> choice;

    if (choice == 1) {
	system("CLS");
cout<<"\t\t\t______________________    MEMBERSHIP      ________________________\n\n";
	    	
        is.regmember();
        is.saveToFile();
                       
            	char y;
		cout<<"\n\nPress 'y' for Menu or Press 'n' for Exit :";
		cin>>y;
		switch(y){
    case 'y':
        goto a;
    break;
    case 'n':
        return 0;
    	}

    } else if (choice == 2) {
    	system("CLS");
cout<<"\t\t\t______________________    BOOK ISSUE      ________________________\n\n";
	    	
        is.book_issue();    
                   
            	char y;
		cout<<"\n\nPress 'y' for Menu or Press 'n' for Exit :";
		cin>>y;
		switch(y){
    case 'y':
        goto a;
    break;
    case 'n':
        return 0;
    	}

	} 
    else if(choice==3){
    	
    	cout<<"\t\t\t______________________    LIBRERY MEMBERS      ________________________\n\n";
	    	
        is.viewmember();
    
	     
            	char y;
		cout<<"\n\nPress 'y' for Menu or Press 'n' for Exit :";
		cin>>y;
		switch(y){
    case 'y':
        goto a;
    break;
    case 'n':
        return 0;
    	}
}
else if(choice == 4){
	
    	cout<<"\t\t\t______________________    ISSUED BOOK      ________________________\n\n";
	    	
	is.viewissuedbook();
	
	
            	char y;
		cout<<"\n\nPress 'y' for Menu or Press 'n' for Exit :";
		cin>>y;
		switch(y){
    case 'y':
        goto a;
    break;
    case 'n':
        return 0;
    	}
}    
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
