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

void CopyArray (int arr [100] , int arr2 [100]  , int arrLength){

for (int j = 0 ; j < arrLength ; j++){
    arr2[j] = arr[j];
    }
    cout << endl ;

}

void PrintArray (int arr [100] , int arrLength){

 
for (int i = 0 ; i < arrLength ; i++){
    cout << arr[i] << " " ;
    
}
cout << "\n" ;

}




int main (){

int arr [100] , arr2 [100], arrLength ;
srand((unsigned) time(NULL));
FillArrayWithRandomNumbers(arr , arrLength);
CopyArray(arr , arr2 , arrLength);
cout << "Array 1 Elemets : " ;
PrintArray(arr ,arrLength);
cout << "\nArray 2 Elemets : " ;
PrintArray(arr2,arrLength);




return 0 ;

}