#include <iostream>
using namespace std;


// int ReadPositiveNumber(string Message){
// int Number ;

// do{
// cout << Message << endl;
// cin >> Number;
// }while(Number <=0);

// return Number;
// }

// void PrintPerfectNumber(int Number){
// cout << "The Number You put it is " << Number << "  are\n";
//   int sum = 0;
// for (int i = 1 ; i < Number ; i++){
//     if (Number % i == 0)
//      sum+=i;
// }
// if (sum == Number)
// cout << "it is perft Number";
// else 
// cout << "it is not perft Number";
// }
//------------------------------------------------


int ReadPositiveNumber(string Message){
int Number ;

do{
cout << Message << endl;
cin >> Number;
}while(Number <=0);

return Number;
}

bool isPerfectNumber(int Number){
  int sum = 0;
for (int i = 1 ; i < Number ; i++){
    if (Number % i == 0)
     sum+=i;
}

return Number==sum;
}

void PrintPerfectNumberFrom1ToN(int Number){
  for(int i = 1 ; i<=Number ; i++){
    if (isPerfectNumber(i))
    cout << i << endl;
  }

}


int main (){
// PrintPerfectNumber(ReadPositiveNumber("Please ENter a Number"));
PrintPerfectNumberFrom1ToN(ReadPositiveNumber("Please Enter a Number"));
}