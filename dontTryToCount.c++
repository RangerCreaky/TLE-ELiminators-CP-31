#include <bits/stdc++.h>
using namespace std;
 
bool isSubstring(string x, string s){
    if(x.size() < s.size()) return false;
    
    int n = s.size();
    for(int i = 0; i < x.size() && (x.size()-i)>=n; i++){
        string r = x.substr(i, s.size());
        if(r == s) return true;
    }
    return false;
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
 
        string x, s;
        cin>>x;
        cin>>s;
        
        bool found = false;
 
        for(int i = 0; i <= 5; i++){
            // if s is a substring of x
            if(isSubstring(x, s)){
                cout<<i<<endl;
                found = true;
                break;
            }
            
            x = x+x;
        }
        
        if(!found){
            cout<<-1<<endl;
        }
    }
}