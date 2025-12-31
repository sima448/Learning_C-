#include<iostream>
using namespace std;
int main(){
    //Q. given a point (x,y) write a program to find out if it lies in the 1st Quadrant, 2nd Quadrant, 3rd Quadrant, 4th Quadrant on the x-axis, y-axis or the origin, viz.(0,0)
    int x,y;
    cout<< "Enter the value of x: ";
    cin>>x;
    cout<< "Enter the value of y: ";
    cin>>y;
    if(x==0 && y==0){
        cout<<"point lie on Origin"<<endl;
    }
    else if(x>0 && y>0){
        cout<<"1st Quadrant"<<endl;
    }
    else if(x<0 && y>0){
        cout<<"2st Quadrant"<<endl;
    }
    else if(x<0 && y<0){
        cout<<"3st Quadrant"<<endl;
    }
    else if(x>0 && y<0){
        cout<<"4st Quadrant"<<endl;
    }
    else if(x == 0){
        cout<<"point lie on y-axis"<<endl;
    }
    else if(y== 0){
        cout<<"point lie on x- axis"<<endl;
    }
    else {
        cout<<"Invilid"<<endl;
    }

}