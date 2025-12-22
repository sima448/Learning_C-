#include<iostream>
using namespace std;
int main(){
    /*
    int x= 8;
    int y = 3;
    cout << x%y << endl;//output: 2
    

    // a % b = a if (a < b) 
    int x= 8;
    int y = 13;
    cout << x%y << endl;//output: 8
    
    // a % b = 0 if (a is multiple of b)
    int x= 78;
    int y = 13;
    cout << x%y << endl;//output: 0

    
    // a % a = 0

    int x= 8;
    int y = 8;
    cout << x%y << endl;//output: 0
    

    // a %(-b) = a % b
    int x= 8;
    int y = -3;
    cout << x%y << endl;//output: 2
    

    // (-a) % b = - (a % b)

    int x= -8;
    int y = 3;
    cout << x%y << endl;//output: -2
    */


    // (-a) % (-b) = - (a % b)
    int x= -8;
    int y = -3;
    cout << x%y << endl;//output: -2

}


//some important points about modulus operator (%):
// a % b = a if (a < b) 
// a % b = 0 if (a is multiple of b)
// a % a = 0
// a %(-b) = a % b
// (-a) % b = - (a % b)
// (-a) % (-b) = - (a % b)