#include <iostream>
#include <cstdlib>
using namespace std ;



void Print3NumberRandom(int From , int To ){
for (int i = 1 ; i <= 3 ; i++){
    
    cout << rand()% (To - From + 1) + From << endl;
}

}


int main(){
srand((unsigned) time(NULL));
Print3NumberRandom(20 , 50);
}
