#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int zeros = 0, ones = 0;

        for(int i=0; i<s.size(); i++){
            if(s[i] == '0'){
                zeros++;
            }
            else{
                ones++;
            }
        }

        int val = min(ones, zeros);

        if(val%2 == 1){
            cout<<"DA"<<endl;
        }
        else{
            cout<<"NET"<<endl;
        }
    }
}