#include <iostream>
#include <vector>
#include <iomanip>
#include <fstream>
using namespace std;

// Define a structure to represent a product
struct Product {
    std::string name;
    double price;
    int quantity;
};

// Function to calculate the total cost of items in the cart
double calculateTotalCost(const std::vector<Product>& cart) {
    double totalCost = 0.0;
    for (const Product& item : cart) {
        totalCost += item.price * item.quantity;
    }
    return totalCost;
}

    void viewproduct() {
        system("CLS");

        ifstream inputFile("sold_data.txt");
        string line;
        double totalPaidAmount = 0.0;

        if (!inputFile.is_open()) {
            cout << "Error: Unable to open the Groceries record file." << endl;
            return;
        }

        cout << "\n\t\t\t Sold Product Data:\n";
        cout << "--------------------------------------------------------------------------------------------------------------------------------------------\n";

        while (getline(inputFile, line)) {
            cout << line << endl;
        }

        inputFile.close();
    }
    void saveToFile() {
       
    }


int main() {
    std::vector<Product> cart;
    char choice;

    do {
        std::cout << "MENU:\n";
        std::cout << "1. Add Product\n";
        std::cout << "2. Generate Bill\n";
        std::cout << "3. View sold Product\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case '1': {
                Product newItem;
                std::cout << "Enter product name: ";
                std::cin >> newItem.name;
                std::cout << "Enter price: ";
                std::cin >> newItem.price;
                std::cout << "Enter quantity: ";
                std::cin >> newItem.quantity;
        ofstream outputFile("sold_data.txt", ios::app);
        if (outputFile.is_open()) {
            outputFile << "Product Name: " << newItem.name << "    |    " << "Per Price : " << newItem.price << "    |    " << "Quantity : " << newItem.quantity << endl;
            outputFile.close();
            cout << " saved successfully!" << endl;
        }
        else {
            cout << "Error: Unable to open the file for monthly_expension data." << endl;
        }
	            cart.push_back(newItem);
                break;
            }
            case '2': {
                if (cart.empty()) {
                    std::cout << "Cart is empty. Add items before generating the bill.\n";
                } else {
                    std::cout << "\n--- BILL ---\n";
                    std::cout << std::left << std::setw(20) << "Product Name" << std::setw(10) << "Price" << std::setw(10) << "Quantity" << std::setw(15) << "Total Cost\n";
                    for (const Product& item : cart) {
                        double totalItemCost = item.price * item.quantity;
                        std::cout << std::left << std::setw(20) << item.name << std::setw(10) << item.price << std::setw(10) << item.quantity << std::setw(15) << totalItemCost << "\n";
                    }
                    std::cout << "-----------------------------------------\n";
                    std::cout << "Total Cost: $" << calculateTotalCost(cart) << "\n";
                    cart.clear(); // Clear the cart after generating the bill
                }
                break;
            }
            case '3': {
viewproduct();
                main();
            }

            case '4': {
                std::cout << "Exiting the program.\n";
    return 0;
            }
            default: {
                std::cout << "Invalid choice. Please try again.\n";
                break;
            }
        }
    } while (choice != '3');


}

