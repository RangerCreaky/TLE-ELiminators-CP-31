#include <bits/stdc++.h>
using namespace std;

int main(){
    // If there is some interval l - r of size(r-l+1 = x) then which divides n 
    // then 1 to x has to divide x
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;
        
        bool val = false;
        for(long long i = 1; i <= n; i++){
            if(n%i != 0){
                cout<<i-1<<endl;
                val = true;
                break;
            }
        }
        
        if(!val){
            cout<<n<<endl;
        }
    }
}