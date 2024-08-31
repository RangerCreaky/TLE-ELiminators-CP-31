#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
 
    int mn = INT_MAX;
 
    for(int i = 0; i < n; i++){
        int temp;
        cin>>temp;
        temp = abs(temp);
 
        mn = min(mn, temp);
    }
 
    cout<<mn<<endl;
}