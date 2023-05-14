#include <bits/stdc++.h>
using namespace std;

int paths = 0, cats;

void DFS (vector <list<int>> &graph, vector<int> &cat, int vertex, int streak, int before){
    if(cat[vertex])
        streak--;
    else
        streak = cats;
    list<int>::iterator itb = graph[vertex].begin(), ite = graph[vertex].end();
    if(streak >= 0)
    {
        if(graph[vertex].size() == 1 && vertex != 1)
            paths++;
        else
        {
            while(itb != ite)
            {
                if(*itb != before)
                    DFS(graph, cat, *itb, streak, vertex);
                itb++;
            }
        }
    }
}

int main(){
    int nodes, aux, x, y;
    cin >> nodes >> cats;
    vector <int> cat;
    vector <list<int>> graph(nodes + 1);
    cat.push_back(0);
    for(int i = 1; i <= nodes; i++)
    {
        cin >> aux;
        cat.push_back(aux);
    }
    for(int i = 1; i < nodes; i++)
    {
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    DFS(graph, cat, 1, cats, 0);
    cout << paths << endl;
}