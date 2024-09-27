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
        };

        int min_val = *min_element(arr.begin(), arr.end());
        int max_val = *max_element(arr.begin(), arr.end());

        bool found = false;
        // case 1 and 2 and 3
        for(int i=0; i<n; i++){
            if(arr[i] == min_val){
                if(i == 0) {
                    cout<<(max_val - min_val)<<endl;
                    found = true;
                    break;
                }
            }
            
            if(arr[i] == max_val){
                if(i == n-1){
                    cout<<(max_val - min_val)<<endl;
                    found = true;
                    break;
                }
                if(arr[i+1] == min_val){
                    cout<<(max_val - min_val)<<endl;
                    found = true;
                    break;
                }
            }
        }

        // case 4 and 5
        if(!found){
            int mx = (max(max_val - arr[0], arr[n-1] - min_val));
            for(int i = 1; i < n; i++){
                mx = max(mx, arr[i-1] - arr[i]);
            }
            
            cout<<mx<<endl;
        }
    }
}
