#include <iostream>
#include <string>
using namespace std;


    string fatherN;
    double cnic;
    string country;
    string ticketN;
    string airline;
    string ticketd;
    string name;


void data();
    void display();
    
    int main() {
a:
    system("CLS");
    int choice;

    cout << "\t\t\t------------------------------------------------------------------\n\n\n";
    cout << "\t\t\t                  WELCOME TO THE TICKET RESERVATION               \n\n\n";
    cout << "\t\t\t____________________           MENU             ____________________\n\n        ";
    cout << "                                                                           \n\n";
    cout << "\t\t\t\t| Press 1 ENTER TO RESERVE TICKET    |\n";
    cout << "\t\t\t\t| Press 2 VIEW TICKET                |\n";
    cout << "\t\t\t\t| Press 3 EXIT                       |\n";

    cout << "\n\t\t\t please enter your choice : ";
    cin >> choice;
    cout << endl;

    if (choice == 1) {
        system("cls");


            data();

                char y;
                cout << "\n\nGo back to the MENU [Y/N] :";
                cin >> y;
                switch (y) {
                case 'y':
                    goto a;
                    break;
                case 'n':
                    return 0;
                }
            }
      else if (choice == 2) {
        system("CLS");

display();

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
    
    else if (choice == 3) {
        return 0;
    }
    
    else {
        goto a;
    }
}



void data(){
        cout << "\n\tEnter the Ticket holder's data for booking :";

        cout << "\n\n\t\tTicket holder name : ";
        cin >> name;
        cin.ignore();

        
        cout << "\n\t\tTicket holder's father name : ";
        cin >> fatherN;
        cout << "\n\t\tTicket holder's CNIC no. : ";
        cin >> cnic;
        cout << "\n\t\tCountry name : ";
        cin >> country;
        cout << "\n\t\tAirline name :";
        cin >> airline;
        cin.ignore();
        cout << "\n\t\tWhich type of ticket do you want to book :";
        cin >> ticketN;
        cin.ignore();
        cout << "\n\t\tOne-way ticket or Return ticket : ";
        cin >> ticketd;
cin.ignore();
    cout<<"\n\n";
}
    void display() {
        cout << "\n\n\t\t|--------------------------------------|";
        cout << "\n\t\t|               TICKET                |";
        cout << "\n\t\t|--------------------------------------|";
        cout << "\n\t\t| Name              :   " << name << "\t       |";
        cout << "\n\t\t| Father name       :   " << fatherN << "\t       |";
        cout << "\n\t\t| CNIC NO.          :   " << cnic << "\t       |";
        cout << "\n\t\t| Airline name      :   " << airline << "\t       |";
        cout << "\n\t\t| Country to travel :   " << country << "\t       |";
        cout << "\n\t\t| Ticket Type       :   " << ticketN << "\t       |";
        cout << "\n\t\t| Ticket duration   :   " << ticketd << "\t       |";
    cout<<"\n\n";
        
    }
