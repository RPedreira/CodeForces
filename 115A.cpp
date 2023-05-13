#include <bits/stdc++.h>
using namespace std;

void DFS(vector <list<int>> &tree, int rank[], int node, int profundidade){
    list<int>::iterator itb = tree[node].begin(), ite = tree[node].end();
    rank[node] = profundidade;
    if(itb != ite)
    {
        while(itb != ite)
        {
            DFS(tree, rank, *itb, profundidade + 1);
            itb++;
        }
    }
}

int main(){
    int n, i, aux;
    cin >> n;
    vector <list<int>> tree(n + 1);
    bool root[2001] = {false};
    int rank[2001] = {0};
    for(i = 1; i <= n; i++)
    {
        cin >> aux;
        if(aux == -1)
            root[i] = true;
        else
            tree[aux].push_back(i);
    }
    for(i = 1; i <= n; i++)
    {
        if(root[i])
        {
            DFS(tree, rank, i, 1);
        }
    }
    cout << *max_element(rank, rank + 2001) << endl;
}