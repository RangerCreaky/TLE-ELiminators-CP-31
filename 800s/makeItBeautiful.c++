#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
 
        vector<int> arr(n);
        bool same = true;
 
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(i != 0){
                if(arr[i] != arr[i-1]){
                    same = false;
                }
            }
        }
 
        if(same){
            cout<<"No"<<endl;
            continue;
        }
 
        sort(arr.begin(), arr.end(), greater<int>());
 
        int i = 1;
        int val = arr[0];
 
        while(arr[i] == val){
            i++;
        }
 
        if(i != 1){
            int temp = arr[1];
            arr[1] = arr[i];
            arr[i] = temp;
        }
        cout<<"Yes"<<endl;
        for(auto it:arr)cout<<it<<" ";
        cout<<endl;
    }
}