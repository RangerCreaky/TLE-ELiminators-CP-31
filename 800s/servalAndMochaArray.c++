#include <bits/stdc++.h>
using namespace std;
int main(){
    // learning: If there are 2 numbers a and b. and say gdc(a, b) is x
    // Then if you add a thrid number c (c can be any positive integer)
    // Say gcd(a, b, c) is y
    // Then x is always greater than or equal to y
    // addition of a number to the list will either reduce the gcd or keep it same
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
 
        vector<int> arr(n);
 
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
 
        bool val = false;
 
        for(int i = 0 ; i < n ; i++){
            for(int j = i+1; j < n; j++){
                int gc = __gcd(arr[i], arr[j]);
                if(gc <= 2){
                    cout<<"Yes"<<endl;
                    val = true;
                    break;
                }
            }
            if(val){
                break;
            }
        }
 
        if(!val){
            cout<<"No"<<endl;
            continue;
        }
    }
}