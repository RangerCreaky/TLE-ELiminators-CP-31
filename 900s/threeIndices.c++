#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> v(n);

        for(int i=0; i<n; i++){
            cin>>v[i];
        }


        vector<pair<int, int>> pre(n);
        vector<pair<int, int>> post(n);

        pre[0] = {v[0], 0};
        pre[1] = {v[0], 0};
        for(int i=2; i<n; i++){
            if(v[i-1] < pre[i-1].first){
                pre[i] = {v[i-1], i-1};
            }
            else{
                pre[i] = {pre[i-1].first, pre[i-1].second};
            }
        }


        post[n-1] = {v[n-1], n-1};
        post[n-2] = {v[n-1], n-1};
        for(int i = n-3 ; i >=0 ; i--){
            if(v[i+1] < post[i+1].first){
                post[i] = {v[i+1], i+1};
            }
            else{
                post[i] = {post[i+1].first, post[i+1].second};
            }
        }

        bool found = false;
        int x = 0, y = 0, z = 0;

        for(int i = 1; i < n-1; i++){
            int l = pre[i].first;
            int r = post[i].first;

            if(l < v[i] && r < v[i]){
                found = true;
                x = pre[i].second;
                z = post[i].second;
                y = i;
                break;
            }
        }

        if(found){
            cout<<"Yes"<<endl;
            cout<<x+1<<" "<<y+1<<" "<<z+1<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }
}