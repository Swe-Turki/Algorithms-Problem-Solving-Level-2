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

int DigitAccount(int Number){
int Remainder = 0;
int sum = 0;
while (Number > 0)
{
Remainder = Number % 10;
Number = Number / 10;
sum+=Remainder;
}
return sum;
}

void PrintDigits(int Number)
{
cout << "The sum of Numbers is : \n";
cout << DigitAccount(Number);
}

int main()
{
PrintDigits(ReadPositiveNumber("Please enter a positive number?"));
return 0;
}