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

int main(){
srand((unsigned) time(NULL));
cout << GetRandomCharacter(enCharType::SmallLetters) << endl;
cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;
cout << GetRandomCharacter(enCharType::SpecialCharacter) << endl;
cout << GetRandomCharacter(enCharType::Digit) << endl;

}
    