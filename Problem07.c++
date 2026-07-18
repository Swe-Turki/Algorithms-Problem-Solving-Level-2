#include <iostream>
using namespace std ;

int ReadPositiveNumber(string Message)
{
int Number = 0;
do
{
cout << Message << endl;
cin >> Number;
} while (Number <= 0);
return Number;
}

void PrintReversNumber(int Number){
cout << "Revers is : \n";
int Reminder = 0;
while (Number > 0 ){
 
Reminder = Number % 10;
Number = Number / 10 ;
cout << Reminder;
}
}
int main(){

PrintReversNumber(ReadPositiveNumber("Please Enter Number"));
}