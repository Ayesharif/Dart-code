import 'dart:io';

void main(){


stdout.write('Enter initialization point : ');
int a = int.parse(stdin.readLineSync()!);

stdout.write('Enter conditional  point : ');
int b = int.parse(stdin.readLineSync()!);

stdout.write('Enter operator ( ++ or -- ) : ');
String operator=stdin.readLineSync()!;

switch (operator) {
case '++':

for(int i=a; i<=b; i++){

  print(i);
}    
    break;

  case '--':
  for(int i=a; i>=b; i--){

  print(i);
}  
  default:

}





}