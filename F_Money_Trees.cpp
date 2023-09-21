#include <bits/stdc++.h>
using namespace std;

long long int fruits[200010];
int heights[200010];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    heights[0] = 0;
    fruits[0] = 0;
    long long int aux;
    while(t--)
    {
        int n, k, lis = 0, total = 0;
        cin >> n >> k;
        for(int i = 1; i <= n; i++)
        {
            cin >> aux;
            fruits[i] = aux + fruits[i - 1];
        }
        for(int i = 1; i <= n; i++)
            cin >> heights[i];
        int i = 1, j = 1;
        while(j <= n)
        {
            if(i == j && fruits[i] - fruits[i - 1] <= k)
            {
                lis = max(lis, 1);
                j++;
            }
            else if(i == j)
            {
                i++;
                j++;
            }
            else if(heights[j] <= heights[j - 1] && heights[j - 1] % heights[j] == 0 && fruits[j] - fruits[i - 1] <= k)
            {
                lis = max(lis, j - i + 1);
                j++;
            }
            else if(heights[j] <= heights[j - 1] && heights[j - 1] % heights[j] == 0)
            {
                i++;
            }
            else
            {
                i = j;
                j++;
            }
        }
        cout << lis << endl;
    }
}