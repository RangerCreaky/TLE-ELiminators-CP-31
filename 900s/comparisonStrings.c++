#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int i = 1;
        int mx = 1;
        int count = 1;
        char ch = s[0];
        while(i < n){
            while(i < n && s[i] == ch){
                count++;
                i++;
            }

            mx = max(count, mx);
            count = 0;

            if(i < n) ch = s[i];
        }

        cout<<mx+1<<endl;

    }
}