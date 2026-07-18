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

void Swap(int& A , int& B){
int Temp ;
Temp = A ;
A = B ;
B = Temp ;
}

int RandomNumber(int From , int To ){


int randNum = rand()% (To - From + 1) + From ;

return randNum;

}

void FillArray(int arr [100] , int arrLength){

for (int i = 0 ; i < arrLength ; i++){
arr[i] = i + 1 ;
}
cout << endl ;

}



void ShuffelArray(int arr [100] , int arrLength){
int Number ;
for (int i = 0 ; i < arrLength ; i++){
 
    Swap (arr[RandomNumber(1 , arrLength) - 1] , arr[RandomNumber(1 , arrLength) - 1] );

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
int arr [100] ;
int arrLength = ReadArrayLength("\nEnter number of elements");
FillArray(arr , arrLength);
cout << "Array Elemets before shuffle : " ;
PrintArray(arr ,arrLength);
ShuffelArray(arr , arrLength);
cout << "\nArray  Elemets After shuffle : " ;
PrintArray(arr,arrLength);

return 0 ;

}