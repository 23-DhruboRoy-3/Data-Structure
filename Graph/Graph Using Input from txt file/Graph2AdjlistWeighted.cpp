#include <bits/stdc++.h>
using namespace std;

int main(){

    ifstream fin("Graph2.txt");
    int n, m;
    fin >> n >> m;

    vector<pair<int, int>> *Adj = new vector<pair<int, int>>[n];
    int u, v, w;

    for (int i = 0; i < m; i++){
        fin >> u >> v >> w;
        Adj[u].push_back(make_pair(v, w));
    }

    for (int i = 0; i < n; i++){
        cout << i << " -> ";
        for (int j = 0; j < Adj[i].size(); j++){
            cout << "(" << Adj[i][j].first << "," << Adj[i][j].second << ")";
        }
        cout << endl;
    }
}