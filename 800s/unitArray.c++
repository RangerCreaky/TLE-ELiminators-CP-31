#include <bits/stdc++.h>
using namespace std;
 
int findAns(int negs, int pos){
    if(negs <= pos) return 0;
 
    int count = negs - pos;
 
    if(count%2 == 0) return count/2;
    return (count/2) + 1; 
 
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
 
        int l = n;
 
        int negs = 0;
        int pos = 0;
 
        while(l--){
            int temp;
            cin>>temp;
            if(temp < 0) negs++;
            if(temp > 0) pos++;
        }
 
        if(negs <= pos){
            if(negs %2 == 0){
                cout<<0<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
 
        else{
            int ops = negs - (n/2);
 
            if((n/2) % 2 == 0){
                cout<<ops<<endl;
            }
            else{
                cout<<ops+1<<endl;
            }
        }
    }
}