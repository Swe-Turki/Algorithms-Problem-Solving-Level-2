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

void PrintInvertedPattern (int Number){
   cout << endl;
  for (int i = 1 ; i <= Number ; i++ ){
          
          for (int j = 1 ; j <= i ; j++){
            cout << i ;
          }
          cout << endl;
        
    }
}

int main (){
PrintInvertedPattern(ReadPositiveNumber("Put a Number"));  
}