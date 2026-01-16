#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long ans=0;
    int MAX=0;
    cin>>MAX;


    for(int i=1;i<n;i++){
        int value;
        cin>>value;

        if(value<MAX){
            ans=(ans+(MAX-value));
        }
        else{
            MAX=max(MAX,value);
        }
    }

    cout<<ans<<endl;
} 