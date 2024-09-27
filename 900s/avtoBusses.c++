#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        unsigned long long n;
        cin>>n;

        unsigned long long mn, mx;

        if(n/2 == 1){
            cout<<-1<<endl;
            continue;
        }

        // minimum
        if(n%6 == 0){
            mn = n/6;
        }
        else if(n%6 == 2){
            mn = (n-8)/6 + 2; 
        }
        else if(n%6 == 4){
            mn = (n-4)/6 + 1;
        }
        else if(n%4 == 0){
            mn = n/4;
        }
        else{
            cout<<-1<<endl;
            continue;
        }

        // maximum
        if(n%4 == 0){
            mx = n/4;
        }
        else if(n%4 == 2){
            mx = (n-6)/4 + 1;
        }
        else if(n%6 == 0){
            mx = n/6;
        }
        else{
            cout<<-1<<endl;
            continue;
        }

        cout<<mn<<" "<<mx<<endl;
    }
}