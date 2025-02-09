#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream fin("Graph.txt");
    int n, m;
    fin >> n >> m;

    vector<int> *Adj = new vector<int>[n];
    int u, v;

    for (int i = 0; i < m; i++){
        fin >> u >> v;
        Adj[u].push_back(v);
    }

    for (int i = 0; i < n; i++){
        cout << i << " -> ";
        for (int j = 0; j < Adj[i].size(); j++){
            cout << Adj[i][j] << " ";
        }
        cout << endl;
    }
}