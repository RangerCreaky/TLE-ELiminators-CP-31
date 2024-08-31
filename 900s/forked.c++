#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> knight_moves(int x, int y, int a, int b){
    vector<pair<int, int>> moves;

    moves.push_back({x-a, y+b});
    moves.push_back({x-b, y+a});

    moves.push_back({x-a, y-b});
    moves.push_back({x-b, y-a});

    moves.push_back({x+a, y+b});
    moves.push_back({x+b, y+a});

    moves.push_back({x+a, y-b});
    moves.push_back({x+b, y-a});
    
    return moves;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;

        int xk, yk;
        cin>>xk>>yk;

        int xq, yq;
        cin>>xq>>yq;

        int count = 0;
        // positions from which it can kill king
        vector<pair<int, int>> positions_kill_king = knight_moves(xk, yk, a, b);
        map<pair<int, int>, int> mp;

        for(int i = 0; i < positions_kill_king.size(); i++){
            int x = positions_kill_king[i].first;
            int y = positions_kill_king[i].second;

            vector<pair<int, int>> positions_kill_queen = knight_moves(x, y, a, b);

            for(int j = 0; j < positions_kill_queen.size(); j++){
                int nx = positions_kill_queen[j].first;
                int ny = positions_kill_queen[j].second;
                if(nx == xq && ny == yq){
                    mp[{x, y}]++;
                }
            }
        }


        cout<<mp.size()<<endl;
    }
}