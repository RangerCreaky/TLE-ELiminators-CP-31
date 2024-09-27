#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        long long first5 = -1;
        long long first0 = -1;
        long long second2 = -1;
        long long second7 = -1;
        long long second0 = -1;
        long long second5 = -1;

        long long i = 1;
        while(n > 0){
            long long num = n%10;
            if(num == 0){
                if(first0 == -1) first0 = i;
                else if(first0 != -1 && second0 == -1) second0 = i;
            }
            if(num == 5){
                if(first5 == -1) first5 = i;
                if(first0 != -1 && second5 == -1) second5 = i;
            }
            if(num == 7){
                if(first5 != -1 && second7 == -1) second7 = i;
            }
            if(num == 2){
                if(first5 != -1 && second2 == -1) second2 = i;
            }
            n /= 10;
            i++;
        }

        long long fifty = INT_MAX, twenty5 = INT_MAX, hundred = INT_MAX;
        long long seventy5 = INT_MAX;

        // fifty
        if(first0  != -1 && second5 != -1){
            fifty = first0 - 1 + (second5 - first0 - 1);
        }

        // twenty5
        if(first5 != -1 && second2 != -1){
            twenty5 = first5-1 + (second2 - first5 -1);
        }

        // hundred
        if(first0 != -1 && second0 != -1){
            hundred = first0 - 1 + (second0 - first0 - 1);
        }

        // seventy5
        if(first5 != -1 && second7 != -1){
            seventy5 = first5 - 1 + (second7 - first5 -1);
        }
        
        // cout<<first0<<" "<<second5<<endl;
        // cout<<first0<<" "<<second0<<endl;
        // cout<<first5<<" "<<second7<<endl;
        // cout<<first5<<" "<<second2<<endl;
        // cout<<fifty<<" "<<seventy5<<" "<<hundred<<" "<<twenty5<<endl;

        cout<<min({fifty, seventy5, hundred, twenty5})<<endl;
    }
}