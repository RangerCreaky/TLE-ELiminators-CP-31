#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n, k;
        cin>>n>>k;

        vector<long long> v(n*k);

        for(long long i = 0; i < n*k; i++){
            cin>>v[i];
        }


        sort(v.begin(), v.end());

        long long i = n*k;

        long long temp = n/2;
        
        long long sum = 0;
        while(k--){
            i -= (temp);
            sum += v[i-1];

            i--;
        }

        cout<<sum<<endl;
    }
}