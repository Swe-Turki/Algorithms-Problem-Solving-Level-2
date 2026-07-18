// #include <iostream>
// using namespace std ;

// void ReadPositiveNumberAndDigit(int &Number , int &digit)
// {
// do
// {
// cout << "Please Enter The Number"  << endl;
// cin >> Number;
// cout <<  "Enter The Digit You want" << endl;
// cin >> digit;
// } while (Number <= 0 && digit <=0);
// }

// int PrintFrecInNumber(int &Number , int &digit){
// int Reminder = 0;
// int Counter = 0;
// while (Number > 0 ){
// Reminder = Number % 10;
// Number = Number / 10 ;
//  if (digit == Reminder )
//       Counter++;
// }
// return Counter;
// }
// int main(){
// int Number = 0 ;
// int digit = 0 ;
// ReadPositiveNumberAndDigit(Number, digit);
// cout << "Digit " << digit << " is " << PrintFrecInNumber(Number , digit) << " Time(s)\n";
// }

#include <iostream>
using namespace std ;

int ReadPositiveNumberAndDigit(string Message)
{
int Number = 0 ;
do
{
cout << Message << endl;
cin >> Number;
} while (Number <= 0 );
return Number;
}

int PrintFrecInNumber(int Number , int digit){
int Reminder = 0;
int Counter = 0;
while (Number > 0 ){
Reminder = Number % 10;
Number = Number / 10 ;
 if (digit == Reminder )
      Counter++;
}
return Counter;
}
int main(){
int Number = ReadPositiveNumberAndDigit("Please Enter The Number");
int digit =ReadPositiveNumberAndDigit("Please Enter The Digit ");

cout << "Digit " << digit << " is " << PrintFrecInNumber(Number , digit) << " Time(s)\n";
}