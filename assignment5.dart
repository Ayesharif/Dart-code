void main(){

  int total=6680;

   int Fthousrem=total%5000;
 double Fthouscount = total / 5000;
  print("Five Thousand's : ${Fthouscount.toInt()}");
  
 int thousrem=Fthousrem%1000;
 double thouscount = Fthousrem / 1000;
  print("Thousand's : ${thouscount.toInt()}");

  
   int Fhundrem=thousrem%500;
 double Fhundcount = thousrem / 500;
  print("Five Hundred's : ${Fhundcount.toInt()}");

   int hundrem=Fhundrem%100;
 double hundcount = Fhundrem / 100;
  print("Hundred's : ${hundcount.toInt()}");

  
   int fiftyrem=hundrem%50;
 double fiftycount = hundrem / 50;
  print("Fifty's : ${fiftycount.toInt()}");

   int twentyrem=fiftyrem%20;
 double twentycount = fiftyrem / 20;
  print("Twenty's : ${twentycount.toInt()}");
  
   int tenrem=twentyrem%10;
 double tencount = twentyrem / 10;
  print("Ten's : ${tencount.toInt()}");


}