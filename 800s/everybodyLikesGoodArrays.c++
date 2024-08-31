#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
 
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
 
        int i = 0;
        int count = 0;
        while(i < n){
            int curr_count = 0;
            bool isOdd = (arr[i]%2 == 0);;
            while(i < n && (isOdd == (arr[i]%2 == 0))){
                curr_count++;
                i++;
            }
            count += curr_count-1;
        }
        
        cout<<count<<endl;
    }
}