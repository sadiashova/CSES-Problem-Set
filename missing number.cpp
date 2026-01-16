#include <bits/stdc++.h>
using namespace std;
int ara[500000],Count[500000];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        // scanf("%d",&ara[i]); //C
        cin>>ara[i]; //c++
    }
    int x=0,y=0;
    for(int i=1;i<n;i++){
        x=(x^ara[i]);
    }
    for(int i=1;i<=n;i++){
        y=(y^i);
    }
    cout<<(x^y)<<endl;
} 