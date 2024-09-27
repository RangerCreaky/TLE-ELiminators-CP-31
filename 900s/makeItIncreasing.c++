#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int count = 0;
    for(int i = n-1; i > 0; i--){
        if(arr[i] > arr[i-1]) continue;

        if(arr[i] == 0){
            cout<<-1<<endl;
            return;
        }

        while(arr[i-1] > 0 && arr[i] <= arr[i-1]){
            arr[i-1] /= 2;
            count++;
        }
    }

    cout<<count<<endl;
        
}
int main(){
    int t;
    cin>>t;

    while(t--){
        solve();
    }
}