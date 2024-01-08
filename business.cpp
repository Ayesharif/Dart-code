#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


void viewcustomer() {
    ifstream inputFile("customer_data.txt");
    string line;

    if (!inputFile.is_open()) {
        cout << "Error: Unable to open the Customer record file." << endl;
        return;
    }

    cout << "\n\t\t\t Customer data file:\n";
    cout << "      ------------------------------------------------------------------\n";

cout<<inputFile;

    inputFile.close();
}


void viewmerchant() {
    ifstream inputFile("merchant_data.txt");
    string line;

    if (!inputFile.is_open()) {
        cout << "Error: Unable to open the Merchant record file." << endl;
        return;
    }

    cout << "\n\t\t\t Merchant data file:\n";
    cout << "      ------------------------------------------------------------------\n";

cout<<inputFile;
    inputFile.close();
}



class Customer {
public:
    string name;
    double paidAmount;
    double remainingAmount;

    Customer() {
        cout << "Enter Customer Name: ";
        cin >> name;
        cout << "Enter Paid Amount: $";
        cin >> paidAmount;
        cout << "Enter Remaining Amount: $";
        cin >> remainingAmount;
        system("cls");
    }
    void display() {
        cout << "Customer Name: " << name << endl;
        cout << "Paid Amount: $" << paidAmount << endl;
        cout << "Remaining Amount: $" << remainingAmount << endl;
    }

    void saveToFile() {
        ofstream outputFile("customer_data.xls", ios::app);
        if (outputFile.is_open()) {
            outputFile << "Customer Name: " << name << "    |    " << "Paid Amount : RS " << paidAmount << "    |    " << "Remaining Amount: RS " << remainingAmount << endl;
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
    string name;
    double paidAmount;
    double remainingAmount;

    Merchant() {
        cout << "Enter Merchant Name: ";
        cin >> name;
        cout << "Enter Paid Amount: $";
        cin >> paidAmount;
        cout << "Enter Remaining Amount: $";
        cin >> remainingAmount;
        system("cls");
    }

    void display() {
        cout << "Merchant Name: " << name << endl;
        cout << "Paid Amount: $" << paidAmount << endl;
        cout << "Remaining Amount: $" << remainingAmount << endl;
    }

    void saveToFile() {
        ofstream outputFile("merchant_data.xls", ios::app);
        if (outputFile.is_open()) {
            outputFile << "Merchant Name: " << name << "    |    " << "Paid Amount: RS " << paidAmount << "    |    " << "Remaining Amount: RS " << remainingAmount << endl;
            outputFile.close();
            cout << "Merchant data saved successfully!" << endl;
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

    void deleteCustomerData() {
        string lineToDelete;
        cout << "Enter the name of the customer whose data you want to delete: ";
        cin >> lineToDelete;

        ifstream inputFile("customer_data.xls");
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
        ofstream outputFile("customer_data.xls");
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

    void deleteMerchantData() {
        string lineToDelete;
        cout << "Enter the name of the merchant whose data you want to delete: ";
        cin >> lineToDelete;

        ifstream inputFile("merchant_data.xls");
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
        ofstream outputFile("merchant_data.xls");
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

    int choice;


    cout << "\t\t\t------------------------------------------------------------------\n\n\n";
    cout << "\t\t\t                      Welcome to the Business                   \n\n\n";
    cout << "\t\t\t____________________           MENU             ____________________\n\n        ";
    cout << "                                                                           \n\n";
    cout << "\t| Press 1 ENTER CUSTOMER DATA     |\n";
    cout << "\t| Press 2 ENTER MERCHANT DATA     |\n";
    cout << "\t| Press 3 ENTER BOTH              |\n";
    cout << "\t| Press 4 View CUSTOMER DATA              |\n";
    cout << "\t| Press 5 View MERCHANT DATA      |\n";
    cout << "\t| Press 6 Delete CUSTOMER DATA    |\n";
    cout << "\t| Press 7 Delete MERCHANT DATA    |\n";
    cout << "\t| Press 8 Exit                    |\n";


    cout << "\n\t\t\t please enter your choice : ";
    cin >> choice;
    cout << endl;
    if (choice == 1) {
        int n;
        cout << "How many time do you want to delete customer data : ";
        cin >> n;
        for (int i = 0; i < n; i++) {

            Customer customer;
            customer.display();
            customer.saveToFile();
            cout << endl; cout << endl;

        }
    }
    else if (choice == 2) {
        int n;
        cout << "How many time do you want delete merchant data : ";
        cin >> n;
        for (int i = 0; i < n; i++) {
            Merchant merchant;
            merchant.display();
            merchant.saveToFile();

        }
    }

    else if (choice == 3) {
        int n;
        cout << "how many time do you want enter your data : ";
        cin >> n;
        for (int i = 0; i < n; i++) {
            Customer customer;
            customer.display();
            customer.saveToFile();
            cout << endl; cout << endl;

            Merchant merchant;
            merchant.display();
            merchant.saveToFile();

        }

    }
     else if (choice == 4) {
        viewcustomer();
    }
    else if (choice == 5) {
        viewmerchant();
    }
    else if (choice == 6) {


        int n;
        cout << "how many time do you want to delete customer data : ";
        cin >> n;
        for (int i = 0; i < n; i++) {

            Delete cuDelete;
            cuDelete.deleteCustomerData();


        }
    }

    else if (choice == 7) {
        int n;
        cout << "how many time do you want to delete merchant data : ";
        cin >> n;
        for (int i = 0; i < n; i++) {

            MDelete mdelete;
            mdelete.deleteMerchantData();


        }
    }

    else if (choice == 8)
    {
        return 0;
    }
    else {
        cout << "Please select correct choice! \n";

        main();
        system("cls");
    }
    return 0;
}


