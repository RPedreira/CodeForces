#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t;
    cin >> t;
    while(t--)
    {
        string s;
        long long int n, tam, tamAtual, cont = 0;
        cin >> s >> n;
        tam = tamAtual = s.size();
        while(tam < n)
        {
            cont++;
            tam += --tamAtual;
        }
        stack<char> pilha;
        for(int i = 0; i < s.size();)
        {
            if(!cont)
            {
                pilha.push(s[i]);
                i++;
            }
            else if(pilha.empty())
            {
                pilha.push(s[i]);
                i++;
            }
            else if(pilha.top() > s[i] && cont)
            {
                pilha.pop();
                cont--;
            }
            else
            {
                pilha.push(s[i]);
                i++;
            }
        }
        while(cont)
        {
            pilha.pop();
            cont--;
        }
        while(tam != n)
        {
            pilha.pop();
            tam--;
        }
        cout << pilha.top();
    }
}