#include <iostream>
#include <cmath>
using namespace std ;
enum enPrimeOrNotPrime {PrimeNumber = 1 , NotPrime = 2 };

enPrimeOrNotPrime isPrimeNumber(int Number){
int M = sqrt(Number);
for (int i = 2 ; i<= M ; i++){
if (Number % i == 0)
return enPrimeOrNotPrime::NotPrime ;
}
return enPrimeOrNotPrime::PrimeNumber;
}


int RandomNumber(int From , int To ){

    
int randNum = rand()% (To - From + 1) + From ;

return randNum;

}
void FillArrayWithRandomNumbers (int arr [100] , int& arrLength){

cout << "\nEnter number of elements \n";
cin >> arrLength;

for (int i = 0 ; i < arrLength ; i++){
arr[i] = RandomNumber (1 , 100);
}
cout << endl ;

}





void CopyOnlyPrimeNumbers (int arr [100] , int arr2 [100]  , int arrLength ,int& arr2Length){

int Counter = 0 ;

for (int i = 0 ; i < arrLength ; i++){
if (isPrimeNumber(arr[i]) == enPrimeOrNotPrime::PrimeNumber){
    arr2[Counter] = arr[i];
    Counter++;
}
}
arr2Length = Counter;
}

void PrintArray (int arr [100] , int arrLength){


for (int i = 0 ; i < arrLength ; i++){
cout << arr[i] << " " ;

}
cout << "\n" ;

}




int main (){
srand((unsigned) time(NULL));
int arr [100] , arrLength ;
FillArrayWithRandomNumbers(arr , arrLength);
int arr2 [100],arr2Length = 0;
CopyOnlyPrimeNumbers(arr , arr2 , arrLength , arr2Length);
cout << "Array 1 Elemets : " ;
PrintArray(arr ,arrLength);
cout << "\nArray 2 Elemets : " ;
PrintArray(arr2,arr2Length);




return 0 ;

}
