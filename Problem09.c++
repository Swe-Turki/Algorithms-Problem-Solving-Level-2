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

int FrecInNumber(int Number , int digit){
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


void PrintAllDigits(int Number){
 cout << endl;
 for (int i = 0 ; i < 10 ; i++){
    short DigitFreq = 0 ;
    DigitFreq = FrecInNumber(Number,i);
    if (DigitFreq > 0){
        cout << "Digit " << i << " Frequencey is " << DigitFreq << " Time(s).\n";
    }
 }
}


int main(){
int Number = ReadPositiveNumberAndDigit("Please Enter The Number");
PrintAllDigits(Number);

return 0 ;
}
