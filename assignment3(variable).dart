import 'dart:io';

void main(){
  
  
  print("Enter your name: ");
    String name = stdin.readLineSync()!;

print("Enter your father name: ");
    String fname = stdin.readLineSync()!;


  print("Enter your age: ");
    var age = int.parse(stdin.readLineSync()!);

    
  print("Enter your salary: ");
    var salary = int.parse(stdin.readLineSync()!); 

      
          print("Name :        $name");
          print("Father Name : $fname");
          print("Age :         $age");
          print("Salary :      $salary");


//print(fname);
}