#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int a, b, c;
        cin>>a>>b>>c;
 
        int kt = (c/2) + b;
        int anna = a + (c - (c/2));
 
        if(anna <= kt){
            cout<<"Second"<<endl;
        }
        else{
            cout<<"First"<<endl;
        }
    }
}