#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;

    while(t--){
        long long n, x;
        cin>>n>>x;

        vector<long long> v(n);

        for(long long i=0; i<n; i++){
            cin>>v[i];
        }

        long long a = 0, b = 0, c = 0;

        for(long long i=0; i<n; i++){
            if(v[i]%x == 0){
                b += v[i]/x;
            }
            else{
                b += (v[i]/x)+1;
            }
        }


        for(long long i=0; i<n; i++){
            c+= v[i];
        }

        if(c%x == 0){
            a = c/x;
        }
        else{
            a = (c/x)+1;
        }

        long long mx = max(a, b);
        long long mn = min(a, b);

        cout<<mn<<" "<<mx<<endl;
        
    }
}