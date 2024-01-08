#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <sstream>
#include <cstdlib>
using namespace std;

class Expension {
	
public:
    string name, d,q;
    double paidAmount;
    double remainingAmount;
    double budget = 20000;

    void Date() {
    system("CLS");
	    cout << "\t\t\t------------------------------------------------------------------\n\n\n";
        cout << "\t\t\t             Welcome to the MONTHLY EXPENSE RECORD                   \n\n\n";
        cout << "\t\t\t------------------------------------------------------------------\n\n\n";
        cout << "\t\t\t____________________        Save Your Purchases         ____________________\n\n        ";
        cout << "\n\n\t\t\tMonthly budget : " << budget << "\n";

        cout << "\n\n\t\t\tWrite (exit) in the name, If you don't want to continue. \n\n ";
        cout << "\t\t\tEnter Grocery: ";
        cin.ignore();
        getline(cin, name);
        if (name == "exit") {
            return;
        }

        cout << "\t\t\tEnter Quantity : ";
        cin >> q;

        cout << "\t\t\tEnter Date (DD/MM/YY): ";
        cin >> d;

        cout << "\t\t\tEnter Price RS: ";
        cin >> paidAmount;

        remainingAmount = budget - paidAmount;
        system("CLS");
    }

    void display() {
        cout << "Grocery    : " << name << endl;
        cout << "Quantity / KG    :  " << q << endl;
        cout << "Date             :  " << d << endl;
        cout << "Price    : " << paidAmount << endl;
    }

    void saveToFile() {
        ofstream outputFile("monthly_expension_data.txt", ios::app);
        if (outputFile.is_open()) {
            outputFile << "Grocery Name: " << name << "    |    " << "Quantity /KG : " << q << "    |    " << "Date  : " << d << "    |    " << "Price RS: " << paidAmount << endl;
            outputFile.close();
            cout << "Grocery saved successfully!" << endl;
        }
        else {
            cout << "Error: Unable to open the file for monthly_expension data." << endl;
        }
    }

    void searchproduct(const string& nameToSearch) {
        ifstream inputFile("monthly_expension_data.txt");
        string line;
        bool found = false;

        if (!inputFile.is_open()) {
            cout << "Error: Unable to open the Groceries record file." << endl;
            return;
        }

        cout << "\n\t\t\t Groceries :\n";
        cout << "--------------------------------------------------------------------------------------------------------------------------------------------\n";

        while (getline(inputFile, line)) {
            if (line.find("Grocery Name: " + nameToSearch) != string::npos) {
                cout << line << endl << endl;
                found = true;
            }
        }

        inputFile.close();

        if (!found) {
            cout << "Groceries with name '" << nameToSearch << "' not found in the records." << endl;
        }
    }

    void viewproduct() {
        system("CLS");

        ifstream inputFile("monthly_expension_data.txt");
        string line;
        double totalPaidAmount = 0.0;

        if (!inputFile.is_open()) {
            cout << "Error: Unable to open the Groceries record file." << endl;
            return;
        }

        cout << "\n\t\t\t Groceries file:\n";
        cout << "--------------------------------------------------------------------------------------------------------------------------------------------\n";

        while (getline(inputFile, line)) {
            cout << line << endl;
            size_t paidAmountPos = line.find("Price RS: ");
            if (paidAmountPos != string::npos) {
                string paidAmountStr = line.substr(paidAmountPos + 10);
                double paidAmount = atof(paidAmountStr.c_str());

                totalPaidAmount += paidAmount;
            }
        }

        inputFile.close();

        cout << "\nTotal Paid Amount: RS " << totalPaidAmount << endl;
        remainingAmount = budget - totalPaidAmount;
        cout << "Remaining Amount: RS " << remainingAmount << endl;
    }
};

class Delete {
public:
    string lineToDelete;
    void deleteexpensionData() {
        cout << "\t\t\tEnter 'exit' if you want to go back .\n\n";
        cout << "\t\t\tEnter the name of the Grocery whose data you want to delete:\n";
        cin.ignore();
        cin >> lineToDelete;
        ifstream inputFile("monthly_expension_data.txt");
        if (!inputFile) {
            cout << "Error: Unable to open the file for monthly_expension data." << endl;
            return;
        }

        vector<string> dataLines;
        string line;

        while (getline(inputFile, line)) {
            if (line.find(lineToDelete) == string::npos) {
                dataLines.push_back(line);
            }
        }

        inputFile.close();

        ofstream outputFile("monthly_expension_data.txt");
        if (outputFile.is_open()) {
            for (size_t i = 0; i < dataLines.size(); ++i) {
                const string& dataLine = dataLines[i];
                outputFile << dataLine << endl;
            }
            outputFile.close();
            cout << "\t\t\tGrocery deleted successfully!" << endl;
        }
        else {
            cout << "Error: Unable to open the file for writing." << endl;
        }
    }
};

int main() {
	a:
	system("CLS");
    Expension expension;
    Delete exDelete;
    int choice;

    
        system("CLS");
        cout << "\t\t\t------------------------------------------------------------------\n\n\n";
        cout << "\t\t\t             Welcome to the MONTHLY EXPENSE RECORD                   \n\n\n";
        cout << "\t\t\t------------------------------------------------------------------\n\n\n";
        cout << "\t\t\t____________________           MENU             ____________________\n\n        ";
        cout << "                                                                           \n\n";
        cout << "\t\t\t| Press 1 ADD GROCERY        |\n";
        cout << "\t\t\t| Press 2 View GROCERY       |\n";
        cout << "\t\t\t| Press 3 DELETE GROCERY     |\n";
        cout << "\t\t\t| Press 4 SEARCH IN GROCERY  |\n";
        cout << "\t\t\t| Press 5 Exit               |\n";

        cout << "\n\t\t\tPlease enter your choice : ";
        cin >> choice;
        cout << endl;

       if (choice == 1) {
        system("CLS");
        while (true) {
            Expension expension;
            expension.Date();
            if (expension.name == "exit") {
                
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

            expension.saveToFile();
            cout << endl;
            cout << endl;
        }
    }

    else if (choice == 2){
    	system("CLS");
    	Expension expension;
expension.viewproduct();
  	
	
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
    else if (choice == 3) {
system("CLS");


while(true){
            Delete exDelete;
            exDelete.deleteexpensionData();
if(exDelete.lineToDelete == "exit"){
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
else if (choice == 4) {
        // Add a search option
        system("CLS");
        
        Expension expension;
        cout << "Enter the product name which you want to search for: ";
        string nameToSearch;
        cin.ignore(); // Clear any newline character left in the input stream
        getline(cin, nameToSearch);
        expension.searchproduct(nameToSearch);
	
        	char y;
		cout<<"Go back to the MENU [Y/N] :";
		cin>>y;
		switch(y){
    case 'y':
        goto a;
    break;
    case 'n':2
    
    
        return 0;
    	}
    } 
    else if (choice == 5)
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
