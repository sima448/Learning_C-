#include<iostream>
using namespace std;
int main(){
   int n;
   cout <<"Enter the number: ";
   cin >> n;
   //
   if(n> 99 and n< 1000){//(n> 99 && n< 1000)
    cout << "The number is three dight number" << endl;
   }
   else {
        cout << "The number is not three dight number" << endl;
    }
    
   

    //tack positve number which is divisible by 3 and 5
  int n;
   cout <<"Enter the number: ";
   cin >> n;
   //
   if(n%3 == 0 && n%5 == 0){
    cout << "The number is divisible by 3 and 5" << endl;
   }
   else {
        cout << "The number is not divisible by 3 and 5" << endl;
    }
    

    ////tack positve number which is divisible by 3 or 
   int n;
   cout <<"Enter the number: ";
   cin >> n;
   //
   if(n%3 == 0 or n%5 == 0){//(n%3 == 0 || n%5 == 0)
    cout << "The number is divisible by 3  or 5" << endl;
   }
   else {
        cout << "The number is not divisible by 3 or 5" << endl;
    }
    


    //tack three numbers input and tell if they can be the sides of triangle
   int a,b,c;
   cout <<"Enter the first side: ";
   cin >> a;
   cout <<"Enter the second side: ";
   cin >> b;
   cout <<"Enter the third side: ";
   cin >> c;
   if((a+b)>c && (b+c)>a && (c+a)>b){
    cout << "Valid triangle" << endl;
   }
   else {
        cout << "Not Valid triangle" << endl;
    }


}