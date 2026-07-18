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

void ReadArray (int arr [100] , int& arrLength){

cout << "\nEnter number of elements \n";
cin >> arrLength;

cout << "\nEnter array elements \n";
for (int i = 0 ; i < arrLength ; i++){
    cout << "Element [" << i+1 << "] : " ;
    cin >> arr[i] ;
}
cout << endl ;

}

void PrintArray (int arr [100] , int arrLength){

    for (int i = 0 ; i < arrLength ; i++){
        cout << arr[i] << " " ; 
        
    }
    cout << "\n" ;
}

int TimesRepeated (int Number , int arr [100] , int arrLength ){

int Counter = 0 ;

for (int i = 0 ; i < arrLength ; i ++){
    if (Number == arr[i])
    Counter++;
}
return Counter ;
}




int main (){

int arr [100] , arrLength , NumberToCheck;

ReadArray(arr , arrLength);

NumberToCheck = ReadPositiveNumber("Enter the Number you want to check : ");

cout << "\n Original array : " ;
PrintArray(arr , arrLength);

cout << "\n Number " << NumberToCheck ;
cout << " is repeated " << TimesRepeated(NumberToCheck , arr , arrLength) << " time(s)\n";

return 0 ;

}