#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, alpha[26]={0};
    char aux;
    string s, ans;
    cin >> n >> k >> s;

    for(int i = 0; i < n; i++)
    {
        aux = s[i];
        alpha[aux - 97]++;
    }
    
    int index, soma = 0;

    for(index = 0; index < 26 && soma + alpha[index] <= k; index++)
    {
        soma += alpha[index]; 
    }

    soma = k - soma;

    for(int i = 0; i < n; i++)
    {
        aux = s[i];
        if(aux == index + 97 && soma)
            soma--;
        else if(aux >= index + 97)
            ans.push_back(aux);
    }

    cout << ans << endl;
}