#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        if(n%2 == 1){
            cout<<"Yes"<<endl;
            continue;
        }


        bool found = false;
        while(n > 1){
            if(n%2 == 1){
                found = true;
                cout<<"Yes"<<endl;
                break;
            }

            n/=2;

        }

        if(!found){
            cout<<"No"<<endl;
        }
    }
}