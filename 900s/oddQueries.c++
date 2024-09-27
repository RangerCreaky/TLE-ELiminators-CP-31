#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, q;
        cin>>n>>q;

        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        for(int i = 1; i < n; i++){
            arr[i] = arr[i-1] + arr[i];
        }

        while(q--){
            int l, r, k;
            cin>>l>>r>>k;
            
            l--;r--;
            
            int sum = 0;

            if(l > 0){
                sum += arr[l-1];
            }
            
            sum += arr[n-1] - arr[r];

            sum += (l-r+1)*k;

            if(sum%2 == 0){
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            } 
        }
    }
}