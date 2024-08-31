#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
 
    while(t--){
        long long n, k;
        cin>>n>>k;
 
        if(n%2 == 0){
            cout<<"Yes"<<endl;
            continue;
        }
 
        if(n%2 == 1){
            if(k%2 == 0){
                cout<<"No"<<endl;
                continue;
            }
            else{
                if(k <= n){
                    cout<<"Yes"<<endl;
                    continue;
                }
                else{
                    cout<<"No"<<endl;
                    continue;
                }
            }
        }
 
 
    }
}