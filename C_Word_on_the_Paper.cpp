#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        string s;
        char aux;
        for(int i = 0; i < 64; i++)
        {
            cin >> aux;
            if(aux != '.')
                s.push_back(aux);
        }
        cout << s << endl;
    }
}