#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;

        vector<pair<int, int>> arr(n);
        for(int i=0; i<n; i++){
            int temp;
            cin>>temp;
            arr[i] = {temp, 0};
        }

        sort(arr.begin(), arr.end());

        arr[n-1].second = 1;

        for(int i = n-2; i >= 0; i--){
            int next = arr[i+1].first;

            int curr = arr[i].first + k;

            if(next <= curr){
                arr[i].second = arr[i+1].second+1;
            }
            else{
                arr[i].second = 1;
            }
        }
        int mx = 1;

        for(int i = 0; i < n; i++){
            mx = max(mx, arr[i].second);
        }

        cout<<n-mx<<endl;
    }
}