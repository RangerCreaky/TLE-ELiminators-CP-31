#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long n,k,x;
        cin>>n>>k>>x;
        
        int val = n-k;

        long long low = 1ll*k*(k+1)/2;
        long long high = 1ll*n*(n+1)/2 - 1ll*val*(val+1)/2;

        if(x >= low && x <= high){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}