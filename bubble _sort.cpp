#include <iostream>
using namespace std;
int main() {
    int arr[10];
    cout << "Enter 10 numbers separated by space:\n";
    for(int i =0; i < 10; i++) {
    cin >> arr[i];
}
//bubble sort
for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9 - i; j++) {
    if (arr[j] > arr[j + 1]) {
        //swap the number
    int temp = arr[j];
    arr[j] = arr[j + 1];
    arr[j + 1] = temp;
    }  
  }

}
//display sorted array
cout << "sorted numbers: ";
for (int i = 0; i < 10; i++) {
    cout << arr[i] << " ";
}
return 0;
}

// input hm space ke sath lenge 