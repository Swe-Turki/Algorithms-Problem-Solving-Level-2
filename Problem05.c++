#include <iostream>
using namespace std ;

// string ReadNumber(string Message){
// string Number ;
// cout << Message << endl;
// cin >> Number;
// return Number;
// }

// void NumberSeparation(string Number){
//     for (int i = Number.length() -1 ; i <Number.length() ; i--){
//          cout << Number[i] << endl;
//     }
// }

// int main(){
// NumberSeparation(ReadNumber("Please Enter a Number"));
// }


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

void PrintDigits(int Number)
{
int Remainder = 0;
while (Number > 0)
{
Remainder = Number % 10;
Number = Number / 10;
cout << Remainder << endl;
}
}

int main()
{
PrintDigits(ReadPositiveNumber("Please enter a positive number?"));
return 0;
}