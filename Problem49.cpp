#include <iostream>
#include <cmath>      
using namespace std;

float GetFractionPart(float Number)
{
    
    return Number - int(Number);
}
int MyCeilNumber (float Number){

    if (abs(GetFractionPart(Number)) > 0){
          if (Number > 0)
            return int(Number) + 1;
        else 
            return int(Number);
    }
     
    else 
       return Number ;       
}
float ReadNumber()
{
    float Number;  
    
    cout << "Please enter a float number? ";
    cin >> Number;  
    return Number;  
}

int main()
{
 float Number = ReadNumber();
 cout << "My Floor Result : " << MyCeilNumber(Number) << endl;
 cout << "C++ Round Result: " << ceil(Number) << endl;

    return 0;  
}