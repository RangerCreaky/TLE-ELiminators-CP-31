#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
 
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
 
        int mx = *max_element(arr.begin(), arr.end());
        vector<int> a;
        for(int i = 0 ; i < n; i++){
            if(arr[i] != mx){
                a.push_back(arr[i]);
            }
        }
        
        if(a.size() == 0){
            cout<<-1<<endl;
            continue;
        }
 
        cout<<a.size()<<" "<<(n-a.size())<<endl;
 
        for(int i = 0 ; i < a.size(); i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
 
        for(int i = 0 ; i < n ; i++){
            if(arr[i] == mx){
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl;
    }
} 