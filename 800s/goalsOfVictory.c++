#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
 
        int count = 0;
 
        for(int i = 0; i < n-1; i++){
            int temp;
            cin>>temp;
 
            count+=temp;
        }
 
        cout<<(-1*count)<<endl;
    }
}