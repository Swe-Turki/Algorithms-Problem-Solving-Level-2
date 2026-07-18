#include <iostream>
#include <cmath>      
using namespace std;


int MyFloorNumber (float Number){

if (Number < 0)
return Number-1 ;

else
return Number;
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
 cout << "My Floor Result : " << MyFloorNumber(Number) << endl;
 cout << "C++ Round Result: " << floor(Number) << endl;

    return 0;  
}