#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int val = -1;
        for(int i = 0; i < n; i++){
            int temp;
            cin>>temp;
            if(val == -1) val = temp;
            else val = val & temp;
        }

        cout<<val<<endl;
    }
}