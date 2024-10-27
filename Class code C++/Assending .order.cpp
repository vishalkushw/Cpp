#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 4, 3, 5, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array:\n";
    for (int i=0; i < size; i++) {
        cout << arr[i] << "\n";
    }

    int tmp;
    cout << "\nSorted array:\n";

    for (int i=0; i<size; i++) {
        for (int j=i+1; j < size; j++) {
            if (arr[i]>arr[j]) {
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << "\n";
    }
}
