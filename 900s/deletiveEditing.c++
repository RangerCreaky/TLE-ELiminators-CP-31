#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s, t;
    cin>>s>>t;

    unordered_map<char, int> mp;

    for(int i = 0; i < t.size(); i++){
        mp[t[i]]++;
    }

    string new_s = "";
    for(int i = 0; i < s.size(); i++){
        if(mp.find(s[i]) != mp.end()){
            new_s += s[i];
        }
    }
    
    unordered_map<char, int> mp_s;

    for(int i = 0; i < new_s.size(); i++){
        mp_s[new_s[i]]++;
    }

    // if all elements of t are not there in s in number then no
    for(auto it:mp){
        char ch = it.first;
        int count = it.second;
        if(mp_s.find(ch) == mp_s.end()){
            cout<<"No"<<endl;
            return;
        }
        else if(mp_s[ch] < count){
            cout<<"No"<<endl;
            return;
        }

        mp_s[ch] -= count;
    }
    
    // now remove all the

    string finals = "";
    for(int i=0; i<new_s.size(); i++){
        char ch = new_s[i];
        if(mp_s[ch] == 0) finals += ch;
        else mp_s[ch]--;
    }

    if(t == finals){
        cout<<"Yes"<<endl;
    } 
    else{
        cout<<"No"<<endl;
    }
}

int main(){
    int t;
    cin>>t;

    while(t--){
        solve();
    }
}