#include <bits/stdc++.h>
using namespace std;
 
bool alreadyDesorted(vector<int>& arr, int n){
    int curr = arr[0];
 
    for(int i = 1; i < n; i++){
        if(curr > arr[i]){
            return true;
        }
 
        curr = arr[i];
    }
 
    return false;
}
 
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
 
        // check if already nor sorted
        if(alreadyDesorted(arr, n)){
            cout<<0<<endl;
        }
        else{
            int mn = INT_MAX;
 
            for(int i = 1; i < n; i++){
                int a = arr[i];
                int b = arr[i-1];
 
                int count = ((a-b)/2) + 1;
 
                mn = min(mn, count);
            }
            cout<<mn<<endl;
        }
 
    }
}