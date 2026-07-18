#include <iostream>
using namespace std ;

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

void PrintArray (int arr [100] , int arrLength){

 
for (int i = 0 ; i < arrLength ; i++){
    cout << arr[i] << " " ; 
    
}
cout << "\n" ;

}

int MaxNumberInArray (int arr [100] , int arrLength){
int MaxNumber = arr[0];  
for (int j = 0 ; j < arrLength ; j++){
    if (arr[j] > MaxNumber)
    MaxNumber = arr[j] ;
} 
return MaxNumber;
}

int main (){

int arr [100] , arrLength ;
srand((unsigned) time(NULL));
FillArrayWithRandomNumbers(arr , arrLength);
cout << "Array Elemets : " ;
PrintArray(arr , arrLength);

cout << "Max Number is : " << MaxNumberInArray(arr , arrLength) << endl;

return 0 ;

}