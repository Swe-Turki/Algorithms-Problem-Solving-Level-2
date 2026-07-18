#include <iostream>
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

void PrintNumbers(int Number){
    for (int i = Number ; Number > 0 ; i--){
        for (int j = Number ; j > 0 ; j-- ){
            cout << Number;
        }
        cout << endl;
        Number--;
    }
}

int main(){
PrintNumbers(ReadPositiveNumber("Please Enter a Number"));
}