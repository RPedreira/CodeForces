#include <bits/stdc++.h>
using namespace std;
#define MAX 100001

int main(){
    int testes;
    cin >> testes;
    while(testes--)
    {
        int v[MAX];
        int m , n, val, controle = 0, index = 0;
        long long int tempo = 0;
        cin >> n >> m;
        for(int i = 0; i < n; i++)
        {
            cin >> val;
            v[val] = i;
        }
        for(int i = 0; i < m; i++)
        {
            cin >> val;
            if(v[val] < index)
                tempo += 1;
            else{
                tempo += 2*(v[val] - controle) + 1;
                index = v[val];
            }
            controle++;
        }
        cout << tempo << endl;
    }
}