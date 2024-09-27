#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        long long one = 0, zero = 0;
        for(long long i=0; i<n; i++){
            long long temp;
            cin>>temp;
            if(temp == 1) one++;
            if(temp == 0) zero++;
        }
        
        long long val = pow(2, zero);

        cout<<one*val<<endl;
    }
}