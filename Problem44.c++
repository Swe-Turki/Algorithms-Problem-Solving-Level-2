#include <iostream>   
using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum; 
}


void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;  

    
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(-100, 100);
}

void PrintArray(int arr[100], int arrLength)
{
  
   
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
         cout << "\n";  
}

void CountPositiveNumbersInArray (int arr[100] , int arrLength){
    int Count = 0 ;
    for (int i = 0 ; i < arrLength ; i++){
        if (arr[i] >= 0)
        Count++ ;
    }

     cout << "\nPositive Numbers count is : " << Count ; 


}

int main (){
srand((unsigned)time(NULL));
int arr [100];
int arrLength = 0; 

FillArrayWithRandomNumbers(arr , arrLength);
PrintArray(arr , arrLength);
CountPositiveNumbersInArray(arr , arrLength);


}