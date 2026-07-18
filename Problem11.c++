#include <iostream>
#include <cmath>
using namespace std ;

int ReadPositiveNumber(string Message)
{
int Number = 0 ;
do
{
cout << Message << endl;
cin >> Number;
} while (Number <= 0 );
return Number;
}

int ReversNumber(int Number){
int Reminder = 0 ;
int Number2 = 0 ;
while (Number > 0)
{
   Reminder = Number % 10 ;
    Number = Number / 10 ;
    Number2 = Number2 * 10 + Reminder ;
}

return Number2 ;


}
void PrintDecNumber(int Number){
int Reminder = 0 ;
int Number3 = ReversNumber(Number);
bool isNumberGreaterThanZero = Number > 0 ;
if (isNumberGreaterThanZero)
{
   Reminder = Number % 10 ;
   Number3 = Number3 %10;
   if (Reminder == Number3){
    cout << "Yes it is a Palindrome number\n";
   }
   else {
    cout << "No it is Not a Palindrome number\n";
   }
   
   
}

    }
    


int main(){
PrintDecNumber(ReadPositiveNumber("Please Enter a Number"));


return 0 ;
}
