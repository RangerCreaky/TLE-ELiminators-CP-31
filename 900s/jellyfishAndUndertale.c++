#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, n;
        cin>>a>>b>>n;

        vector<int> arr(n);

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        long long ans = b;

        for(auto x:arr){
            ans += min(1ll*x, 1ll*(a-1));
        }

        cout<<ans<<endl;
    }
}