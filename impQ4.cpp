#include<iostream>
using namespace std;
int main(){
    //Q. take the input percentage of a student and print the grade accoundin to marks
    //1. 81-100 very good
    //2. 61-80 good 
    //3. 41-60 avrage.
    //4. all fail 
    int n;
    cout<< "Enter the number: ";
    cin>>n;
    if(n>=81 && n<=100){
        cout<<"Very Good"<< endl;
    }
    else if(n>=61 && n<=80){
        cout<<"Good"<<endl;

    }
    else if(n>=41 && n<=60){
        cout<< "Avarage"<<endl;

    }
    else{
        cout <<"Fail"<<endl; 
    }
}