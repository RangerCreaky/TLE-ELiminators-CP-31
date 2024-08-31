#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
 
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        
        bool val = false;
 
        vector<int> hash(n);
        if(arr[n-1] == 2){
            hash[n-1] = 1;
        }
        else{
            hash[n-1] = 0;
        }
        for(int i = n-2; i>=0; i--){
            if(arr[i] == 2){
                hash[i] = hash[i+1]+1;
            }
            else{
                hash[i] = hash[i+1];
            }
        }
 
        int count = 0;
        for(int i = 0; i < n-1; i++){
            if(arr[i] == 2){
                count++;
            } 
 
            if(count == hash[i+1]){
                cout<<i+1<<endl;
                val = true;
                break;
            }
        }
 
        if(!val){
            cout<<-1<<endl;
            continue;
        }
    }
}