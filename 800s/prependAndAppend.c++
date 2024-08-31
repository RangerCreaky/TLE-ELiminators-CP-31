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
 
 
        int l = n-1;
        int i = 0;
        int count = 0;
        while((i < l) && ((s[i] == '1' && s[l] == '0') || (s[i] == '0' && s[l] == '1'))){
            i++;
            l--;
 
            n -= 2;
        }
 
        cout<<n<<endl;
 
 
    }
 
}