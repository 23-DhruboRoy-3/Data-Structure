#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream fin("Graph.txt");
    int n, m;
    fin >> n >> m;

    vector<vector<bool>> Mat(n, vector<bool>(n, 0));
    int u, v;

    for (int i = 0; i < m; i++){
        fin >> u >> v;
        Mat[u][v] = 1;
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << Mat[i][j] << " ";
        }
        cout << endl;
    }
}