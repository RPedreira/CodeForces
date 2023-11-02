#include <bits/stdc++.h>
using namespace std;

#define BS -1

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n, aux;
        int logF, logS;
        bool flag = true;
        cin >> n;
        vector<int> seq;
        seq.push_back(BS);
        for(int i = 0; i < n; i++)
        {
            cin >> aux;
            seq.push_back(aux);
        }
        for(int i = 1; i < n && flag; i++)
        {
            logF = ceil(log2(i));
            logS = ceil(log2(i + 1));
            if(seq[i] > seq[i + 1] && logF == logS)
                flag = false;
        }
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}