import 'dart:io';

void main(){
m1:
print('\n\n');

print('\t Operations (+, -, *, /)');
  stdout.write("Enter number 1 : ");
  var num1 = int.parse(stdin.readLineSync()!);

  stdout.write("Enter number 2 : ");
    var num2 = int.parse(stdin.readLineSync()!);

    stdout.write("Enter the operator(+, -, *, /) : ");
  String condition=stdin.readLineSync()!;
  switch(condition){
case '+' :{
  int sum= num1+num2;
  print('The sum $condition is $sum');
  break;
}
case '-' :{
  int sub= num1-num2;
  print('The subtraction $condition is  $sub');
  break;
}
case '*' :{
  int multi= num1-num2;
  print('The multiplication $condition is  $multi');
  break;
}
case '/' :{
  double div = num1/num2;
  print('The division $condition is  $div');
  break;
}
default:
print('Please Enter correct operator (+, -, *, /) !');

 return main();
 
  

}
}