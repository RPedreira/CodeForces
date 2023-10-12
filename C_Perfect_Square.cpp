#include <bits/stdc++.h>
using namespace std;

char matrix[1000][1000];

char maximo(char a, char b, char c, char d)
{
    char maior;
    maior = max(a, b);
    maior = max(maior, c);
    maior = max(maior, d);
    return maior;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n, ans = 0, diff = 0;
        cin >> n;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> matrix[i][j];
        for(int linhaIni = 0, linhaFim = n - 1, colunaIni = 0, colunaFim = n - 1; linhaIni < n / 2; linhaIni++, linhaFim--, colunaIni++, colunaFim--)
        {
            for(int k = 0; k < n - diff; k++)
            {
                char maior = maximo(matrix[linhaIni][colunaFim - k], matrix[linhaFim - k][colunaFim], matrix[linhaFim][colunaIni + k], matrix[linhaIni + k][colunaIni]);
                ans += maior - matrix[linhaIni][colunaFim - k];
                matrix[linhaIni][colunaFim - k] = maior;
                ans += maior - matrix[linhaFim - k][colunaFim];
                matrix[linhaFim - k][colunaFim] = maior;
                ans += maior - matrix[linhaFim][colunaIni + k];
                matrix[linhaFim][colunaIni + k] = maior;
                ans += maior - matrix[linhaIni + k][colunaIni];
                matrix[linhaIni + k][colunaIni] = maior;
            }
            diff += 2;
        }
        cout << ans << endl;
    }
}