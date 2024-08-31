#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
 
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
 
        int i = 0;
        int ans = 0;
        while(i < n){
            int count = 0;
            while(i < n && arr[i] == 0){
                count++;
                i++;
            }
            ans = max(ans, count);
            i++;
        }
        cout<<ans<<endl;
    }
}