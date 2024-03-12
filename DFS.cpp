#include <iostream>
#include <cstdlib>

using namespace std;

class DFSTree
{
    int a[20][20], visited[20], n;

public:
    void dfs(int);
    void get();
};

void DFSTree::get()
{
    cout << "Enter the number of nodes: ";
    cin >> n;
    
    for (int i = 0; i < n; ++i)
        visited[i] = 0;

    cout << "Enter the Adjacency Matrix:\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> a[i][j];

    dfs(0);
}

void DFSTree::dfs(int v)
{
    visited[v] = 1;
    cout << "\t" << v + 1;

    for (int k = 0; k < n; ++k)
        if (a[v][k] == 1 && !visited[k])
            dfs(k);
}

int main()
{
    DFSTree d;
    d.get();
    return 0;
}
