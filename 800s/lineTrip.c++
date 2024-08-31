#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        vector<int> v(n);
        int mx_distance = 0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(i == 0){
                mx_distance = max(mx_distance, (v[i]-0));
            }
            else{
                mx_distance = max(mx_distance, (v[i]-v[i-1]));
            }
        }
 
        mx_distance = max(mx_distance, (x - v[n-1])*2);
        cout<<mx_distance<<endl;
    }
}