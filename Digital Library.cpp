#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
string a;
	void Alogin();

void Aforgot();

int main();
void login();
void registration();
void forgot();
void view();
void deletebook();
void add();
void Smenu();
void Amenu();
void saveToFile();
string name, subject, Nauthor, Bcode;
	void createnotes(){
		system("cls");
	
	string filename, data, topics;
	
	cout<<"File name :";
	cin>>filename;
	filename += ".txt";
	cout<<"\n\n\tLet's start to write notes :\n\t\t";
	cin.ignore();
getline(cin,topics);
	getline(cin,data);	
	std::ofstream outputFile(filename.c_str(),ios::app);	
	outputFile<< topics<<"\t"<<data;
	outputFile.close();
 a:
    	char l;
    	if (a == "student"){
		
    cout << "\nGo back to the menu [Y/N]: ";
    cin >> l;
   switch(l){
    case 'y':
        Smenu();
    break;
    case 'n':
        return;
    	}
    	}
    	else if(a == "admin"){
    	cout << "\nGo back to the menu [Y/N]: ";
    cin >> l;
   switch(l){
    case 'y':
        Amenu();
    break;
    
    case 'n':
        return;
    }
    	}
	else{
	    goto a;
	
    }
}

void viewnotes(){
	
	string filename;
		cout<<"Enter your name which you write while creating notes:";
	cin>>filename;
	filename += ".txt";
	ifstream inputFile(filename.c_str());
    string line;

    if (!inputFile.is_open()) {
        cout << "Error: Unable to open the book record file." << endl;
        return;
    }

    cout << "\n\t\t\t Books in the Library:\n";
    cout << "      ------------------------------------------------------------------\n";

    while (getline(inputFile, line)) {
        cout << line << endl;
    }

    inputFile.close();
     a:
    	char l;
    	if (a == "student"){
		
    cout << "\nGo back to the menu [Y/N]: ";
    cin >> l;
   switch(l){
    case 'y':
        Smenu();
    break;
    case 'n':
        return;
    	}
    	}
    	else if(a == "admin"){
    	cout << "\nGo back to the menu [Y/N]: ";
    cin >> l;
   switch(l){
    case 'y':
        Amenu();
    break;
    
    case 'n':
        return;
    }
    	}
	else{
	    goto a;
	
    }
}

void deletenotes() {
    string filename, topicToDelete;
    cout << "Enter your name which you used while creating notes: ";
    cin >> filename;
    filename += ".txt";

    ifstream inputFile(filename.c_str());
    if (!inputFile.is_open()) {
        cout << "Error: Unable to open the notes file." << endl;
        return;
    }

    cout << "Enter the topic name you want to delete: ";
    cin.ignore();
    getline(cin, topicToDelete);

    vector<string> noteLines;
    string line;

    while (getline(inputFile, line)) {
        // Check if the line contains the topic name to delete
        if (line.find(topicToDelete) == string::npos) {
            noteLines.push_back(line);
        }
    }

    inputFile.close();

    // Reopen the file in write mode and overwrite it with the modified notes
    ofstream outputFile(filename.c_str());
    if (outputFile.is_open()) {
        for (size_t i = 0; i < noteLines.size(); ++i) {
            const string &noteLine = noteLines[i];
            outputFile << noteLine << endl;
        }
        outputFile.close();
        cout << "Notes with topic name '" << topicToDelete << "' deleted successfully!" << endl;
        a1:
    	char l;
    	if (a == "student"){
		
    cout << "\nGo back to the menu [Y/N]: ";
    cin >> l;
   switch(l){
    case 'y':
        Smenu();
    break;
    case 'n':
        return;
    	}
    	}
    	else if(a == "admin"){
    	cout << "\nGo back to the menu [Y/N]: ";
    cin >> l;
   switch(l){
    case 'y':
        Amenu();
    break;
    
    case 'n':
        return;
    }
    	}
	else{
	    goto a1;
	
    }
    } else {
        cout << "Error: Unable to open the file for writing." << endl;
        a2:
    	char l;
    	if (a == "student"){
		
    cout << "\nGo back to the menu [Y/N]: ";
    cin >> l;
   switch(l){
    case 'y':
        Smenu();
    break;
    case 'n':
        return;
    	}
    	}
    	else if(a == "admin"){
    	cout << "\nGo back to the menu [Y/N]: ";
    cin >> l;
   switch(l){
    case 'y':
        Amenu();
    break;
    
    case 'n':
        return;
    }
    	}
	else{
	    goto a2;
	
    }
    }
}

void Smenu(){
	int choice;
	cout << "\t\t\t____________________           MENU             ____________________\n\n        ";
    cout << "                                                                           \n\n";

   
    cout << "\t| Press 1 View book         |\n";
    cout << "\t| Press 2 create notes      |\n";
    cout << "\t| Press 3 view notes        |\n";
    cout<<  "\t| Press 4 Delete notes       |\n";
    cout << "\t| Press 5 To Exite                   |\n";


    cout << "\n\t\t\t please enter your choice : ";
    cin >> choice;
    cout << endl;
    switch(choice){

	
	case 1:
		view();
		break;
		
	case 2:
		createnotes();
		break;
	
	case 3:
		viewnotes();
		break;
		
	case 4:
		deletenotes();
		break;
		
	case 5:
		  cout<<"\t\t\t  Thank you! \n\n";
		break;
		
		default:
		system("cls");
		  cout<<"\t\t\t Please select from the options  given above\n\n";
		  main();
		  
}
}
void Amenu(){
	
	int choice;
	 cout << "\t\t\t____________________           MENU             ____________________\n\n        ";
    cout << "                                                                           \n\n";

    cout << "\t| Press 1 Add book          |\n";
    cout << "\t| Press 2 View book         |\n";
    cout << "\t| Press 3 Delete book       |\n";
    cout << "\t| Press 4 create notes      |\n";
    cout << "\t| Press 5 view notes        |\n";
    cout<<  "\t| Press 6 Delete notes       |\n";
    cout << "\t| Press 7 To Exite                   |\n";


    cout << "\n\t\t\t please enter your choice : ";
    cin >> choice;
    cout << endl;
    switch(choice){
	case 1:
		add();
		break;
	
	case 2:
		view();
		break;
	
	case 3:
		deletebook();
		break;
	
	case 4:
		createnotes();
		break;
	
	case 5:
		viewnotes();
		break;
		
	case 6:
		deletenotes();
		break;
		
	case 7:
		  cout<<"\t\t\t  Thank you! \n\n";
		break;
		
		default:
		system("cls");
		  cout<<"\t\t\t Please select from the options  given above\n\n";
		  main();
		  
		
		}
		
}
		void add(){
		int  b;
		cout<<"\nhow many book do you want to add : ";
		cin>>b;
		for (int i=0; i<b; i++){
			 cout << "\n\nEnter the book name   : ";
        cin.ignore(); 
        getline(cin, name); 
        cout << "Enter the subject     : ";
        getline(cin, subject); 
        cout << "Enter the author name : ";
        getline(cin, Nauthor); 
        cout << "Enter the book code   : ";
        cin >> Bcode;
			saveToFile();
	
    }
    		a:
    	char l;
    	if (a == "student"){
		
    cout << "\nGo back to the menu [Y/N]: ";
    cin >> l;
   switch(l){
    case 'y':
        Smenu();
    break;
    case 'n':
        return;
    	}
    	}
    	else if(a == "admin"){
    	cout << "\nGo back to the menu [Y/N]: ";
    cin >> l;
   switch(l){
    case 'y':
        Amenu();
    break;
    
    case 'n':
        return;
    }
    	}
	else{
	    goto a;
	
		}
		}
		
		void view() {
			system("cls");
    ifstream inputFile("Book_record.txt");
    string line;

    if (!inputFile.is_open()) {
        cout << "Error: Unable to open the book record file." << endl;
         a2:
    	char l;
    	if (a == "student"){
		
    cout << "\nGo back to the menu [Y/N]: ";
    cin >> l;
   switch(l){
    case 'y':
        Smenu();
    break;
    case 'n':
        return;
    	}
    	}
    	else if(a == "admin"){
    	cout << "\nGo back to the menu [Y/N]: ";
    cin >> l;
   switch(l){
    case 'y':
        Amenu();
    break;
    
    case 'n':
        return;
    }
    	}
	else{
	    goto a2;
	
    }
        return;
    }

    cout << "\n\t\t\t    Books in the Library:\n";
    cout << "------------------------------------------------------------------\n";

    while (getline(inputFile, line)) {
        cout << line << endl;
    }

    inputFile.close();
    a:
    	char l;
    	if (a == "student"){
		
    cout << "\nGo back to the menu [Y/N]: ";
    cin >> l;
   switch(l){
    case 'y':
        Smenu();
    break;
    case 'n':
        return;
    	}
    	}
    	else if(a == "admin"){
    	cout << "\nGo back to the menu [Y/N]: ";
    cin >> l;
   switch(l){
    case 'y':
        Amenu();
    break;
    
    case 'n':
        return;
    }
    	}
	else{
	    goto a;
	
    }
}
 void deletebook() {
 	view();
        string lineToDelete;
        cout << "Enter the name of the book which you want to delete: ";
        cin >> lineToDelete;

        ifstream inputFile("Book_record.txt");
        if (!inputFile) {
            cout << "Error: Unable to open the file ." << endl;
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
        ofstream outputFile("Book_record.txt");
        if (outputFile.is_open()) {
            for (size_t i = 0; i < dataLines.size(); ++i) {
    const string &dataLine = dataLines[i];
    outputFile << dataLine << endl;
}
            outputFile.close();
            cout << "Book deleted successfully!" << endl;
            a4:
    	char l;
    	if (a == "student"){
		
    cout << "\nGo back to the menu [Y/N]: ";
    cin >> l;
   switch(l){
    case 'y':
        Smenu();
    break;
    case 'n':
        return;
    	}
    	}
    	else if(a == "admin"){
    	cout << "\nGo back to the menu [Y/N]: ";
    cin >> l;
   switch(l){
    case 'y':
        Amenu();
    break;
    
    case 'n':
        return;
    }
    	}
	else{
	    goto a4;
	
    }
        }
        else {
            cout << "Error: Unable to open the file for writing." << endl;
            a3:
    	char l;
    	if (a == "student"){
		
    cout << "\nGo back to the menu [Y/N]: ";
    cin >> l;
   switch(l){
    case 'y':
        Smenu();
    break;
    case 'n':
        return;
    	}
    	}
    	else if(a == "admin"){
    	cout << "\nGo back to the menu [Y/N]: ";
    cin >> l;
   switch(l){
    case 'y':
        Amenu();
    break;
    
    case 'n':
        return;
    }
    	}
	else{
	    goto a3;
	
    }

        }
    }

		 void saveToFile() {
        ofstream outputFile("Book_record.txt", ios::app);
        if (outputFile.is_open()) {
            outputFile << "Book Name : " << name << " | " << "Book Subject : " << subject << " | " << "Author Name : " <<Nauthor
			<< " | " << "Book Code : " <<Bcode<< "| "<<endl;
            outputFile.close();
            cout << "Book successfully Added!" << endl;
        }
        else {
            cout << "Error: Unable to save book in file." << endl;
        }
    }
		
int main(){
	int choice;
	

	
	
cout<<"\t\t\t************************************************************************\n";
cout<<"\t\t\t*                     Welcome to the  DIGITAL LIBRARY                  *\n";
cout<<"\t\t\t************************************************************************\n\n";
cout<<"                                                                           \n\n";
	cout<<"\t\t\t                    Confirm your identity                                     \n\n";
	cout<<"\t\t\t1. STUDENT                                        2. ADMIN \n";
cout<<"\n\n\t\t\tWho are you : I am ";
cin >>a;

if(a =="student"){
    cout<<"\n\n\t| Press 1 To LOGIN                    |\n";
cout<<"\t| Press 2 To REGISTER                 |\n";
cout<<"\t| Press 3 if you forgot the PASSWORD  |\n";
cout<<"\t| press 4 to EXIT                     |\n";
cout<<"\n\t\t\t please enter your choice : ";
cin>>choice;
cout<<endl;

	switch(choice){
	case 1:
		login();
		Smenu();
		break;
	
	case 2:
		registration();
		break;
	
	case 3:
		forgot();
		break;
	
	case 4:
		  cout<<"\t\t\t  Thank you! \n\n";
		break;
		
		default:
		system("cls");
		  cout<<"\t\t\t Please select from the options  given above\n\n";
		  main();
		  
		
		}
		

    
}
else if(a=="admin"){
cout<<"\t| Press 1 To LOGIN                    |\n";
cout<<"\t| Press 2 if you forgot the PASSWORD  |\n";
cout<<"\t| press 3 to EXIT                     |\n";
cout<<"\n\t\t\t please enter your choice : ";
cin>>choice;
cout<<endl;

	switch(choice){
	case 1:
		Alogin();
		Amenu();  
		break;
	
	
	case 2:
		Aforgot();
		break;
	
	case 3:
		  cout<<"\t\t\t  Thank you! \n\n";
		break;
		
		default:
		system("cls");
		  cout<<"\t\t\t Please select from the options  given above\n\n";
		  main();
		  
		
		}
		
  
}
else{
    cout<<"Please  enter correct choice!";
    system("cls");
    main();
}
}
void Alogin(){
  	
  	
  	string userid, password, id, pass;
	  
    system("cls");	
    
    cout<<"\n\n\t\t\t Please enter the username and password:   \n";
    cout<<"\t\t\t USERNAME :";
    cin>>userid;
  	cout<<"\t\t\t PASSWORD :";
  	cin>>password;
  	id = "ayeshrf@gmail.com";
  	pass = "ayesh123";
  	
  	if(id == userid && pass == password){
  	    system("cls");
  		
  		cout<<userid<<"\n Your LOIGIN is successful \n Thank you for logging in! \n";
	  }

  
    
    else{
    	cout<<"\n LOGIN ERROR \n Please check your username and password\n";
    	main();
	}
	
	}
	
		void Aforgot(){
		
		int option;
		system("cls");
		cout<<"\n\t\t\t You forgot the password? No worries \n";
			cout<<"Press 1 to search your id by username "<<endl;
			cout<<"Press 2 to go back the main menu "<<endl;
			cout<<"\t\t\t Enter your choice: "<<endl;
			cin>>option;
			
			switch(option)
			{
				case 1:
					
				{
				
				
					string suserid, id, pass;
					
					cout<<"\n\t\t\t Enter the username which you remembered : \n";
					cin>>suserid;
					
				id = "ayeshrf@gmail.com";
  	pass = "ayesh123";
  	
				if(suserid == id){
  			cout<<"\n\n Your account is found! \n";
				cout<<"\n\n Your account password is : "<<pass;
			    main();
  					}
  					
  					else{
		    	cout<<"\n\t Sorry your account is not found! \n";
		    	main();
				}
  				}
  
				
			    
  			
  			case 2:
  				{
  					main();
  					
				  }
				  default:
				  	cout<<"\t\t\t Worng choice ! Please Try again "<<endl;
				  	forgot();
				  	
				  	
  			
			}
	}
	
	  void login(){
  	
  	int count;
  	string userid, password, id, pass;
	  
    system("cls");	
    
    cout<<"\t\t\t Please enter the username and password:   \n";
    cout<<"\t\t\t USERNAME ";
    cin>>userid;
  	cout<<"\t\t\t PASSWORD ";
  	cin>>password;
  	
  	ifstream input("record.txt");
  	
  	while(input>>id>>pass){
	  
  	
  	if(id == userid && pass == password){
  		count = 1;
  		system("cls");
  		
	  }

  }
    input.close();
    if(count == 1){
    	cout<<userid<<"\n Your LOIGIN is successful \n Thank you for logging in! \n";
    	
    }
    else{
    	cout<<"\n LOGIN ERROR \n Please check your username and password\n";
    	main();
	}
	
	}
	
	void registration(){
		
		string ruserid, rpassword, rid, rpass;
		system("cls");
		cout<<"\t\t\t Enter your USERNAME ";
    	cin>>ruserid;
  		cout<<"\t\t\t Enter your PASSWORD ";
  		cin>>rpassword;
  		
  		ofstream f1("record.txt" , ios::app);
  		f1<< ruserid<<" "<<rpassword<<endl;
  		system("cls");
  		
  		cout<<"\n\t\t\t Registration is successful! \n";
  		main();
  		
  	

		
	}
	
	void forgot(){
		
		int option;
		system("cls");
		cout<<"\n\t\t\t You forgot the password? No worries \n";
			cout<<"Press 1 to search your id by username "<<endl;
			cout<<"Press 2 to go back the main menu "<<endl;
			cout<<"\t\t\t Enter your choice: "<<endl;
			cin>>option;
			
			switch(option)
			{
				case 1:
					
				{
				
					int count=0;
					string suserid, sid, spass;
					
					cout<<"\n\t\t\t Enter the username which you remembered : \n";
					cin>>suserid;
					
				ifstream f2("record.txt");
  	
  				while(f2>>sid>>spass){
	  
				if(sid == suserid){
  				count = 1;
  					}
  				}
  				
  				 f2.close();
    			if(count == 1){
    				
				cout<<"\n\n Your account is found! \n";
				cout<<"\n\n Your account password is : "<<spass;
			    main();
			    }
			    else{
		    	cout<<"\n\t Sorry your account is not found! \n";
		    	main();
				}
				break;
  		
  			}
  			case 2:
  				{
  					main();
  					
				  }
				  default:
				  	cout<<"\t\t\t Worng choice ! Please Try again "<<endl;
				  	forgot();
				  	
				  	
  			
			}
	}



