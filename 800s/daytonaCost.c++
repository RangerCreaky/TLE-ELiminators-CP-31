#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n, k;
        cin>>n>>k;
 
        bool ans = false;
        for(int i=0; i<n; i++){
            int temp;
            cin>>temp;
 
            if(temp == k){
                ans = true;
            }
 
        }
 
        if(ans){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}