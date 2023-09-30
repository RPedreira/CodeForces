#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t, longest = 0;
    cin >> n >> t;
    long long int aux;
    vector<long long int> seq;
    for(int i = 0; i < n; i++)
    {
        cin >> aux;
        seq.push_back(aux);
    }
    int i = 0, j = 0;
    aux = 0;
    for(; j < n;)
    {
        if(aux + seq[j] <= t)
        {
            aux += seq[j];
            longest = max(longest, j - i + 1);
            j++;
        }
        else if(i == j)
        {
            i++;
            j++;
        }
        else
        {
            aux -= seq[i];
            i++;
        }
    }
    cout << longest << endl;
}