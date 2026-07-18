#include <iostream>
using namespace std ;



void PrintWordsFromAAAtoZZZ(){

    for (int i = 65 ; i <= 90 ; i++){
       string Word = "";
        for (int j = 65 ; j <= 90 ; j++){
            
            for (int k = 65 ; k <= 90 ; k++){
                // cout << char (i) << char(j) << char(k) << endl ;
                Word = Word + char (i);
                   Word = Word + char(j); 
                   Word = Word + char(k);
                   cout << Word << endl;
                   Word = "";
            }
            
        }
    }
}


int main(){
PrintWordsFromAAAtoZZZ();  
return 0 ;
}