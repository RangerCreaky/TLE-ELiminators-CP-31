#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    vector<int> arr(n);
    int k = 0;
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++){
        int x;cin>>x;
        mp[x]++;
        k = max(k, mp[x]);
    }

    if(k == n) {
        cout<<0<<endl;
        return;
    }

    int l = n-k;
    int count = 0;
    while(k < n){
        count += 1;
        if(n-k >= k){
            count += k;
            k *= 2;
        }
        else{
            count += n-k;
            k = n;
        }
    }
    cout<<count<<endl;

}

int main(){
    int t;
    cin>>t;

    while(t--) solve();
}