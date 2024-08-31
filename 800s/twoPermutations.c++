#include <bits/stdc++.h>
using namespace std;
 
// between longest prefix and longest suffix, there should be at least 2 elements which would differ
// 1  2  3  5  4  6
// 1  2  5  3  4  6
 
// 1  2 -> longest prefix
// 4  6 -> longest suffix
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, a, b;
        cin>>n>>a>>b;
        if(a+b >= n-1){
            if(a == n && b == n){
                cout<<"Yes"<<endl; 
            }
            else{
                cout<<"No"<<endl;
            }
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
}