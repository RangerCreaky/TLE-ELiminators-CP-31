#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int, int> mp;
 
        for(int i=0; i<n; i++){
            int temp;
            cin>>temp;
 
            mp[temp]++;
        }
 
        if(n == 2){
            cout<<"Yes"<<endl;
            continue;
        }
 
        if(mp.size() > 2){
            cout<<"No"<<endl;
            continue;
        }
 
        int c1 = 0, c2 = 0;
        int i = 0;
        for(auto it:mp){
            if(i == 0){
                c1 = it.second;
                i++;
            }
            else{
                c2 = it.second;
            }
        }
 
        if(mp.size() == 1){
            if(c2 == 0 && c1 == n){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
            continue;
        }
        if(n%2 == 0){
            if(c1 == c2){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        else{
            if(c2 == c1+1 || c1 == c2+1){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
 
    }
}