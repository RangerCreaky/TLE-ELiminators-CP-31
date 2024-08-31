#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        vector<string> arr(10);
 
        for(int i=0; i<10; i++){
            cin>>arr[i];
        }
 
        int points = 0;
 
 
        int start = 0, end = 10;
        int k = 1;
        while(k <= 5){
            // top
            for(int i = start; i<end; i++){
                if(arr[start][i] == 'X'){
                    points += k;
                }
            }
 
            // left
            for(int i = start+1; i < end; i++){
                if(arr[i][start] == 'X'){
                    points += k;
                }
            }
 
            // bottom
            for(int i = start+1; i < end; i++){
                if(arr[end-1][i] == 'X'){
                    points += k;
                }
            }
 
            // right
            for(int i = start+1; i < end-1; i++){
                if(arr[i][end-1] == 'X'){
                    points += k;
                }
            }
            k++;
            start ++;
            end--;
        }
        cout<<points<<endl;
    }
 
    
}