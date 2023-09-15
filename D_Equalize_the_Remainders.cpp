#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, aux, div;
    long long int total = 0;
    cin >> n >> m;
    div = n / m;
    vector<int> seq;
    vector<stack<int>> index(m);
    vector<pair<int,int>> open;

    for(int i = 0; i < n; i++)
    {
        cin >> aux;
        seq.push_back(aux);
        index[aux % m].push(i);
    }

    for(int i = 0; i < 2 * m; i++)
    {
        while(index[i % m].size() > div)
        {
            open.push_back({index[i % m].top(), i});
            index[i % m].pop();
        }
        while(index[i % m].size() < div && !open.empty())
        {
            index[i % m].push(open.back().first);
            total += i - open.back().second;
            seq[open.back().first]+= i - open.back().second;
            open.pop_back();
        }
    }

    cout << total << endl;
    for(auto it : seq)
    {
        cout << it << ' ';
    }
    cout << endl;
}