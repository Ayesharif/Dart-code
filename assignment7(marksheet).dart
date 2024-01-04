import 'dart:io';

void main(){
  print("\n\tFinal term marks");
  stdout.write("\nEnter English marks :");
  int eng=int.parse(stdin.readLineSync()!);

  stdout.write("Enter Urdu marks :");
  int urdu=int.parse(stdin.readLineSync()!);

  stdout.write("Enter Math marks :");
  int math=int.parse(stdin.readLineSync()!);

  stdout.write("Enter Science marks :");
  int sci=int.parse(stdin.readLineSync()!);

  int total=eng + urdu + math + sci;
  double percentage=(total/400)*100;
  print('\nSubjects    Total_Marks  Obtain_Marks ');
  print('\nEnglish       100              $eng');
  print('\nUrdu          100              $urdu');
  print('\nMath          100              $math');
  print('\nScience       100              $sci');
print('\n\n');
print('Obtain  $total Marks!');
print('Obtain $percentage % ');
print('\n');
   if(percentage>=1 &&percentage<=39){
    print("You have got E grade ! ");
  }
  else if(percentage>=40 &&percentage<=49){
    print("You have got D grade ! ");
  }
  
  else if(percentage>=50 &&percentage<=59){
    print("You have got C grade ! ");
  }
  
  else if(percentage>=60 &&percentage<=69){
    print("You have got B- grade ! ");
  }
  
  else if(percentage>=70 &&percentage<=79){
    print("You have got B+ grade ! ");
  }
  
  else if(percentage>=80 &&percentage<=89){
    print("You have got A- grade ! ");
  }
  
  else if(percentage>=90 &&percentage<=100){
    print("You have got A+ grade ! ");
  }


}