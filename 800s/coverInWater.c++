#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
 
        // find max consecutive 3 characters
        int count = 0;
        int maxCons = 0;
 
        int cons = 0;
        for(int i = 0 ; i < n ; i++){
            if(str[i] == '#'){
                cons = 0;
            }
            else if(str[i] == '.'){
                count++;
                cons++;
                maxCons = max(maxCons, cons);
            }
        }
 
        if(maxCons >= 3){
            cout<<2<<endl;
        }
        else{
            cout<<count<<endl;
        }
    }
}