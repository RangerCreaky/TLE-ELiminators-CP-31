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

        int count = 0;
        int i = 0;
        while(i < n){
            bool found = false;
            while(i < n && arr[i] != 0){
                found = true;
                i++;
            }

            if(found) count++;
            i++;
        }

        if(count >= 2)cout<<2<<endl;
        else cout<<count<<endl;
    }
}