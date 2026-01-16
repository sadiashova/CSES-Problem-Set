// HULK Problem

#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(i %2 == 1){
            cout << "I hate";
        }
        else{
            cout << "I love";
        }
        if(i == n){
            cout << " it";
        }
        else{
            cout << " that ";
        }
    }
    
}

// Trippi Troppi
#include <iostream>
using namespace std;
 
int main () {
    int t;
    cin >> t;
    while (t--) {
        string a, b, c;
        cin >> a >> b >> c;
        cout << a[0] << b[0] << c[0] << endl;
    }
    return 0;
}