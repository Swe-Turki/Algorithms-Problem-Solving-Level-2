#include <iostream>
using namespace std ;

string Read3LetterPassword(string Message)
{
string Password = "" ;

cout << Message << endl;
cin >> Password;

return Password;
}

bool GuessPassword(string OriginalPassword){
int Counter = 0 ;
string Word = "";
   
        for (int i = 65 ; i <= 90 ; i++){
        
            for (int j = 65 ; j <= 90 ; j++){
                
                for (int k = 65 ; k <= 90 ; k++){
                    Counter++;
                   Word = Word + char (i);
                   Word = Word + char(j); 
                   Word = Word + char(k);
                   cout << "Trial [" << Counter << "] : " << Word << endl;
                   
                    if (Word == OriginalPassword){
                    cout << "Password is " << OriginalPassword << " Found After " << Counter << " Trial(s)\n";
                    return true;
                    }
                    Word = "";
                   } 
                   
                }
                
            }
            
return false ;
                            
            }
            
        
int main(){
GuessPassword(Read3LetterPassword("Please Enter 3 Letters Passowrd"));  
}