#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int points[10][10] = {0};
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(i == 0 || i == 9 || j == 0 || j == 9)
                points[i][j] = 1;
            else if(i == 1 || i == 8 || j == 1 || j == 8)
                points[i][j] = 2;
            else if(i == 2 || i == 7 || j == 2 || j == 7)
                points[i][j] = 3;
            else if(i == 3 || i == 6 || j == 3 || j == 6)
                points[i][j] = 4;
            else
                points[i][j] = 5;
        }
    }
    while(n--)
    {
        char aux;
        int total = 0;
        for(int i = 0; i < 10; i++)
        {
            for(int j = 0; j < 10; j++)
            {
                cin >> aux;
                if(aux == 'X')
                    total += points[i][j];
            }
        }
        cout << total << endl;
    }
}