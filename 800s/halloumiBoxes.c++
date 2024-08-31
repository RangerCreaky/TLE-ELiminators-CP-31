#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int> arr(n);
        bool sorted = true;
        for(int i=0; i < n; i++){
            cin>>arr[i];
            if(i > 0) sorted = sorted & (arr[i] >= arr[i-1]);
        }
 
        if(sorted){
            cout<<"YES"<<endl;
        }
        else{
            if (k > 1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }  
    }
}