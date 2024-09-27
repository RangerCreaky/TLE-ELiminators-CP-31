#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        long long power3 = 0;
        long long power2 = 0;

        bool invalid = false;
        while(n > 1){
            if(n%3 == 0){
                power3++;
                n /= 3;
            }
            else if(n%2 == 0){
                power2++;
                n /= 2;
            }
            else{
                if(n != 0 || n != 1){
                    invalid = true;
                    break;
                }
            }
        }

        if(invalid){
            cout<<-1<<endl;
            continue;
        }

        if(power2 > power3){
            cout<<-1<<endl;
            continue;
        }

        cout<<(power3-power2)+power3<<endl;
    }
}