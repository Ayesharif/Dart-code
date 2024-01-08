#include<iostream>
#include<fstream>
#include<string>
#include<ctime>
using namespace std;
int main();
class Wholeseller {
public:
    double rice;
    double sugar;
    double pulses;
    double oil;

    Wholeseller() {
        // Load stock values from the file or set default values if the file does not exist
        ifstream inputFile("stock_data.txt");
        if (inputFile.is_open()) {
            inputFile >> rice >> sugar >> pulses >> oil;
            inputFile.close();
        } else {
            rice = 1000;
            sugar = 1000;
            pulses = 1000;
            oil = 1000;
        }
    }

    void saveStockToFile() {
        ofstream outputFile("stock_data.txt");
        if (outputFile.is_open()) {
            outputFile << rice << " " << sugar << " " << pulses << " " << oil;
            outputFile.close();
        } else {
            cout << "Error: Unable to save stock data to file." << endl;
        }
    }

    void recordPurchase(const string& purchaserName, const string& product, int quantity) {
        ofstream purchaseFile("purchase_data.txt", ios::app);
        if (purchaseFile.is_open()) {
            time_t now = time(0);
            purchaseFile << "Purchaser: " << purchaserName << " | Product: " << product 
                         << " | Quantity: " << quantity << " | Date: " << ctime(&now);
            purchaseFile.close();
            cout << "Purchase recorded successfully!" << endl;
        } else {
            cout << "Error: Unable to record purchase." << endl;
        }
    }

    void displayCategory() {
           	system("CLS");
        // Display stock quantities
    cout << "\t\t\t________________________         STOCK          ____________________\n\n        ";    
        cout << "\tRice Quantity: " << rice << endl;
        cout << "\t\tSugar Quantity: " << sugar << endl;
        cout << "\t\tPulses Quantity: " << pulses << endl;
        cout << "\t\tOil Quantity: " << oil << endl;
    }

void sellProducts() {
	system("CLS");
    int choice, quantity;
    string purchaserName;

    cout << "\n\n\t\tEnter purchaser name: ";
    cin >> purchaserName;
ab:
	system("CLS");    
    cout << "\t\t\t________________________      CATOGERY       ____________________\n\n        ";

    cout << "\t| Press 1 RICE             |\n";
    cout << "\t| Press 2 SUGER            |\n";
    cout << "\t| Press 3 PULSES           |\n";
    cout << "\t| Press 4 OIL              |\n";


    cout << "\n\t\t\t please enter your choice : ";

    cin >> choice;

    switch (choice) {
                   case 1:
                cout << "\n\t\tHow many sacks of rice do you want: ";
                cin >> quantity;
                if (quantity <= rice) {
                    rice -= quantity;
                    cout << "\n\t\tYou have purchased " << quantity << " sacks of rice." << endl;
                    saveStockToFile();
                    recordPurchase(purchaserName, "Rice", quantity);
                    char y;
	cout<<"\n\nPress 'y' to purches more items  OR Press'n' for EXIT :";
		cin>>y;
		switch(y){
    case 'y':
        goto ab;
    break;
    case 'n':
        main();
		
    	}
                    
                } else {
                    cout << "Not enough stock available for rice!" << endl;
                }
                break;

        case 2:
            cout << "\n\t\tHow many sacks of suger do you want: ";
            cin >> quantity;
            if (quantity <= sugar) {
                sugar -= quantity;
                cout << "You have purchased " << quantity << " sacks of sugar." << endl;
                saveStockToFile();
                recordPurchase(purchaserName, "Sugar", quantity);
                    char y;
	cout<<"\n\nPress 'y' to purches more items  OR Press'n' for EXIT :";
		cin>>y;
		switch(y){
    case 'y':
        goto ab;
    break;
    case 'n':
                main();
    }
            } else {
                cout << "Not enough stock available for sugar!" << endl;
            }
            break;
        case 3:
            cout << "\n\t\tHow many sacks of pulses do you want: ";
            cin >> quantity;
            if (quantity <= pulses) {
                pulses -= quantity;
                cout << "You have purchased " << quantity << " sacks of pulses." << endl;
                saveStockToFile();
                recordPurchase(purchaserName, "Pulses", quantity);
                char y;
	cout<<"\n\nPress 'y' to purches more items  OR Press'n' for EXIT :";
		cin>>y;
		switch(y){
    case 'y':
        goto ab;
    break;
    case 'n':
        main();
		    }
			} else {
                cout << "Not enough stock available for pulses!" << endl;
            }
            break;
        case 4:
            cout << "\n\t\tHow many liters of oil do you want : ";
            cin >> quantity;
            if (quantity <= oil) {
                oil -= quantity;
                cout << "You have purchased " << quantity << " liters of oil." << endl;
                saveStockToFile();
                recordPurchase(purchaserName, "Oil", quantity);
                char y;
		cout<<"\n\nPress 'y' to purches more items  OR Press'n' for EXIT :";
		cin>>y;
		switch(y){
    case 'y':
        goto ab;
    break;
    case 'n':
        main();
    }
			} else {
                cout << "Not enough stock available for oil!" << endl;
            }
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
}
    void displayPurchases() {
           	system("CLS");
        ifstream purchaseFile("purchase_data.txt");
        if (purchaseFile.is_open()) {
            string line;

                cout << "\t\t\t________________________         Purchase History          ____________________\n\n        ";

            while (getline(purchaseFile, line)) {
                cout << line << endl;
            }
            purchaseFile.close();
        } else {
            cout << "No purchase data available." << endl;
        }
    }
};

int main() {
   	system("CLS");
    Wholeseller cat;
    int choice;
	
    cout << "\t\t\t------------------------------------------------------------------\n\n\n";
    cout << "\t\t\t                      WELCOME TO THE WHOLESELLER                   \n\n\n";
    cout << "\t\t\t____________________           MENU             ____________________\n\n        ";

    while (true) {
    
        cout << "| Press 1 Display Available Stock       |\n";
        cout << "\t| Press 2 Sell Products                 |\n";
        cout << "\t| Press 3 View Purchase History         |\n";
        cout << "\t| Press 4 Exit                          |\n"; 
    

    cout << "\n\t\t\t please enter your choice : ";
        
        cin >> choice;

        switch (choice) {
            case 1:
                cat.displayCategory();
                char y;
		cout<<"\n\nPress 'y' for MENU OR Press'n' for EXIT :";
		cin>>y;
		switch(y){
    case 'y':
        main();
    break;
    case 'n':
        return 0;
    	}
   
            case 2:
                cat.sellProducts();
	
		cin>>y;
		switch(y){
    case 'y':
    	system("CLS");
main();
                 
    break;
    case 'n':
        return 0;
    	}
            case 3:
                cat.displayPurchases();
                
		cout<<"\n\nPress 'y' for MENU OR Press'n' for EXIT :";
		cin>>y;
		switch(y){
    case 'y':
        main();
    break;
    case 'n':
        return 0;
    	}
            case 4:
                cout << "Exiting the program. Thank you!" << endl;
                cat.saveStockToFile();
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}

