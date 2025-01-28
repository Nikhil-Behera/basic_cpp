#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "n(nodes) : ";
    cin >> n;
    cout << "m(edges) : ";
    cin >> m;

    int adj[n + 1][n + 1];              //create the adj matrix and initialise at 0.
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            adj[i][j] = 0;
        }
    }

    int i1, i2;
    for (int i = 1; i <= m; i++)            //input the adjmatrix through taking node and its adjacent node.
    {

        cout << "Enter the node: ";
        cin >> i1;
        cout << "Enter the adjacent node: ";
        cin >> i2;

        adj[i1][i2] = 1;
        adj[i2][i1] = 1;
    }

    for (int i = 1; i <= n; i++)            //display graph
    {
        for (int j = 1; j <= n; j++)
        {
            cout << adj[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}