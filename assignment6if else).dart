import 'dart:io';

void main(){
stdout.write("Enter the value of a :");
  int a=int.parse(stdin.readLineSync()!);

  stdout.write("Enter the value of b :");
  int b=int.parse(stdin.readLineSync()!);

stdout.write("Enter the value of c :");
  int c=int.parse(stdin.readLineSync()!);

  if(a>b && a>c){
    print("a is greater $a");
    if(b>c){
      print("b is middle $b");
            print("c is small $c");
    }else{
print("c is middle $c");
            print("b is small $b");

    }
  }

  if(b>a && b>c){
    print("b is greater $b");
    if(a>c){
      print("a is middle $a");
            print("c is small $c");
    }else{
print("c is middle $c");
            print("a is small $a");

    }
  }
  
  if(c>a && c>b){
    print("c is greater $c");
    if(b>a && a>b){
      print("a is middle $a");
            print("b is small $b");
    }else{
print("b is middle $b");
            print("a is small $a");

    }
  }

}