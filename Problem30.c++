#include <iostream>
using namespace std ;

int ReadArrayLength(string Message)
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


void SumOf2Arrays (int arr [100] ,int arr2 [100] ,int arrSum [100] , int arrLength){

    for (int i = 0 ; i < arrLength ; i++){
        arrSum[i] = arr[i] + arr2[i] ;
    }
}



void PrintArray (int arr [100] , int arrLength){


for (int i = 0 ; i < arrLength ; i++){
cout << arr[i] << " " ;

}
cout << "\n" ;

}




int main (){
srand((unsigned) time(NULL));
int arr [100] , arr2 [100], arrSum[100];
int arrLength = ReadArrayLength("\nEnter number of elements");
FillArrayWithRandomNumbers(arr , arrLength);
FillArrayWithRandomNumbers(arr2 , arrLength);
cout << "Array 1 Elemets : " ;
PrintArray(arr ,arrLength);
cout << "\nArray 2 Elemets : " ;
PrintArray(arr2,arrLength);
SumOf2Arrays (arr , arr2 , arrSum , arrLength);
cout << "\nSum f Array1 and Array2 elemets : " ;
PrintArray(arrSum,arrLength);




return 0 ;

}
