#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int mn = 0;
        int mx = 0;

        int count = 0;
        for(int i = 0; i < n; i++){
            char ch = s[i];

            if(ch == '>'){
                count = count + 1;
            }
            else{
                count = count - 1;
            }

            mn = min(mn, count);
            mx = max(mx, count);
        }

        
        int ans = 0;

        if(mn < 0) ans += abs(mn);
        if(mx > 0) ans += abs(mx);

        cout<<ans +1<<endl;
    }
}