#include <iostream>
#include <cmath>      
using namespace std;

int MySqrtNumber (int Number){
    // int SqrtNumber = 0 ;
    // for (int i = 1 ; i < Number ; i++){
    //      SqrtNumber  = i * i ;
    //     if (SqrtNumber == Number)
    //     return SqrtNumber ;
    // }      
    return pow (Number , 0.5);
}
int ReadNumber()
{
    int Number;  
    
    cout << "Please enter a number? ";
    cin >> Number;  
    return Number;  
}

int main()
{
 int Number = ReadNumber();
 cout << "My Sqrt Result : " << MySqrtNumber(Number) << endl;
 cout << "C++ Sqrt Result: " << sqrt(Number) << endl;


    return 0;  
}