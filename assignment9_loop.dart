import 'dart:io';

void main(){

// print("\t ** Print number from 0 to 10 **  \n");
// for(int i=0; i<=10; i++){

//   print(i);
// }
// print("\n");

// print("\t ** Get input from user for Initialization and Conditional point **  \n");

// stdout.write('Enter initialization point : ');
// int a = int.parse(stdin.readLineSync()!);

// stdout.write('Enter conditional  point : ');
// int b = int.parse(stdin.readLineSync()!);

// for(int i=a; i<=b; i++){

//   print(i);
// }    
// print('\n') ;
// print("\t ** Using break statement **  \n"); 
// for(int c=0; c<=10; c++) {

// if(c==7){
// break;
// }
//   print(c);

// }

// print('\n') ;
// print("\t ** Using Continue statement **  \n");
// for(int c=0; c<=10; c++) {

// if(c==7){
// continue;
// }
//   print(c);

// }
// print('\n') ;
// print("\t ** print Even number between 0 to 10 **  \n");
// for(int d=0; d<=10; d++){
//   if(d%2==0){
// print(d);
//   }
  
// }

// print('\n') ;
// print("\t ** Print odd number between 0 to 10 **  \n");
// for(int d=0; d<=10; d++){
//   if(d%2==1){
// print(d);
//   }
  
// }

// print('\n') ;
// print("\t ** Get input from user and print Table **  \n");
// stdout.write("Enter value for table : ");
// int f = int.parse(stdin.readLineSync()!);
// for(int e=0; e<=10; e++){
//   print("$f x $e = ${e * f}");
// }


// print('\n') ;
// print("\t ** Print shapes (Square) **  \n");
// for(int g=0; g<=10; g++){
//  for(int h=0; h<=10; h++){
//   stdout.write(" * ");
// }
// print("\n") ;
// }

print('\n') ;
print("\t ** Print shapes (Triangle) **  \n");
for(int j=0; j<=10; j++){

 for(int k=j; k<=10; k++){
  stdout.write(" * ");
}
print(' ');
}

print('\n') ;
print("\t ** Print shapes (Dimond) **  \n");

for(int j=0; j<=10; j++){

  
 for(int k=j; k<=10; k++){
  stdout.write("   ");
}
 for(int k=0; k<=j*2; k++){
  stdout.write(" * ");
}
print(' ');

}

for(int j=10; j>=0; j--){

  
 for(int k=j; k<=10; k++){
  stdout.write("   ");
}
 for(int k=0; k<=j*2; k++){
  stdout.write(" * ");
}
print(' ');

}



}