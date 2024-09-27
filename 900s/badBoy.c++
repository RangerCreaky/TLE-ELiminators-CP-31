#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;

    while(t--){
        long long n, m, i, j;

        cin>>n>>m>>i>>j;

        // top left and top right
        long long one = (i-1)+(j-1)+(m-1)+(i-1)+(m-j);

        // top left and bottom right
        long long two = (i-1)+(j-1)+(m-1)+(n-1)+(m-j)+(n-i);

        // top left and bottom left
        long long three = (i-1)+(j-1)+(n-1)+(n-i)+(j-1);

        // bottom left and top right
        long long four = (n-i)+(j-1)+(m-1)+(n-1)+(i-1)+(m-j);

        // bottom left and bottom right
        long long five = (n-i)+(j-1)+(m-1)+(m-j)+(n-i);

        // bottom right and top right
        long long six = (n-i)+(m-j)+(n-1)+(m-j)+(i-1);

        long long mx = max({one, two, three, four, five, six});

        if(one == mx){
            cout<<1<<" "<<1<<" "<<1<<" "<<m<<endl;
            continue;
        }
        else if(two == mx){
            cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
            continue;
        }
        else if(three == mx){
            cout<<1<<" "<<1<<" "<<n<<" "<<1<<endl;
            continue;
        }
        else if(four == mx){
            cout<<n<<" "<<1<<" "<<1<<" "<<m<<endl;
            continue;
        }
        else if(five == mx){
            cout<<n<<" "<<1<<" "<<n<<" "<<m<<endl;
            continue;
        }
        else if(six == mx){
            cout<<n<<" "<<m<<" "<<1<<" "<<m<<endl;
        }

    }
}