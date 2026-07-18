#include <iostream>
#include <cstdlib>
using namespace std ;

enum enCharType{ SmallLetters = 1 , CapitalLetter = 2 , SpecialCharacter = 3 , Digit = 4};

int RandomNumber(int From , int To ){

    
int randNum = rand()% (To - From + 1) + From ;

return randNum;
    
}


char GetRandomCharacter(enCharType CharType){
switch (CharType)
{
case enCharType::SmallLetters :
    {
return char (RandomNumber(97 , 122));
break;
    }

    case enCharType::CapitalLetter :
    {
return char (RandomNumber(65 , 90));
break;
    }
    
    case enCharType::SpecialCharacter :
    {
return char (RandomNumber(33 , 47));
break;
    }
    
    case enCharType::Digit :
    {
return char (RandomNumber(48 , 57));
break;
    }

default:
    break;
}
}    



int ReadPositiveNumber(string Message)
{
int Number = 0;
do
{
cout << Message;
cin >> Number;
} while (Number <= 0);
return Number;
}


string GenerateWord (enCharType CharType , int Lentgh ){
string Word;
for (int i = 1 ; i <= Lentgh ; i++){
    Word = Word + GetRandomCharacter(CharType);
}
return Word ;
} 



string GenerateKey (){

string Key = "";
Key = GenerateWord(enCharType::CapitalLetter , 4) + "-";
Key = Key + GenerateWord(enCharType::CapitalLetter , 4) + "-";
Key = Key + GenerateWord(enCharType::CapitalLetter , 4) + "-";
Key = Key + GenerateWord(enCharType::CapitalLetter , 4);

return Key ;
}
  


void SaveKeysInArray (string arr[100] , int arrLentgh){
    for (int i = 0 ; i < arrLentgh ; i++){
        arr[i] = GenerateKey();
    }
}

void PrintArray (string arr [100] , int arrLength){
    cout << "Array elements : \n";
    for (int i = 0 ; i < arrLength ; i++){
        cout << "Array["<< i << "] : " << arr[i] << endl;
        
    }
    cout << "\n" ;
    
    }

int main(){
srand((unsigned) time(NULL));
string arr [100] ;
int arrLength = ReadPositiveNumber("Please Enter How Many Keys to Generate \n ");
SaveKeysInArray(arr , arrLength);
PrintArray(arr , arrLength);


}
    