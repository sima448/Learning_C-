#include <iostream>
using namespace std;
int main() {
    int arr[10];
    cout << "Enters 10 numbers: ";
    for (int i =0; i < 10; i++){
      cin >> arr[i];
    }
    int sum = 0;
    for (int i = 1; i < 10; i++){
        sum = sum + arr[i];
    }
    //output
    cout << "Total sum is: " << sum << endl;
    return 0;



}