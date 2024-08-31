#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;

        string s;
        cin>>s;

        int b = n-k;

        vector<int> hash(26, 0);

        for(int i = 0; i < n; i++){
            hash[s[i]-'a']++;
        }

        int two_count = 0;

        for(int i = 0; i < 26; i++){
            two_count += hash[i]/2;
        }

        if(two_count >=(b/2)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}