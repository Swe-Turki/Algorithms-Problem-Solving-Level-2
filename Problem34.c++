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

int RandomNumber(int From , int To ){

    
int randNum = rand()% (To - From + 1) + From ;

return randNum;

}
void FillArrayWithRandomNumbers (int arr [100] , int arrLength){

for (int i = 0 ; i < arrLength ; i++){
arr[i] = RandomNumber (1 , 100);
}
cout << endl ;

}

void PrintArray (int arr [100] , int arrLength){
cout << "Array elements : \n";
for (int i = 0 ; i < arrLength ; i++){
    cout << arr[i] << " ";
    
}
cout << "\n" ;

}

bool NumberOrder (int arr [100] , int arrLength , int Number){
    for (int i = 0 ; i < arrLength ; i++){
        if (arr[i] == Number){
            cout << "The Number found at Order : " << i + 1 << endl;
            return true ;
        }

    }
    return false ; 
}

bool NumberPosition (int arr [100] , int arrLength , int Number){

    for (int i = 0 ; i < arrLength ; i++){
        if (arr[i] == Number){
            cout << "The Number found at Position : " << i << endl;
            cout << NumberOrder(arr , arrLength , Number) << endl;
            return true ;
        }

    }
    cout << "The Number is Not Found :-(\n";
    return false ;
}


int main (){
srand((unsigned) time(NULL));
int arr [100] ;
int Number ;
int arrLength = ReadPositiveNumber("\nEnter number of elements");
FillArrayWithRandomNumbers(arr , arrLength);
PrintArray(arr , arrLength);
Number = ReadPositiveNumber ("\nPlease enter a number to search for?");
cout << "Number you are looking for is : " << Number << endl ;
NumberPosition(arr , arrLength , Number);









return 0 ;

}