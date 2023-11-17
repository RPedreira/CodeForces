#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n, indexMenor = 0, aux;
        bool flag = true;
        cin >> n;
        vector<int> seq;
        for(int i = 0; i < n; i++)
        {
            cin >> aux;
            seq.push_back(aux);
            if(aux < seq[indexMenor])
                indexMenor = i;
        }
        for(int i = indexMenor + 1; i < n; i++)
        {
            if(seq[i] < seq[i - 1])
                flag = false;
        }
        if(flag)
            cout << indexMenor << endl;
        else
            cout << -1 << endl;
    }
}