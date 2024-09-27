#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int n = s.length();
        int ab = 0;
        int ba = 0;

        for(int i = 1; i < s.length(); i++){
            if(s[i] == 'a' && s[i-1] == 'b') ba++;

            if(s[i] == 'b' && s[i-1] == 'a') ab++;
        }

        if(ba > ab){
            s[n-1] = 'b';
        }
        else if(ab > ba){
            s[n-1] = 'a';
        }

        cout<<s<<endl;
    }
}