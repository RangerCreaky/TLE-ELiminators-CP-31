#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
 
        int temp = n;
        int len = 0;
        // The wrapped logic can be highly improved using bitwise operators
        // =======================
        while(temp > 0){
            len++;
            temp /= 10;
        }
 
        int divisor = pow(10, len-1);
 
        int remainder = n % divisor;
 
        int val = n - remainder;
 
        int count = 0;
 
        if(val > 9){
            count += 9;
        }
        else if(val > 0 && val < 9){
            count += (val / divisor);
            cout<<count<<endl;
            continue;
        }
        
        if(val > 99){
            count += 9;
        }
        else{
            count += (val/divisor);
            cout<<count<<endl;
            continue;
        }
 
        if(val > 999){
            count += 9;
        }
        else{
            count += (val/divisor);
            cout<<count<<endl;
            continue;
        }
 
        if(val > 9999){
            count += 9;
        }
        else{
            count += (val/divisor);
            cout<<count<<endl;
            continue;
        }
 
        if(val > 99999){
            count += 9;
        }
        else{
            count += (val/divisor);
            cout<<count<<endl;
            continue;
        }
        
        count += (val/divisor);
        
        cout<<count<<endl;
    }
}