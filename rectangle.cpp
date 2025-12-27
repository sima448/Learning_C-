#include<iostream>
using namespace std;
int main(){
    int l, b;
    cout<< "Enter length of ractangle:";
    cin>>l;
    cout << "Enter the breadth of ractangle: ";
    cin >> b;
    int area = l * b;
    cout << "Area of rectangle is: " << area << endl;
    int perimeter = 2 * (l + b) ;
    cout <<"Perimeter of rectangle is: " << perimeter << endl;
    
}