#include <iostream>
using namespace std;

int main() {
    int n, x;
    cout << "Size & elements: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Find: ";
    cin >> x;
    for (int i = 0; i < n; i++) if (arr[i] == x) { cout << "Found at index " << i; return 0; }
    cout << "Not found";
    return 0;
}
