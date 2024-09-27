#include <bits/stdc++.h>
using namespace std;

int main(){
    // we can put arr[i] and i in the correct place
    // by choosing a k which divides abs(arr[i] - 1)
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }


        int ans = abs(arr[0]-1);
        for(int i = 1; i <= n; i++){
            int diff = abs(arr[i-1] - i);

            if(diff != 0){
                ans = __gcd(ans, diff);
            }
        }

        cout<<ans<<endl;
    }
}