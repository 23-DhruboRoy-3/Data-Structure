#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fin("Graph2.txt");
    int n, m;
    fin >> n >> m;
    
    vector<vector<int>> Mat(n, vector<int>(n, 0));
    int u, v,weight;
    for (int i = 0; i < m; i++)
    {
        fin >> u >> v>>weight;
        Mat[u][v] = weight;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << Mat[i][j] << " ";
        }
        cout << endl;
    }
}
