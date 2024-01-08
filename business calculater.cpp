#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <sstream>
using namespace std;



void searchCustomer(const string& nameToSearch) {
    ifstream inputFile("customer_data.txt");
    string line;
    bool found = false;

    if (!inputFile.is_open()) {
        cout << "Error: Unable to open the Customer record file." << endl;
        return;
    }

    cout << "\n\t\t\t Customer Data:\n";
    cout << "--------------------------------------------------------------------------------------------------------------------------------------------\n";

    while (getline(inputFile, line)) {
        // Check if the line contains the name you are searching for
        if (line.find("Name: " + nameToSearch) != string::npos) {
            cout << line << endl << endl;
            found = true;
        }
    }

    inputFile.close();

    if (!found) {
        cout << "Customer with name '" << nameToSearch << "' not found in the records." << endl;
    }
}



void searchmerchant(const string& nameToSearch) {
    ifstream inputFile("merchant_data_data.txt");
    string line;
    bool found = false;

    if (!inputFile.is_open()) {
        cout << "Error: Unable to open the merchant record file." << endl;
        return;
    }

    cout << "\n\t\t\t Purchases Data:\n";
    cout << "--------------------------------------------------------------------------------------------------------------------------------------------\n";

    while (getline(inputFile, line)) {
        // Check if the line contains the name you are searching for
        if (line.find("Name: " + nameToSearch) != string::npos) {
            cout << line << endl << endl;
            found = true;
        }
    }

    inputFile.close();

    if (!found) {
        cout << "Merchant with name '" << nameToSearch << "' not found in the records." << endl;
    }
}


void viewcustomer(){
    system("CLS");
    	ifstream inputFile("customer_data.txt");
    string line;

    if (!inputFile.is_open()) {
        cout << "Error: Unable to open the Customer record file." << endl;
        return;
    }

    cout << "\n\t\t\t Sells data file:\n";
    cout << "--------------------------------------------------------------------------------------------------------------------------------------------\n";

    while (getline(inputFile, line)) {
        cout << line <<endl<< endl;
    }

    inputFile.close();
 
}

void viewmerchant(){
    system("CLS");
    	ifstream inputFile("merchant_data.txt");
    string line;

    if (!inputFile.is_open()) {
        cout << "Error: Unable to open the Merchant record file." << endl;
        return;
    }

    cout << "\n\t\t\t Purchases data file:\n";
    cout << "---------------------------------------------------------------------------------------------------------------------------\n";

    while (getline(inputFile, line)) {
        cout << line <<endl<< endl;
    }

    inputFile.close();
}
class Customer {
public:
    string name,p,d;
    double paidAmount,v,q;
    double remainingAmount;

    Customer() {
 cout << "Enter Customer Name: ";
    cin.ignore(); // Clear any newline character left in the input stream
    getline(cin, name); // Read the entire line for the name
    if (name == "exit") {
        return; // Exit without saving data
    }
    
        cout << "Enter Product Name: ";
        cin >> p;
        
        cout << "Enter Voucher NO: ";
        cin >> v;
        
        cout << "Enter Quantity / KG: ";
        cin >> q;
        
        cout << "Enter Date : ";
        cin >> d;
        cout << "Enter Paid Amount: RS ";
        cin >> paidAmount;
        cout << "Enter Remaining Amount: RS ";
        cin >> remainingAmount;
        system("CLS");
    }
    void display() {
        cout << "Customer Name    : " << name << endl;
        cout << "Product Name     :  " << p << endl;
        cout << "Voucher No       :  " << v << endl;
        cout << "Quantity / KG    :  " << q << endl;
        cout << "Date             :  " << d << endl;
        cout << "Paid Amount      : " << paidAmount << endl;
        cout << "Remaining Amount : " << remainingAmount << endl;
        
        
    }

    void saveToFile() {
        ofstream outputFile("customer_data.txt", ios::app);
        if (outputFile.is_open()) {
            outputFile << "Name: " << name << "    |    " << "Product Name : " <<p<< "    |    " << "Voucher No : " <<v<< "    |    " << "Quantity /KG : " <<q<< "    |    " << "Date  : " <<d<< "    |    " << "Paid Amount : RS " << paidAmount << "    |    " << "Remaining Amount: RS " << remainingAmount << endl;
            outputFile.close();
            cout << "Customer data saved successfully!" << endl;

        }
        else {
            cout << "Error: Unable to open the file for customer data." << endl;
        }
    }
};
class Merchant {
public:
    string name,p,d;
    double paidAmount,v,q;
    double remainingAmount;

    Merchant() {
        cout << "Enter Seller Name: ";
        cin.ignore(); // Clear any newline character left in the input stream
    getline(cin, name); // Read the entire line for the name
    if (name == "exit") {
        return; // Exit without saving data
    }
        
        cout << "Enter Product Name: ";
        cin >> p;
        
        cout << "Enter Voucher NO: ";
        cin >> v;
        
        cout << "Enter Quantity / KG: ";
        cin >> q;
        
        cout << "Enter Date : ";
        cin >> d;
        cout << "Enter Paid Amount: RS ";
        cin >> paidAmount;
        cout << "Enter Remaining Amount: RS ";
        cin >> remainingAmount;
        system("CLS");
    }

    void display() {
        cout << "Seller Name    : " << name << endl;
        cout << "Product Name     :  " << p << endl;
        cout << "Voucher No       :  " << v << endl;
        cout << "Quantity / KG    :  " << q << endl;
        cout << "Date             :  " << d << endl;
        cout << "Paid Amount      : " << paidAmount << endl;
        cout << "Remaining Amount : " << remainingAmount << endl;
    }

    void saveToFile() {
        system("CLS");
        ofstream outputFile("merchant_data.txt", ios::app);
        if (outputFile.is_open()) {
            
            outputFile << " Name: " << name << "    |    " << "Product Name : " <<p<< "    |    " << "Voucher No : " <<v<< "    |    " << "Quantity /KG : " <<q<< "    |    " << "Date  : " <<d<< "    |    " << "Paid Amount : RS " << paidAmount << "    |    " << "Remaining Amount: RS " << remainingAmount << endl;
            outputFile.close();
            cout << "Purchases data saved successfully!" << endl;
        }
        else {
            cout << "Error: Unable to open the file for merchant data." << endl;
        }
    }
};

class Delete {

public:

    string name;
    double paidAmount;
    double remainingAmount;
string lineToDelete;
    void deleteCustomerData() {
        
        cout << "Enter the name of the customer whose data you want to delete: Enter 'exit' as the name to exit.\n";
                cin.ignore(); // Clear any newline character left in the input stream
cin>>lineToDelete;
        ifstream inputFile("customer_data.txt");
        if (!inputFile) {
            cout << "Error: Unable to open the file for customer data." << endl;
            return;
        }

        vector<string> dataLines;
        string line;

        while (getline(inputFile, line)) {
            // Check if the line contains the data to delete
            if (line.find(lineToDelete) == string::npos) {
                dataLines.push_back(line);
            }
        }

        inputFile.close();

        // Reopen the file in write mode and overwrite it with the modified data
        ofstream outputFile("customer_data.txt");
        if (outputFile.is_open()) {
            for (size_t i = 0; i < dataLines.size(); ++i) {
                const string &dataLine = dataLines[i];
                outputFile << dataLine << endl;
            }
            outputFile.close();
            cout << "Customer data deleted successfully!" << endl;
        }
        else {
            cout << "Error: Unable to open the file for writing." << endl;

        }
    }
};

class MDelete {
public:

    string name;
    double paidAmount;
    double remainingAmount;
string lineToDelete;
    void deleteMerchantData() {
        
        cout << "Enter the name of the seller whose data you want to delete: Enter 'exit' as the name to exit.\n";
                 cin.ignore(); // Clear any newline character left in the input stream
    cin>>lineToDelete;
        ifstream inputFile("merchant_data.txt");
        if (!inputFile) {
            cout << "Error: Unable to open the file for merchant data." << endl;
            return;
        }

        vector<string> dataLines;
        string line;

        while (getline(inputFile, line)) {
            // Check if the line contains the data to delete
            if (line.find(lineToDelete) == string::npos) {
                dataLines.push_back(line);
            }
        }

        inputFile.close();

        // Reopen the file in write mode and overwrite it with the modified data
        ofstream outputFile("merchant_data.txt");
        if (outputFile.is_open()) {
            for (size_t i = 0; i < dataLines.size(); ++i) {
                const string &dataLine = dataLines[i];
                outputFile << dataLine << endl;
            }
            outputFile.close();
            cout << "Merchant data deleted successfully!" << endl;
        }
        else {
            cout << "Error: Unable to open the file for writing." << endl;

        }
    }

};
int main() {

a:
system("CLS");
    int choice;


    cout << "\t\t\t------------------------------------------------------------------\n\n\n";
    cout << "\t\t\t                      Welcome to the Business                   \n\n\n";
    cout << "\t\t\t____________________           MENU             ____________________\n\n        ";
    cout << "                                                                           \n\n";
    cout << "\t| Press 1 ENTER CUSTOMER DATA        |\n";
    cout << "\t| Press 2 ENTER MERCHANT DATA        |\n";
    cout << "\t| Press 3 View CUSTOMER DATA         |\n";
    cout << "\t| Press 4 View MERCHANT DATA         |\n";
    cout << "\t| Press 5 Delete CUSTOMER DATA       |\n";
    cout << "\t| Press 6 Delete MERCHANT DATA       |\n";
    cout << "\t| Press 7 SEARCH IN CUSTOMER DATA    |\n";
    cout << "\t| Press 8 SEARCH IN MERCHANT DATA    |\n";
    cout << "\t| Press 9 Exit                       |\n";


    cout << "\n\t\t\t please enter your choice : ";
    cin >> choice;
    cout << endl;
    if (choice == 1) {
        system("CLS");
        cout << "Enter customer data. Enter 'exit' as the name to exit.\n";
        while (true) {
            Customer customer;
            if (customer.name == "exit") {
                
            	char y;
		cout<<"Go back to the MENU [Y/N] :";
		cin>>y;
		switch(y){
    case 'y':
        goto a;
    break;
    case 'n':
        return 0;
    	}

                
            }
            customer.display();
            customer.saveToFile();
            cout << endl;
            cout << endl;
        }
    }
    else if (choice == 2) {
        system("CLS");
        
        cout << "Enter customer data. Enter 'exit' as the name to exit.\n";
        while (true) {
            Merchant merchant;
       if (merchant.name == "exit") {
                
            	char y;
		cout<<"Go back to the MENU [Y/N] :";
		cin>>y;
		switch(y){
    case 'y':
        goto a;
    break;
    case 'n':
        return 0;
    	}

                
            }
     
            merchant.display();
            merchant.saveToFile();
        cout << endl;
            cout << endl;
            
            
        }
    }
    else if (choice == 3){
    	system("CLS");
viewcustomer();
  	
	
        	char y;
		cout<<"Go back to the MENU [Y/N] :";
		cin>>y;
		switch(y){
    case 'y':
        goto a;
    break;
    case 'n':
        return 0;
    	}

    }
	
	else if (choice == 4) {
	    system("CLS");
 viewmerchant();
 char y;
		cout<<"Go back to the MENU [Y/N] :";
		cin>>y;
		switch(y){
    case 'y':
        goto a;
    break;
    case 'n':
        return 0;
    	}
		
	   
	}
    else if (choice == 5) {
system("CLS");


while(true){
            Delete cuDelete;
            cuDelete.deleteCustomerData();
if(cuDelete.lineToDelete == "exit"){
         	char y;
		cout<<"Go back to the MENU [Y/N] :";
		cin>>y;
		switch(y){
    case 'y':
        goto a;
    break;
    case 'n':
        return 0;
    	}
}
}
            }
 
    else if (choice == 6) {

system("CLS");

while(true){   
            MDelete mdelete;
            mdelete.deleteMerchantData();
            if(mdelete.lineToDelete=="exit"){
            	char y;
		cout<<"Go back to the MENU [Y/N] :";
		cin>>y;
		switch(y){
    case 'y':
        goto a;
    break;
    case 'n':
        return 0;
    	}
            }   
            }
}
else if (choice == 7) {
        // Add a search option
        system("CLS");
        cout << "Enter the name you want to search for: ";
        string nameToSearch;
        cin.ignore(); // Clear any newline character left in the input stream
        getline(cin, nameToSearch);
        searchCustomer(nameToSearch);

        char y;
        cout << "Go back to the MENU [Y/N] :";
        cin >> y;
        switch (y) {
            case 'y':
                goto a;
                break;
            case 'n':
                return 0;
        }
    } 
    
    else if (choice == 8) {
        // Add a search option
        system("CLS");
        cout << "Enter the name you want to search for: ";
        string nameToSearch;
        cin.ignore(); // Clear any newline character left in the input stream
        getline(cin, nameToSearch);
        searchmerchant(nameToSearch);

        char y;
        cout << "Go back to the MENU [Y/N] :";
        cin >> y;
        switch (y) {
            case 'y':
                goto a;
                break;
            case 'n':
                return 0;
        }
    } 
    

    else if (choice == 9)
    {
        return 0;
    }
    else {
        cout << "Please select correct choice! \n";

        main();
        system("CLS");
    }
    return 0;
}
