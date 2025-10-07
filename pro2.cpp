#include<iostream>
using namespace std;

int main(){
    int arr[10];
    int target;
    cout << "Enter 10 number:\n";
    // 10 numbers input 
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    //target number 
    cout << "what number are you looking for?";
    cin >> target;
    // linear search
    bool found = false;
    int position = -1;


    for (int i = 0; i < 10; i++){
        if (arr[i] == target) {

            found = true;
            position = i;
            break;
        }

    }
    //output
    if(found) {
    cout << "Number " << target << "found at index: " << position <<endl;
    } else {
        cout << "Number " << target << "not found in array.\n";

    }
    
    return 0;
}
