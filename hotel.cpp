
#include <iostream>
#include<fstream>
#include <string>
#include <iomanip>
using namespace std;
int main();

class Hotel{
    
    public:
string cnic,na, phone, n, d, fn, address;
int days;
    
void bookerdata() {
    cout << "\n\n\t\t Hotel Entry \n\n";
    cout << "\t\t Name: ";
    cin >> n;
    cout << "\t\t Father name: ";
    cin >> fn;
    cout << "\t\t CNIC number: ";
    cin >> cnic;
    cout << "\t\t Current address: ";
    cin.ignore();
    getline(cin, address);
	cout << "\t\t Date: ";
    cin >> d;
    cout << "\t\t Phone number: ";
    cin >> phone;
    cin.ignore();
}

    
void bookroom() {
    system("CLS");
    int choice;

    cout << " Room charges: \n\n";
    cout << "\t| Press 1 Normal Room   per day = 500    |\n";
    cout << "\t| Press 2 Luxury Room   per day = 1500   |\n";
    cout << "\t| Press 3 Exit                           |\n";

    cout << "\n\t Please enter your choice: ";
    cin >> choice;
    cout << endl;

    if (choice == 1) {
        cout<<"\n\n\t\tFor how many days do you want to book room";
        cin>>days;
    cout << "\n\t\t Your room number is : ";
    cin >> na;
    cin.ignore();       
    
        cout << "\n\t\tYou have booked a Normal Room for "<<days<<"!\n";
        }
        
    else if (choice == 2) {
        cout<<"\n\n\t\tFor how many days do you want to book room";
        cin>>days;
    cout << "\n\t\t Your room number is : ";
    cin >> na;
    cin.ignore();       
    
        cout << "\n\t\tYou have booked a Luxury Room for "<<days<<"!\n";
        
    }
}


    void saveToFile() {
        system("CLS");
        ofstream outputFile("Hotel_data.txt", ios::app);
        if (outputFile.is_open()) {
            
            outputFile << " Name: " << n << "    |    " << "Father Name : " <<fn<< "    |    " << "CNIC No : " <<cnic<< "    |    " << "Current address : " <<address<< "    |    " << "Room Reservation Date  : " <<d<< "    |    " << "For days : " <<days<< "    |    " << "Phone No :" << phone << "    |    " << "Room No: " << na<< endl;
            outputFile.close();
            cout << " Hotel entry saved successfully!" << endl;
            
             char y;
        cout << "\n\nPress 'y'Go back to the MENU OR Press 'n' to Exit :";
        cin >> y;
        switch (y) {
            case 'y':
                main();
                break;
            case 'n':
                return;
        }
        }
        else {
            cout << "Error: Unable to open the file for hotel data." << endl;
    main();
        }
    }

void viewbooked(){
    system("CLS");
    	ifstream inputFile("Hotel_data.txt");
    string line;

    if (!inputFile.is_open()) {
        cout << "Error: Unable to open the Hotel record file." << endl;
        return;
    }

    cout << "\n\t\t\t Booked Room data file:\n";
    cout << "--------------------------------------------------------------------------------------------------------------------------------------------\n";

    while (getline(inputFile, line)) {
        cout << line <<endl<< endl;
    }

    inputFile.close();
 
}    



void searchBooked(const string& nameToSearch) {
    ifstream inputFile("Hotel_data.txt");
    string line;
    bool found = false;

    if (!inputFile.is_open()) {
        cout << "Error: Unable to open the Room record file." << endl;
        return;
    }

    cout << "\n\t\t\t Booked Rooms:\n";
    cout << "--------------------------------------------------------------------------------------------------------------------------------------------\n";

    while (getline(inputFile, line)) {
        size_t foundPos = line.find("Room No: ");
        if (foundPos != string::npos) {
            string nameInRecord = line.substr(foundPos + 6);
            if (nameInRecord.find(nameToSearch) != string::npos) {
                cout << line << endl << endl;
                found = true;
            }
        }
    }

    inputFile.close();

    if (!found) {
        cout << "Room with Name '" << nameToSearch << "' not found in the records." << endl;
    }
}

void checkout(){
  int choice;
    cout<<"\n\n\t\t\tCHECK OUT FROM HOTEL\n\n";
    cout << "\t| Press 1 Check out for Normal Room         |\n";
    cout << "\t| Press 2 Check out for Luxury Room        |\n";

    cout << "\n\t\t\t Please enter your choice: ";
    cin >> choice;
    cout << endl;

    if (choice == 1) {
        int n=500;
        int sum;
        cout<<"\n\n\t\tDays you stayed in Hotel: ";
        cin>>days;
        sum=days*n;
        cout<<"\n\t\tPer day charges for normal hotel is 500 ";
        cout<<"\n\t\tyou stayed in Hotel for Days : "<<days;
        cout<<"\n\t\tyou have to pay : "<<sum;
    }

    else if (choice == 2) {
        int n=1500;
        int sum;
        cout<<"\n\n\t\tDays you stayed in Hotel: ";
        cin>>days;
        sum=days*n;
        cout<<"\n\t\tPer day charges for normal hotel is 1500. ";
        cout<<"\n\t\tyou stayed in Hotel for Days : "<<days;
        cout<<"\n\t\tyou have to pay : "<<sum;
    }
    else
    {
        main();
    }

}


};

int main() {
    system("CLS");
    int choice;

    cout << "\t\t\t------------------------------------------------------------------\n\n\n";
    cout << "\t\t\t                      Welcome to the NEW EVERLASH HOTEL                 \n\n\n";
    cout << "\t\t\t____________________           MENU             ____________________\n\n        ";
    cout << "                                                                           \n\n";
    cout << "\t| Press 1 ROOM BOOKING               |\n";
    cout << "\t| Press 2 VIEW BOOKED ROOM           |\n";
    cout << "\t| Press 3 SEARCH BOOKED ROOM         |\n";
    cout << "\t| Press 4 CHECKOUT          |\n";
    cout << "\t| Press 5 Exit                       |\n";

    cout << "\n\t\t\t Please enter your choice: ";
    cin >> choice;
    cout << endl;

    if (choice == 1) {
        system("CLS");
        
        Hotel ht;
        ht.bookerdata();
        ht.bookroom();
        ht.saveToFile();
    
        
        
        
    } else if (choice == 2) {
        system("CLS");
        Hotel ht;
        ht.viewbooked();
        char y;
        cout << "\n\nGo back to the MENU [Y/N] :";
        cin >> y;
        switch (y) {
            case 'y':
                main();
                break;
            case 'n':
                return 0;
        }
    } 
    else  if (choice==3){
        system("CLS");
        
        cout << "\n\n\t\tEnter the Room No to search  : ";
        string nameToSearch;
        cin.ignore(); // Clear any newline character left in the input stream
        getline(cin, nameToSearch);
        Hotel ht;
        ht.searchBooked(nameToSearch);
        char y;
        cout << "\n\nGo back to the MENU [Y/N] :";
        cin >> y;
        switch (y) {
            case 'y':
                main();
                break;
            case 'n':
                return 0;
        }
        
    }
    
        else if (choice == 4){
        
        cout << "\n\n\t\tEnter the Room No to search  : ";
        string nameToSearch;
        cin.ignore(); // Clear any newline character left in the input stream
        getline(cin, nameToSearch);
        Hotel ht;
        ht.searchBooked(nameToSearch);
        ht.checkout();
        char y;
        cout << "\n\nGo back to the MENU [Y/N] :";
        cin >> y;
        switch (y) {
            case 'y':
                main();
                break;
            case 'n':
                return 0;
        }
        
            
        }
    else if (choice == 5) {
        return 0;
    } else {
        main();
    }

    return 0;
}

