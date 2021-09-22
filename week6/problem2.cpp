#include <bits/stdc++.h>
using namespace std;


bool DFS(vector<vector<int>> &g, int a, int b){
    static vector<int> visited(g.size(), 0);
    if(a == b) return true;
    visited[a] = 1;
    bool ans = false;
    for(int i=0;i<(int)g[a].size();i++){
        if(g[a][i] == 1 and !visited[i]) 
            ans |=  DFS(g, i, b);
    } 
    return ans;
}


int main(){
    //
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("inp1.txt", "r", stdin);
    freopen("out1.txt", "w", stdout);
    //

    int n,a,b;
    cin >> n;
    vector<vector<int>> g(n, vector<int> (n, 0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> g[i][j];
        }
    }

    cin >> a >> b;
    a--;b--;
    bool ans = DFS(g, a, b);
    if(ans) cout << "Yes path exists\n";
    else cout << "No path exists\n";

    return 0;
}
