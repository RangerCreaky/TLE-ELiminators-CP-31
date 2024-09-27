// #include<bits/stdc++.h>
// using namespace std;

// void solve(){
//     int a, b, c;
//     cin>>a>>b>>c;

//     // check a
//     if(2*b == c){
//         if(a == 0){
//             cout<<"Yes"<<endl;
//             return;
//         }
//     }
//     else{
//         if(a == 1){
//             int d = c-b;
//             if(b-d > 0){
//                 cout<<"Yes"<<endl;
//                 return;
//             }
//         }
//         else if((2*b-c)%a == 0){
//             cout<<"Yes"<<endl;
//             return;
//         }
//     }

//     // check c
//     if(2*b == a){
//         if(c == 0){
//             cout<<"Yes"<<endl;
//             return;
//         }
//     }
//     else{
//         if(c == 1){
//            int d = b-a;
//            if(b+d > 0){
//                cout<<"Yes"<<endl;
//                return;
//            }
//         }
//         else if((2*b-a)%c == 0){
//             cout<<"Yes"<<endl;
//             return;
//         }
//     }

//     // check b
//     if((a+c) % (2*b) == 0){
//         cout<<"Yes"<<endl;
//         return;
//     }
//     cout<<"No"<<endl;

// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--) solve();
// }

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, c;
    cin >> a >> b >> c;

    // Check if multiplying a, b, or c can form an AP
    // Case 1: Multiply a by some m
    if ((2 * b - c) % a == 0 && (2 * b - c) / a > 0) {
        cout << "YES" << endl;
        return;
    }
    // Case 2: Multiply b by some m
    if ((a + c) % 2 == 0 && ((a + c) / 2) % b == 0 && (a + c) / 2 / b > 0) {
        cout << "YES" << endl;
        return;
    }
    // Case 3: Multiply c by some m
    if ((2 * b - a) % c == 0 && (2 * b - a) / c > 0) {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--) solve();
}
