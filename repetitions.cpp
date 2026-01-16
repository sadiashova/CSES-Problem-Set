#include <bits/stdc++.h>
using namespace std;







int main()
{
    string s1;
    cin>>s1;
    int n=s1.size();
    // cout<<n<<endl;
    int count=1,ans=1;



    for(int i=1;i<n;i++){
        if(s1[i]==s1[i-1]){
            count++;
            ans=max(ans,count);
        }
        else{
            count=1;
        }
    }

    cout<<ans<<endl;
} 

