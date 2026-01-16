
#include <iostream>
using namespace std;

int main() {

    int numbers[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = 10;


    cout << "Original array: ";
    for(int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;


    for(int i = 1; i < size; i++) {

        int current = numbers[i];


        int j = i - 1;


        while(j >= 0 && numbers[j] > current) {
            numbers[j + 1] = numbers[j];
            j--;
        }


        numbers[j + 1] = current;


        cout << "After pass " << i << ": ";
        for(int k = 0; k < size; k++) {
            cout << numbers[k] << " ";
        }
        cout << endl;
    }


    cout << "\nSorted array: ";
    for(int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
