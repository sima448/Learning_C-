#include <iostream>
using namespace std;
 int main() {
    //input lena
    int arr[10];
    cout << "Enter 10 number is:\n";
     for(int i = 0; i < 10; i++) {
     cin >> arr[i];
    }
    int max = arr[0];
    for (int i = 1; i < 10; i++) {
         if (arr[i] > max) {
            max = arr[i];
         }
    }
    cout << "Maximum number is: " << max <<endl;
    return 0;
}